/*
https://leetcode.com/problems/increasing-triplet-subsequence/
*/
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        /* // TLE
        for(int i=0; i<n-2; i++) 
            for(int j=i+1; j<n-1; j++) 
                for(int k=j+1; k<n; k++) 
                    if(nums[i] < nums[j]  and nums[j] < nums[k])
                        return true; 
        */
        
        /* //TLE
        vector<int> dp(n, 1); 
        for(int i=1; i<n; i++)
        {
            for(int j=0; j<i; j++)
            {
                if(nums[j] < nums[i] and dp[j]+1 > dp[i])
                {
                    dp[i] = dp[j]+1;
                    if(dp[i] >=3)return true;
                } 
            }
        }
        */
        
        /* //LIS solution
        vector<int> ans ; 
        for(int &x: nums)
        {
            int idx = lower_bound(ans.begin(), ans.end(), x) - ans.begin();
            if(idx == ans.size())
                ans.push_back(x);
            else
                ans[idx] = x;
            if(ans.size()>=3)return true;
        }
        */
        int c1 = INT_MAX, c2 = INT_MAX;
        for(int &x: nums)
        {
            if(x<=c1)
                c1 = x;
            else if (x <= c2)
                c2 = x;
            else 
                return true;
        }
        return false;
    }
};