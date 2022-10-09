/*
417. Pacific Atlantic Water Flow

https://leetcode.com/problems/pacific-atlantic-water-flow/
*/
class Solution {
public:
    int m, n; 
    vector<vector<int>> ans;
    vector<vector<int>> reachable;
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        m = heights.size();
        n = heights[0].size(); 
        reachable.resize(m, vector<int>(n, false));
        // visited.resize(m, vector<int>(n, false)); 
        
        for(int col=0; col<n; col++) 
            dfsReach(0, col, heights); 
        for(int row=1; row<m; row++) 
            dfsReach(row, 0, heights);  
        
        for(int row=0; row<m; row++) 
                dfsCheck(row, n-1, heights); 
        for(int col=0; col<n-1; col++) 
                dfsCheck(m-1, col, heights);  
        
        return ans;
    }
    
    vector<pair<int,int>> dirs = {{0,1}, {0, -1}, {1,0}, {-1, 0}};
    void dfsReach(int i, int j, vector<vector<int>>& heights){
        reachable[i][j] = true;
        
        for(auto [x, y] : dirs)
        {
            x = x+i;
            y = y+j;
            if(x<0 or y<0 or x>=m or y>=n or reachable[x][y]) continue;
            if(heights[x][y] >= heights[i][j])
                dfsReach(x,y, heights);
        }
    }
    
    //using another visited array
    /*
    vector<vector<int>> visited;
    void dfsCheck(int i, int j, vector<vector<int>>& heights){  
        if(reachable[i][j] == 1)
        {
            reachable[i][j] = 2;
            ans.push_back({i, j});
        }
        visited[i][j] = 2;
        for(auto [x, y] : dirs)
        {
            x = x+i;
            y = y+j;
            if(x<0 or y<0 or x>=m or y>=n or visited[x][y] == 2 or reachable[x][y] == 3) continue;
            if(heights[x][y] >= heights[i][j])
                dfsCheck(x,y, heights);
        }
    }
    */
    
     void dfsCheck(int i, int j, vector<vector<int>>& heights){  
        if(reachable[i][j] == 1)
        {
            ans.push_back({i, j});
        }
        reachable[i][j] = -1;
        for(auto [x, y] : dirs)
        {
            x = x+i;
            y = y+j;
            if(x<0 or y<0 or x>=m or y>=n or reachable[x][y]==-1) continue;
            if(heights[x][y] >= heights[i][j])
                dfsCheck(x,y, heights);
        }
    }
    
    void myprint(vector<vector<int>> vec)
    {
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<vec[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
};