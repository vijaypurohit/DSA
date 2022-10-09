/*
698. Partition to K Equal Sum Subsets
https://leetcode.com/problems/partition-to-k-equal-sum-subsets/
*/

class Solution {
public:
    int n;
    int target;
    unordered_map<short, bool> memo;
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        n = nums.size();
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if(sum%k != 0 ) // we will not be able to make equal sum subsets of quantity k
            return false;
        
        target = sum/k;
        short mask=0;
        sort(nums.begin(), nums.end(), greater<int>());
        return solve(0, k, 0, mask, nums);
    }//
    
    bool solve(int sum, int k, int start, short mask, vector<int>& nums)
    {
        if(k==1) // as sum is divisible by k therefore, if k-1 partition exist last one will surely exist
            return true;
        if(sum == target)
        {
            return memo[mask] = solve(0, k-1, 0, mask, nums);
        }
        if(memo.count(mask))
            return memo[mask];
        for(int i=start; i<n; i++)
        {
            if((mask>>i) & 1)
                continue;
            int csum = sum+nums[i];
            if(csum > target) continue;
            // if(i>0 and nums[i] == nums[i-1]) continue;
            
            if(solve(csum, k, i+1, mask| 1<<i, nums))
                return memo[mask] = true;
            
        }
        return memo[mask] = false;
    }
};