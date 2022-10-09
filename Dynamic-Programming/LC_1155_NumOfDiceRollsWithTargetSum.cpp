/*
https://leetcode.com/problems/number-of-dice-rolls-with-target-sum/
*/

class Solution {
    const int mod = 1e9+7;
public:
    // int n, k, target;
    vector<vector<int>> memo;
    int numRollsToTarget(int n, int k, int target) {
        // return bruteForce(n,k, target);
        
        // memoization
        // memo.resize(n+1, vector<int>(target+1, -1));
        // return solve(n, k, target);
        
        // 2D DP
        // return solve2DP(n, k, target);
        // return solve2DP_1DP(n, k, target); 
    }
     
    
     int solve2DP_1DP(int n, int k, int target) {
        vector<int> dp(target+1); 
         dp[0] = 1;
        for(int d=1; d<=n; d++)
        {
            vector<int> cur(target+1,0);
            for(int v=1; v<=k; v++)
            {
                for(int t=v; t<=target; t++)
                { 
                    cur[t] = (cur[t] + dp[t-v])%mod;
                }
            }
            swap(dp, cur);
        }
        return dp[target];
    }
    
    int solve2DP(int n, int k, int target) {
        vector<vector<int>> dp(n+1, vector<int>(target+1, 0));
        //dp[i][j] is the number of ways to roll dice i so that the sum of the face up numbers equals target;
        dp[0][0] = 1;
        for(int d=1; d<=n; d++)
        {
            for(int v=1; v<=k; v++)
            {
                for(int t=v; t<=target; t++)
                {
                    // if(v <= t)
                        dp[d][t] = (dp[d][t] + dp[d-1][t-v])%mod;
                }
            }
        }
        return dp[n][target];
    }
    
    int solve(int n, int k, int target)
    {
        // if(n==0) return (target==0);
        // if(target <= 0) return 0;
        if(n==0 || target <=0) return (n==0 and target==0);
        if(memo[n][target] != -1) return memo[n][target];
        int ans=0;
        for(int v=1; v<=k; v++)
            ans = (ans + solve(n-1, k, target-v))%mod;
        return memo[n][target]=ans;
    }
    
    int bruteForce(int n, int k, int target)
    {
        if(n==0) return target == 0;
        if(target <= 0) return n==0;
        int ans=0;
        for(int i=1; i<=k; i++)
            ans = (ans + bruteForce(n-1, k, target-i))%mod;
        return ans;
    }
};