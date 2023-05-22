/*https://leetcode.com/problems/number-of-closed-islands/
*/
class Solution {
public:
    int m,n;
    int closedIsland(vector<vector<int>>& grid) {
        m = grid.size(); n = grid[0].size();
        vector<vector<bool>> visited(m, vector<bool>(n,0));
        int ans = 0;
        for(int r=0; r<m; r++){
            for(int c=0; c<n; c++){
                if(grid[r][c] == 0 and !visited[r][c] and bfs(r,c,grid,visited))
                    ans++;
            }
        }
        return ans;
    }
    
    vector<pair<int,int>> dirs = {{0,1},{0,-1},{1,0},{-1,0}};
    int bfs(int i, int j, vector<vector<int>>& grid,vector<vector<bool>>& visited){
        queue<pair<int,int>> q; q.push({i,j});
        visited[i][j]=true;
        bool isClosed = true;
        
        while(!q.empty()){
            auto [x,y] = q.front(); q.pop();
            for(auto [nx,ny]: dirs){
                nx += x;
                ny += y;
                if(nx<0 or ny<0 or nx>=m or ny>=n)
                { isClosed = false;}
                else if(grid[nx][ny] == 0 and !visited[nx][ny]){
                    q.push({nx,ny});
                    visited[nx][ny] = true;
                }
            }
        }
        
        return isClosed;
    }
    
};