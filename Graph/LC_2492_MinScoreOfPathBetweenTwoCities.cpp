/*
https://leetcode.com/problems/minimum-score-of-a-path-between-two-cities/
*/

class DSU{
    int n;
    vector<int> parent, rank;
    // vector<int> size;
public:
    DSU(int sz) {
        n = sz;
        parent.resize(n, 0);
        rank.resize(n, 0); //union by rank
        // size.resize(n, 1); //union by size
    }
    
    void init_set() {
        for(int i=0; i<n; i++)
            parent[i] = i;
    }
    
    int find_set(int x) {
        if(parent[x] == x) return x; //return parent
        return parent[x] = find_set(parent[x]); // travel upwards, path compression
    }
    
    bool union_set(int x, int y)
    {
        int px = find_set(x);
        int py = find_set(y);
        if(px == py) return true;
        if(rank[px] > rank[py])
            swap(px, py);
        parent[px] = py;
        
        if(rank[px] == rank[py])
            rank[py]++;
        // size[py] += size[px]; //union by size
        return false;
    }
};
class Solution {
public:
    int minScore(int n, vector<vector<int>>& roads) {
        // vector<vector<pair<int,int>>>adj(n+1);
        // for(const auto& edge: roads){
        //     int u = edge[0], v = edge[1], wt = edge[2];
        //     adj[u].push_back({v, wt});
        //     adj[v].push_back({u, wt});
        // }
        
//         return usingBFS(n, adj); 
        
//         vector<bool> visited(n+1, 0);
        int ans = numeric_limits<int>::max();
//         usingDFS(n, adj, visited, ans);
//         return ans;
        DSU dsu(n+1);
        dsu.init_set();
        for(const auto& edge: roads){
            dsu.union_set(edge[0], edge[1]);
        }
        for(const auto& edge: roads){
            if(dsu.find_set(1) == dsu.find_set(edge[0]))
                ans = min(ans, edge[2]);
        }
        return ans;
    }
    
    void usingDFS(int u, vector<vector<pair<int, int>>>& adj, vector<bool>& visited, int& ans) {
        visited[u] = true;
        for(const auto& [v, wt]: adj[u]){
                ans = min(ans, wt);
            if(visited[v] == false){
                usingDFS(v, adj, visited, ans); 
            }
        } 
    }
    
    int usingBFS(int& n, vector<vector<pair<int, int>>>& adj) {
        vector<bool> visited(n+1, 0);
        queue<int> q; q.push(1); 
        int ans = numeric_limits<int>::max();
        visited[1] = true;
        while(!q.empty()){
            int u = q.front(); q.pop();
            for(const auto& [v, wt]: adj[u]){
                ans = min(ans, wt);
                if(visited[v] == false){
                    q.push(v); 
                    // cout<<u<<" "<<v<<" "<<wt<<endl;
                }
            }
        } 
        return ans;
    }
};