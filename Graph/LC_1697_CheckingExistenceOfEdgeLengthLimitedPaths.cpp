/*
https://leetcode.com/problems/checking-existence-of-edge-length-limited-paths/
1697. Checking Existence of Edge Length Limited Paths

If for each query, we generate the connected components from scratch (i.e. iterate on all edges in each query), then the approach will still not be optimized enough. Instead what we can do is we can sort the queries array by the weight limit in increasing order.
*/
class DSU{
    int n;
    vector<int> parent, rank; 
public:
    DSU(const int& sz) {
        n = sz;
        parent.resize(n, 0);
        rank.resize(n, 0); //union by rank 
        for(int i=0; i<n; i++) parent[i] = i;
    } 
    
    int find_set(const int& x) {
        if(parent[x] == x) return x; //return parent
        return parent[x] = find_set(parent[x]); // travel upwards, path compression
    }
    
    bool union_set(const int& x, const int& y)
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
    
    bool areConnected(const int& x, const int& y){ 
        return (find_set(x) == find_set(y));
    }
    
};
class Solution {
    bool static compare(vector<int>& a, vector<int>& b){
        return a[2] < b[2];
    }
public:
    vector<bool> distanceLimitedPathsExist(int n, vector<vector<int>>& edgeList, vector<vector<int>>& queries) {
        DSU dsu(n);
        int qn = queries.size();
        vector<bool> ans(qn, false);
        
        vector<vector<int>> queriesWithIdx = queries;
        for(int i=0; i<qn; i++){
            // queriesWithIdx[i] = queries[i];
            queriesWithIdx[i].push_back(i);
        }
        
        sort(edgeList.begin(), edgeList.end(), compare); // sort by edge weight
        sort(queriesWithIdx.begin(), queriesWithIdx.end(), compare); // sort by limit edge 
        
        int edgeIdx = 0;
        for(const auto& query: queriesWithIdx){
            int p = query[0], q = query[1], limit = query[2],idx = query[3];
            
            while(edgeIdx<edgeList.size() and edgeList[edgeIdx][2] < limit){
                dsu.union_set(edgeList[edgeIdx][0], edgeList[edgeIdx][1]);
                edgeIdx++;
            }
            
            ans[idx] = dsu.areConnected(p, q);
        }
        
        return ans;
    }
};