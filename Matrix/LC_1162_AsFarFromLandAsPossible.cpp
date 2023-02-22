/*
https://leetcode.com/problems/as-far-from-land-as-possible/
*/

class Solution {
public:
    // Four directions: Up, Down, Left and Right.
    const pair<int, int> dirs[4] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    
    typedef pair<int,int> pii;
    int n;
    int maxDistance(vector<vector<int>>& grid) { 
        n = grid.size(); 
        
        vector<vector<int>> visited(n, vector<int>(n, 0));
       
        queue<pii> q; // Insert all the land cells in the queue.
        insertAllLandCells(q, grid, visited); 
        if(q.empty() or q.size()==(n*n))
            return -1; // no land cell or water cell
        
        int ans=-1;
        while(!q.empty())
        {
            int sz = q.size();
            while(sz--)
            {
                auto [lx,ly] = q.front(); q.pop(); //current land cell
                for(auto [nx,ny]: dirs) //traverse to all the four directions
                {
                    nx = nx + lx;
                    ny = ny + ly;
                    if(nx<0 or ny<0 or nx>=n or ny>=n or visited[nx][ny] != 0) continue; //check if it is a water cell 
                    visited[nx][ny] = 1; //convert it to land and add it to the queue.
                    q.push({nx,ny}); 
                }
            } 
            ans++; //increment distance  as we covered 1 unit distance from all cells in every direction.
        } 
        return ans;
    }
    
    void insertAllLandCells(queue<pii>& q, vector<vector<int>>& grid, vector<vector<int>>& visited)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            { 
                if(grid[i][j])
                {
                    visited[i][j] = grid[i][j];
                    q.push({i, j});
                }
            }
        }
    }
      
};