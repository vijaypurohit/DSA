/*
https://leetcode.com/problems/number-of-increasing-paths-in-a-grid/
*/

class Solution {
    const int mod = 1e9+7;
public:
    int m, n;
    vector<pair<int,int>> dirs = {{0,1}, {0, -1}, {1,0}, {-1,0}};
    int countPaths(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();
        int ans = 0;
        memo.resize(m, vector<int>(n, -1));
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            { 
                ans = (ans + solve(i, j, grid))%mod;
            }
        }  
        return ans;
    }
    
    vector<vector<int>> memo;
    int solve(int r, int c, vector<vector<int>>& grid)
    {
        if(memo[r][c] != -1) return memo[r][c];
        int cnt = 1; // contribution of current cell
        for(auto [x,y]: dirs) // 4 direction
        {
            x = x+r; y = y+c;
            if(x<0 or y<0 or x>=m or y>=n or grid[x][y] <= grid[r][c])
                continue;
            cnt = (cnt+solve(x, y, grid))%mod; // add total number of cells in the longest path
        }
        return memo[r][c] = cnt;
    }
};