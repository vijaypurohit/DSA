/*
https://leetcode.com/problems/longest-increasing-path-in-a-matrix/
*/

class Solution {
public:
    int m, n;
    vector<pair<int,int>> dirs = {{0,1}, {0, -1}, {1,0}, {-1,0}};
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        m = matrix.size();
        n = matrix[0].size();
        int ans = 1 ; // atleast one cell can always be selected in the path
        
        // memo.resize(m, vector<int>(n, -1));
        // for(int i=0; i<m; i++)
        // {
        //     for(int j=0; j<n; j++)
        //     {
        //         // ans = max(ans, solve(i, j, matrix));
        //         ans = max(ans, solve2(i, j, -1,  matrix));
        //     }
        // }
        
        // TOPOLOGICAL SORT
        vector<vector<int>> indegree(m, vector<int>(n, 0));
        
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                for(auto [x,y]: dirs) // adjacency list
                {
                    x = x+i; y = y+j;
                    if(x<0 or y<0 or x>=m or y>=n or matrix[x][y] <= matrix[i][j])
                        continue;
                    indegree[x][y]++; // calculate indgree of adj node
                }
            } 
        } 
        
        queue<pair<int,int>> q;
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(indegree[i][j] == 0) // indegree with value 0
                    q.push({i, j});
            }
        }
        
        ans=0;
        while(!q.empty())
        {
            int sz = q.size();
            while(sz--)
            {
                auto [r, c] = q.front(); q.pop();
                for(auto [x,y]: dirs) // 4 direction
                {
                    x = x+r;  y = y+c;
                    if(x<0 or y<0 or x>=m or y>=n or matrix[x][y] <= matrix[r][c])
                        continue; 
                    if(--indegree[x][y] == 0)
                        q.push({x, y});
                }
            }
            ans++;
        }
        
        return ans;
    }//longestIncPath
    
    vector<vector<int>> memo;
    int solve(int r, int c, vector<vector<int>>& mat)
    {
        if(memo[r][c] != -1) return memo[r][c];
        int len = 1; // minimum path from each cell is always atleast 1
        for(auto [x,y]: dirs) // 4 direction
        {
            x = x+r;
            y = y+c;
            if(x<0 or y<0 or x>=m or y>=n or mat[x][y] <= mat[r][c])
                continue;
            len = max(len, 1+solve(x, y, mat));
        }
        return memo[r][c] = len;
    }
    
    int solve2(int r, int c, int prev, vector<vector<int>>& mat)
    {
        if(r<0 or c<0 or r>=m or c>=n or mat[r][c] <= prev)
            return 0;
        if(memo[r][c] != -1) return memo[r][c];
        return memo[r][c] = 1 + max({solve2(r+1, c, mat[r][c], mat),
                                    solve2(r-1, c, mat[r][c], mat),
                                    solve2(r, c+1, mat[r][c], mat),
                                    solve2(r, c-1, mat[r][c], mat)  });
    }
};