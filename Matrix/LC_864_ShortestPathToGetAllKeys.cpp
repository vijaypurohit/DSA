/*
https://leetcode.com/problems/shortest-path-to-get-all-keys/
*/

class Solution {
public:
    vector<pair<int,int>> dirs = {{0,1}, {0,-1}, {1,0}, {-1,0}};
    int m, n;
    int shortestPathAllKeys(vector<string>& grid) {
        m = grid.size(); n = grid[0].size();
        queue<pair<int,int>> q; 
        vector<vector<vector<bool>>> visited(m,vector<vector<bool>>(n,vector<bool>(64,0))); //at most 6 keys, using bitmap 111111
        
        int K=0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j] == '@'){
                    q.push({i*n+j, 0});
                    visited[i][j][0] = 1;
                }
                if(grid[i][j]>='A' and grid[i][j]<='F')
                    K++;
            }
        }
       
        int totalkeys = ((1<<K)-1);
        int ans = 0;
        while(!q.empty()){
            int sz = q.size();
            while(sz--){
                int r = q.front().first/n ; 
                int c = q.front().first%n ;
                int keycnt = q.front().second; q.pop();
                if(keycnt == totalkeys) return ans;
                
                for(auto [x,y]: dirs){
                    x = x+r; y = y+c;
                    int k = keycnt;
                    if(x<0 or y<0 or x>=m or y>=n or grid[x][y] == '#') continue;
                    
                    if(grid[x][y]>='a' and grid[x][y]<='f'){
                        k = keycnt | (1<<(grid[x][y]-'a'));
                    }else if(grid[x][y]>='A' and grid[x][y]<='F'){
                        if(!(keycnt & (1<<grid[x][y]-'A')))
                            continue;
                    }
                    if(!visited[x][y][k]){
                        visited[x][y][k]=1;
                        q.push({x*n+y, k});
                    }
                    
                }//dirs 
            }
            ans++;
        }
        
        return -1;
    }//
};