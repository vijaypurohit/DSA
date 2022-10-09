/*
1691. Maximum Height by Stacking Cuboids
https://leetcode.com/problems/maximum-height-by-stacking-cuboids/
*/

class Solution {
public: 
    
    int n;
    int using_1DP(vector<vector<int>>& cuboids) {
        vector<int> dp(n);
        dp[0] = cuboids[0][2];
        for(int i=1; i<n; i++)
        {
            int maxi=0;
            for(int j=0; j<i; j++)
            {
                if(cuboids[j][1] <= cuboids[i][1] and cuboids[j][2] <= cuboids[i][2])
                    maxi = max(maxi, dp[j]);
            }
            dp[i] = cuboids[i][2]+maxi;
        }
        return *max_element(dp.begin(), dp.end());
    }//
    
    
    int maxHeight(vector<vector<int>>& cuboids) {
        
        n = cuboids.size();
        for(auto &box: cuboids)
            sort(box.begin(), box.end());
        sort(cuboids.begin(), cuboids.end());
        // memo.resize(n, vector<int>(n+1, -1));
        // return solve(0, -1, cuboids);
        // return solve_2DP(cuboids);
        return using_1DP(cuboids);
    }
    
    int solve_2DP( vector<vector<int>>& cuboids)
    { 
        vector<vector<int>> dp(n+1, vector<int>(n+1, 0));
        for(int i=n-1; i>=0; i--)
        {
            for(int prev=i-1; prev>=-1; prev--)
            {
                int pick = INT_MIN;
                if(prev==-1 || (cuboids[prev][1] <=cuboids[i][1] and cuboids[prev][2] <=cuboids[i][2]))
                    pick = cuboids[i][2] + dp[i+1][i+1];

                int notpick = dp[i+1][prev+1];
                dp[i][prev+1]=max(pick, notpick);
            }
        }
        return dp[0][0];
    }//
    
    vector<vector<int>> memo;
    int solve(int i, int prev, vector<vector<int>>& cuboids)
    {
        if(i==n) return 0;
        
        if(memo[i][prev+1] != -1) return memo[i][prev+1];
        
        int pick = INT_MIN;
        if(prev==-1 || cuboids[prev][1] <=cuboids[i][1] and cuboids[prev][2] <=cuboids[i][2])
            pick = cuboids[i][2] + solve(i+1, i, cuboids);
        
        int notpick = solve(i+1, prev, cuboids);
        return memo[i][prev+1]=max(pick, notpick);
    }
    
};