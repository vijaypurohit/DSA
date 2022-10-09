/*
https://leetcode.com/problems/paths-in-matrix-whose-sum-is-divisible-by-k/
*/

class Solution {
public:
    const int mod = 1e9+7;
    int m, n, k;
    vector<vector<vector<int>>> memo;
    int numberOfPaths(vector<vector<int>>& grid, int k) {
        m = grid.size();
        n = grid[0].size();
        this->k = k;
        // number of paths with i, j and rem k
        // memo.resize(m, vector<vector<int>>(n, vector<int>(k, -1)));
        // return solve(0,0, 0, grid); 
        
        vector<vector<vector<int>>> dp(m, vector<vector<int>>(n, vector<int>(k, 0)));
        
        int sum=0;
        for(int i=0; i<m; i++)
        {
            sum += grid[i][0];
            dp[i][0][sum%k] += 1;
        }
        sum = grid[0][0];
        for(int j=1; j<n; j++)
        {
            sum += grid[0][j];
            dp[0][j][sum%k] += 1;
        }
        
        for(int i=1; i<m; i++)
        {
            for(int j=1; j<n; j++)
            {
                for(int a=0; a<k; a++)
                {
                    dp[i][j][(grid[i][j]+a)%k] = (dp[i][j-1][a] + dp[i-1][j][a])%mod;
                }
            }
        }
        
        return dp[m-1][n-1][0];
    }
    
    int solve(int i, int j, int modOfK, vector<vector<int>>& grid)
    {
        if(i<0 or j<0 or i>=m or j>=n) return 0;
        modOfK = (modOfK + grid[i][j])%k;
        if(i==m-1 and j==n-1)
            return modOfK == 0 ? 1 : 0;
        
        if(memo[i][j][modOfK] != -1) return memo[i][j][modOfK];
        
        long ans = solve(i+1, j, modOfK, grid)%mod;
        ans += solve(i, j+1, modOfK, grid);
        
        return memo[i][j][modOfK] = ans % mod;
    }
};