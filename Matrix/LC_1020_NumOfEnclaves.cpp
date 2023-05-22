/*
https://leetcode.com/problems/number-of-enclaves/
*/

class Solution {
public:
    int m,n;
    int numEnclaves(vector<vector<int>>& grid) {
        m = grid.size(); n = grid[0].size();
        // vector visited(m, vector<bool>(n, 0)); 
        vector<vector<bool>> visited(m, vector<bool>(n, 0));
        for(int r=0; r<m; r++){
            if(grid[r][0] == 1 and !visited[r][0]) //first col
                bfs(r,0, visited, grid);
            if(grid[r][n-1] == 1 and !visited[r][n-1]) // last col
                bfs(r,n-1, visited, grid);
        }
        for(int c=0; c<n; c++){
            if(grid[0][c] == 1 and !visited[0][c]) //first row
                bfs(0,c, visited, grid);
            if(grid[m-1][c] == 1 and !visited[m-1][c]) // last row
                bfs(m-1,c, visited, grid);
        }
        int ans=0;
        for(int r=1; r<m-1; r++){
            for(int c=1; c<n-1; c++){ 
                if(grid[r][c] == 1 and !visited[r][c])  
                    ans++;
            }
        }
        return ans;
    }
    
    vector<pair<int,int>> dirs = {{0,1},{0,-1},{1,0},{-1,0}};
    void bfs(int r, int c, vector<vector<bool>>& visited, vector<vector<int>>& grid){
 
        queue<pair<int,int>> q; q.push({r,c});
        visited[r][c] = true;
        
        while(!q.empty()){
            r = q.front().first;
            c = q.front().second; q.pop();
            for(auto [nx, ny]: dirs){
                nx += r; ny += c;
                if(nx<0 or ny<0 or nx>=m or ny>=n)
                    continue;
                else if(grid[nx][ny]==1 and !visited[nx][ny]){
                    q.push({nx, ny});
                    visited[nx][ny]=1;
                }
            }
        }
        return;
    }
};