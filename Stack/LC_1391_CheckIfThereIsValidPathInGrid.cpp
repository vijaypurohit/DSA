/*
https://leetcode.com/problems/check-if-there-is-a-valid-path-in-a-grid/
*/

class Solution {
public:
    int m, n;
    vector<vector<bool>> visited; 
    // forward and backward both direction for each street type
    vector<vector<pair<int,int>>> dirs = {
        {{0, +1}, {0, -1}}, 
        {{1, 0}, {-1, 0}}, 
        {{1, 0}, {0, -1}}, 
        {{1, 0}, {0, 1}}, 
        {{-1, 0}, {0, -1}}, 
        {{-1, 0}, {0, 1}},
    };
         
    bool hasValidPath(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();
        if(m==1 and n==1) return true;
        
        // return dfs_upscale_sol(grid);  
        visited.resize(m, vector<bool>(n, false)); 
        return bfs_sol(grid);  
    }
    
    //bfs
    bool bfs_sol(vector<vector<int>>& grid)
    {
        queue<pair<int,int>> q; q.push({0,0});
        visited[0][0] = true;
        while(!q.empty())
        {
            auto [r, c] = q.front(); q.pop();
            int street = grid[r][c]-1;
            for(auto [nx, ny]: dirs[street])
            {
                nx = r + nx;
                ny = c + ny;
                if(nx<0 or ny<0 or nx>=m or ny>=n or visited[nx][ny])
                    continue;
                // now nx and ny are the current location of new street
                for(auto [bx, by]: dirs[grid[nx][ny]-1])
                { // bx and by are the direction it can go, cur_loc+dir = prev_r
                    if(bx+nx==r and by+ny == c)
                    {
                        visited[nx][ny] = true;
                        q.push({nx, ny});
                    }
                }//back
            }//for
        }//while
        return visited[m-1][n-1];
    }
    
    //upscale
    bool dfs_upscale_sol(vector<vector<int>>& grid)
    {
         vector<vector<bool>> g(m * 3, vector<bool>(n * 3));
        for (auto i = 0; i < m; ++i)
            for (auto j = 0; j < n; ++j) {
                int r = grid[i][j];
                g[i * 3 + 1][j * 3 + 1] = true;
                g[i * 3 + 1][j * 3 + 0] = (r == 1 || r == 3 || r == 5);
                g[i * 3 + 1][j * 3 + 2] = (r == 1 || r == 4 || r == 6);
                g[i * 3 + 0][j * 3 + 1] = (r == 2 || r == 5 || r == 6);
                g[i * 3 + 2][j * 3 + 1] = (r == 2 || r == 3 || r == 4);
            }
        return dfs(g, 1, 1);    
    }
    bool dfs(vector<vector<bool>> &g, int i, int j) {
        if (min(i, j) < 0 || i >= g.size() || j >= g[i].size() || !g[i][j])
            return false;
        if (i == g.size() - 2 && j == g[i].size() - 2)
            return true;
        g[i][j] = false;
        return dfs(g, i - 1, j) || dfs(g, i + 1, j) || dfs(g, i, j + 1) || dfs(g, i, j - 1);
    }
    
};

