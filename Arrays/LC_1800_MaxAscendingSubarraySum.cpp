/*
https://leetcode.com/problems/maximum-ascending-subarray-sum/
*/
class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n = nums.size(), sum=nums[0], ans=nums[0];
        for(int i=1; i<n; i++)
        {
            if(nums[i-1] < nums[i])
            { 
                sum += nums[i];
                ans = max(ans, sum);
            }
            else
            { 
                sum = nums[i];
            }
        }
        return ans;
    }
};