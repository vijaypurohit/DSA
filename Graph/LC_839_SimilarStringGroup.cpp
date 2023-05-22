/*
https://leetcode.com/problems/similar-string-groups/
*/
/*
 Two strings X and Y are SIMILAR if two letters (in different positions) of X can be swapped to form string Y.
 Also, if two strings X and Y are EQUAL, they are SIMILAR.
 Task is to group the strings together, where strings in the same group are similar to at least one other string in the group.
*/

class DSU{
    int n;
    vector<int> parent, rank;
    // vector<int> size;
public:
    DSU(int sz)
    {
        n = sz;
        parent.resize(n, 0);
        rank.resize(n, 0); //union by rank
        // size.resize(n, 1); //union by size
        init_set();
    }
    
    void init_set() {
        for(int i=0; i<n; i++)
            parent[i] = i;
    }
    
    int find_set(int x)
    {
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
    int n;
    int numSimilarGroups(vector<string>& strs) {
        n = strs.size();
        
        /*
        vector<vector<int>> adj(n);
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(isSimilar(strs[i], strs[j])){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        int count=0;
       vector<bool> visit(n); 
        for(int i=0; i<n; i++){
            if(!visit[i]){
                dfs(i, adj, visit);
                count++;
            }
        }
        */
        
        DSU dsu(n);
        int count = n;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(isSimilar(strs[i], strs[j]) and dsu.union_set(i, j) == false){
                    count--; 
                }
            }
        }
        
        return count;
    }//
    
    void dfs(int src, const vector<vector<int>>& adj, vector<bool>& visit){
        visit[src] = true;
        for(const int& w: adj[src]){
            if(!visit[w])
                dfs(w, adj, visit);
        }
    }
    
    bool isSimilar(const string& a,const string& b){
        int diff = 0;
        
        for(int i=0; i<a.size(); i++){
            if(a[i] != b[i])
                diff++;
        }
        
        return diff == 0 || diff == 2;
    }
    
};