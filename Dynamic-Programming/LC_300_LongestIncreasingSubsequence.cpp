/*
https://leetcode.com/problems/longest-increasing-subsequence/
300. Longest Increasing Subsequence

*/
class Solution {
public: 
    vector<vector<int>> memo;
    int solveMemo0toN(int i, int prev, vector<int>& nums)
    {
        if(i==n) return 0;
        
        if(memo[i][prev+1] != -1) return memo[i][prev+1];
        
        int pick = INT_MIN;
        if(prev==-1 || nums[prev] < nums[i])
            pick = 1 + solveMemo0toN(i+1, i, nums);
        
        int notpick = solveMemo0toN(i+1, prev, nums);
        return memo[i][prev+1]=max(pick, notpick);
    }
    
    int solveMemoNto0(int i, int prev, vector<int>& nums)
    {
        if(i==0) 
        {
            if(prev == n) return 1;
            return nums[i]<nums[prev];
        }
        
        if(memo[i][prev] != -1) return memo[i][prev];
        
        int pick = INT_MIN;
        if(prev==n || nums[prev] > nums[i])
            pick = 1 + solveMemoNto0(i-1, i, nums);
        
        int notpick = solveMemoNto0(i-1, prev, nums);
        return memo[i][prev]=max(pick, notpick);
    }
    
    int using_tabulation(vector<int>& nums)
    {
        vector<vector<int>> dp(n+1, vector<int>(n+1, 0));
        //
        dp[0][n]=1;
        for(int i=0;i<n;i++){
            dp[0][i] = (nums[0] < nums[i]);
        }
        for(int cur=1; cur<n; cur++)
        {
            for(int prev=0; prev<=n; prev++)
            {
                int pick = INT_MIN;
                if(prev==n || nums[prev] > nums[cur])
                    pick = 1 + dp[cur-1][cur]; 

                int notpick = dp[cur-1][prev];
                dp[cur][prev]=max(pick, notpick);
            }
        }
        return dp[n-1][n];
        
        //
        for(int cur=n-1; cur>=0; cur--)
        {
            for(int prev=cur-1; prev>=-1; prev--)
            {
                int pick = INT_MIN;
                if(prev==-1 || nums[prev] < nums[cur])
                    pick = 1 + dp[cur+1][cur+1]; //next element i+1, prev element is this one i index i+1

                int notpick = dp[cur+1][prev+1];
                dp[cur][prev+1]=max(pick, notpick);
            }
        }
        return dp[0][0];
    }
    
    int n;
    int lengthOfLIS(vector<int>& nums) {
        n = nums.size();
        if(n==0) return 0;
        
        // memo.resize(n, vector<int>(n+1, -1));
        // return solveMemo0toN(0, -1, nums); 
        // return solveMemoNto0(n-1, n, nums);
        // return using_tabulation(nums);
        // return using_1DP_twoLoops(nums);
        return using_1DP_OneLoop(nums); 

    }
    
    int using_1DP_twoLoops(vector<int>& nums) { 
        vector<int> dp(n,1);
        for(int i=1; i<n; i++)
        {
            for(int j=0; j<i; j++)
            {
                if(nums[j] < nums[i] && dp[j]+1 > dp[i])
                    dp[i] = dp[j]+1;
            }
        }

        return *max_element(dp.begin(), dp.end());
    }

     int using_1DP_OneLoop(vector<int>& nums) { 
        vector<int> ans; 
        for(int x: nums)
        {
            int ind = lower_bound(ans.begin(), ans.end(), x) - ans.begin();
            if(ind == ans.size())
                ans.push_back(x);
            else
                ans[ind] = x;
            //    for(int x: ans)
            //     cout<<x<<" ";
            //     cout<<endl;
        }

        return ans.size();
    }
};