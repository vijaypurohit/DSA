/*
https://leetcode.com/problems/reorder-routes-to-make-all-paths-lead-to-the-city-zero/
*/

class Solution {
public:
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<vector<pair<int, bool>>> adj(n);
        for(const auto& edge: connections){
            int u = edge[0], v = edge[1];
            adj[u].push_back({v, true}); // forward edge 
            adj[v].push_back({u, false}); // making it undirected
        }
        vector<bool> visited(n, false);
        return dfs(0, adj, visited);
    }
    
    int dfs(int src, vector<vector<pair<int, bool>>>& adj, vector<bool>& visited){
        
        visited[src] = true;
        int cnt=0;
        for(const auto& [dst, isForward]: adj[src]){
            if(visited[dst] == false){
                if(isForward){
                    cnt++;
                    cnt += dfs(dst, adj, visited);   
                }
                else{
                    cnt += dfs(dst, adj, visited);
                }
                    
            }//vis
        }// adj
        return cnt;
    }
};