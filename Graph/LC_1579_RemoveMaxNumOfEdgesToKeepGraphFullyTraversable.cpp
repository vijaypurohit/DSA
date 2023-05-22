/*
https://leetcode.com/problems/remove-max-number-of-edges-to-keep-graph-fully-traversable/
*/

class DSU{
    int n;
    vector<int> parent, rank; 
    int components;
public:
    DSU(const int& sz) {
        n = sz+1;
        components = sz;
        parent.resize(n, 0);
        rank.resize(n, 0); //union by rank 
        for(int i=0; i<n; i++) parent[i] = i;
    }
     
    
    int find_set(const int& x) {
        if(parent[x] == x) return x; //return parent
        return parent[x] = find_set(parent[x]); // travel upwards, path compression
    }
    
    bool union_set(const int& x, const int& y) {
        int px = find_set(x);
        int py = find_set(y);
        if(px == py) return 0;
        
        if(rank[px] > rank[py]) swap(px, py);
        
        parent[px] = py;
        
        if(rank[px] == rank[py]) rank[py]++; 
        
        components-- ;
        
        return 1;
    }
    
    bool isConnected(){
        return components == 1;
    }
};

class Solution {
public:
    int maxNumEdgesToRemove(int n, vector<vector<int>>& edges) {
        DSU Alice(n), Bob(n);
        
        int edgesRequired = 0;
        
        for(vector<int>& edge: edges){
            if(edge[0] == 3){
                edgesRequired += (Alice.union_set(edge[1], edge[2]) | Bob.union_set(edge[1], edge[2]));
            }
        }
        
        for(vector<int>& edge: edges){
            if(edge[0] == 1){
                edgesRequired += (Alice.union_set(edge[1], edge[2]));
            }
            else if(edge[0] == 2){
                edgesRequired += (Bob.union_set(edge[1], edge[2]));
            }
        }
        
        if(Alice.isConnected() and Bob.isConnected())
            return edges.size() - edgesRequired;
        
        return -1;
    }//
};