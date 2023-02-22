/*
https://leetcode.com/problems/maximum-sum-circular-subarray/
*/

class Solution {
public:
    int n;
    int maxSubarraySumCircular(vector<int>& nums) {
        n = nums.size();
        // return byPrefix(nums);
        return byMinSubarray(nums);
    }
    
/*
ans would be MaxOf(normal max sum from kadane algo) OR ( max sum from overlapping point)
for normal max sum - use kadane algo
for overlapping point sum - we use prefix and suffix
prefix could be build when iterating the array 
suffix sum from right side of array. using suffix sum we will find right_max
right_max[i] is the largest suffix sum of nums that comes at or after i.
*/
    int byPrefix(vector<int> & nums)
    {
        //pre-processing
        vector<int> right_max(n, 0);
        right_max[n-1] = nums[n-1];
        for(int i = n-2, suffix_sum = nums[n-1]; i>=0; i--)
        {
            suffix_sum += nums[i];
            right_max[i] = max(suffix_sum, right_max[i+1]); // cur suffix sum or max from right
        }
        
        int max_sum = INT_MIN, curMax=0;
        int max_sumSpecial = nums[0],  prefixSum=0;
        for(int i=0; i<n; i++)
        {
            curMax = max(nums[i], curMax+nums[i]); // max(0, curMax) + nums[i];
            if(max_sum < curMax) max_sum = curMax;
            // for overlapping
            prefixSum += nums[i];
            if(i+1 < n)
                max_sumSpecial = max(max_sumSpecial, prefixSum + right_max[i+1]);
        }
        
        return max(max_sum, max_sumSpecial);
    }//
    
/*
instead of focusing on prefix and suffix of array, find the min subarry sum in the middle
*/
    
    int byMinSubarray(vector<int> & nums)
    {
        int curMax=0, curMin = 0;
        int maxSum=INT_MIN, minSum = INT_MAX;
        int sum=0;
        for(int &x: nums)
        {
            curMax = max(0, curMax) + x;
            if(maxSum < curMax) maxSum = curMax;
            
            curMin = min(0, curMin) + x;
            if(minSum > curMin) minSum = curMin;
            sum += x;
        }
        
        return (sum == minSum) ? maxSum : max(maxSum, sum-minSum);
    }
};