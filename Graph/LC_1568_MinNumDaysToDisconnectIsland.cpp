/*
1568. Minimum Number of Days to Disconnect Island

https://leetcode.com/problems/minimum-number-of-days-to-disconnect-island/
*/

class Solution {
public:
    /*
    // Approach 1: with converting into graph
    
    vector<pair<int,int>> dirs = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    int m, n;
    int minDays(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();
         // Step 1. find number of islands in the matrix
        int cnt_islands=0;
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(grid[i][j] == 1)
                {
                    cnt_islands++;
                    dfsCountIslands(i, j, grid);
                }
            }
        }
        
        
        //if grid is already disconnected, no need to check furter
        if(cnt_islands != 1) 
            return 0;  
        // for(auto x: vertex) {
        //     cout<<x.first<<" "<<x.second<<endl;
        // }
        
        // making of adj list
        int V = vertex.size();
        if(V==1) return 1;
        vector<int> adj[V]; 
        
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(grid[i][j] == 2)
                {
                    int src = vertex[i*n+j];  
                   for(auto [x,y]: dirs)
                    {
                        x = x + i;
                        y = y + j;
                        if(x<0 or y<0 or x>=m or y>=n or grid[x][y] != 2) continue;   
                        int dst =  vertex[x*n+y];
                        adj[src].push_back(dst); // construction of adjacency list; 
                    }
                }
            }
        }
        
        for(int i=0; i<V; i++) { cout<<i<<" ->"; for(int j=0; j<adj[i].size(); j++) { cout<<adj[i][j]<<" "; } cout<<endl; }
        
        dtime.resize(V, 0);
        low.resize(V, 0);  
        visited.resize(V, 0);
        timer = 0;
        if(dfsArticulationPoint(0, -1, adj))
            return 1;
        
        return 2;
         
    }//end
     
    
    //for construction of graph from matrix_i_j = 1
    int index=0;
    unordered_map<int,int> vertex;
    void dfsCountIslands(int i, int j, vector<vector<int>>& grid)
    {
        // if(i<0 or j<0 or i>=m or j>=n or grid[i][j] != 1) return;
        grid[i][j] = 2;
        vertex[i*n+j] = index++; // mapping of matrix_i_j to vertex index sequentially.
        for(auto [x,y]: dirs)
        {
            x = x + i;
            y = y + j;
            if(x<0 or y<0 or x>=m or y>=n or grid[x][y] != 1) continue;
            dfsCountIslands(x,y, grid);
            
            // int src = i*m+j;
            // int dst = x*m+j;
            // adj[src].push_back(dst); // construction of adjacency list;
        }
    }
    
    
    //for finding articulation point
    int timer;
    vector<int> dtime;
    vector<int> low;
    vector<bool> visited;  
    bool dfsArticulationPoint(int s, int p, vector<int> adj[])
    {
        dtime[s] = low[s] = ++timer;
        visited[s] = true;
        int children = 0;
        for(auto w: adj[s])
        {
            if(w == p) continue; // same parent
            if(visited[w]== true) // w!=p and visited, that is backedge
            {  
                low[s] = min(low[s], dtime[w]);
            }
            else  // not visited, tree edge,
            {
                if(dfsArticulationPoint(w, s, adj)) return true;
                children++;
                low[s] = min(low[s], low[w]);
                if(low[w] >= dtime[s] and p != -1) // not root
                   return true;
            }
        } 
        // root node
        if(p == -1 and children > 1)
            return true;
        return false;
    }
    */ 
    vector<pair<int,int>> dirs = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    int m, n;
    int minDays(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();
        int si=-1, sj=-1;
        // Step 1. find number of islands in the matrix
        int cnt_islands=0;
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++)  {
                if(grid[i][j] == 1) {
                    if(si==-1 and sj==-1) {si=i; sj=j;}
                    cnt_islands++;
                    dfsCountIslands(i, j, grid);
                }
            }
        }
         
        //if grid is already disconnected, no need to check furter
        if(cnt_islands != 1) 
            return 0;   
          
        dtime.resize(m, vector<int>(n));
        low.resize(m, vector<int>(n, 0)); 
        timer = 0;
        
        if(dfsArticulationPoint(si, sj, -1, -1, grid))
            return 1;
        
        return 2;
         
    }//end
    
    void dfsCountIslands(int i, int j, vector<vector<int>>& grid)
    {
        // if(i<0 or j<0 or i>=m or j>=n or grid[i][j] != 1) return;
        grid[i][j] = 2;
        for(auto [x,y]: dirs)
        {
            x = x + i;
            y = y + j;
            if(x<0 or y<0 or x>=m or y>=n or grid[x][y] != 1) continue;
            dfsCountIslands(x,y, grid);
        }
    }
    
    int timer;
    vector<vector<int>> low, dtime;
    bool dfsArticulationPoint(int si, int sj, int pi, int pj, vector<vector<int>>& grid)
    { 
        dtime[si][sj] = low[si][sj] = ++timer;
        grid[si][sj] = 1; // mark it visited
        int children=0;
        for(auto [x,y]: dirs)
        {
            x = x + si;
            y = y + sj; 
            if(x<0 or y<0 or x>=m or y>=n or grid[x][y] == 0) continue; 
            if(x==pi and y==pj) continue; // child same as parent
            if(grid[x][y] == 1) // already visited
            {
                low[si][sj] = min(low[si][sj], dtime[x][y]);
            } 
            else // tree edge
            {
                if(dfsArticulationPoint(x, y, si, sj, grid)) return true;
                children++;
                low[si][sj] = min(low[si][sj], low[x][y]);
                if(low[x][y] >= dtime[si][sj] and pi != -1)
                    return true;
            }
            
        }
         if(pi == -1 and children != 1)
                return true;
        return false;
    }
};