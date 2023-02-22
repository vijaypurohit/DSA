/*
https://leetcode.com/problems/number-of-good-paths/
*/

class UnionFind {
private:
    vector<int> parent, rank; 
public:
    UnionFind(int sz) {
        parent.resize(sz);
        rank.resize(sz, 0);
        iota(parent.begin(), parent.end(), 0); 
    }
    int find(int x) {
        if (parent[x] == x) return x;
        return parent[x] = find(parent[x]); 
    }
    bool union_set(int x, int y) {
        int px = find(x), py = find(y);
        if (px == py) 
            return true;
        if(rank[px] < rank[py]) // smaller one will attach to bigger one
            swap(px, py); // now py become smaller
        parent[py] = px; // if equal px==py then py(neighbour) will attach to px
        if(rank[px] == rank[py])
            rank[px]++;
        return true;
    } 
    // void print(int v)
    // {  cout<<"\nval:"<<v<<endl; for(int i=0; i<parent.size(); i++) cout<<"(i"<<i<<")"<<parent[i]<<"\t "; cout<<endl; }
};

class Solution {
    int n;
public:
    int numberOfGoodPaths(vector<int>& vals, vector<vector<int>>& edges) {
        n = vals.size();
        vector<vector<int>> adj(n);
        for (auto& edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        // Mapping --> value to all the nodes having the same value in non-descending order of values.
        map<int, vector<int>> valuesToNodes;
        for (int node = 0; node < n; node++) {
            valuesToNodes[vals[node]].push_back(node);
        }

        UnionFind dsu(n);
        int goodPaths = 0;

        // Iterate over all the nodes with the same value in sorted order, starting from the lowest value.
        for (auto& [value, vNodes] : valuesToNodes) 
        { // For every node in nodes, combine the sets of the node and its neighbors into one set.
            for (int node : vNodes) {
                for (int neighbor : adj[node]) {
                    // Only choose neighbors with a smaller value, as there is no point in traversing to other neighbors.
                    if (vals[neighbor] <= value) {
                        dsu.union_set(node, neighbor);
                    }
                }
            } 
            //Finding the size of the components
            // Map to compute the number of nodes under observation (with the same values) in each of the sets.
            unordered_map<int, int> group;
            // Iterate over all the nodes. Get the set of each node and increase the count of the set by 1.
            for (int u : vNodes) {
                group[dsu.find(u)]++;
            }
            // For each set of "size", add size * (size + 1) / 2 to the number of goodPaths.
            for (auto& [_, size] : group) {
                // cout<<_<<"->"<<size<<", ";
                goodPaths += (size * (size + 1) / 2);
            }
        }
        
        return goodPaths;
    }
};

/*
[1,2,4,2,3,4,2,3,3]
[[0,1],[0,2],[1,3],[1,4], [2,5],[2,6],[3,7],[4,8] ]

map ==> valueToNodes
val:1       vNodes: 0
val:2       vNodes: 1,3,6
val:3       vNodes: 4,7,8
val:4       vNodes: 2,5


val:1       vNodes: 0 (neighbours < val ==> )
parent == > (i0)[0]	 (i1)1	 (i2)2	 (i3)3	 (i4)4	 (i5)5	 (i6)6	 (i7)7	 (i8)8	 
groups ==> 0->1, 

val:2       vNodes: 1,3,6   (1 neighbours < val ==> 0,3)
parent == > (i0)1	 (i1)[1]	 (i2)2	 (i3)[1]	 (i4)4	 (i5)5	 (i6)[6]	 (i7)7	 (i8)8	 
groups ==> 6->1, 1->2, 

val:3       vNodes: 4,7,8
parent == > (i0)1	 (i1)1	 (i2)2	 (i3)1	 (i4)[1]	 (i5)5	 (i6)6	 (i7)[1]	 (i8)[1]	 
groups ==> 1->3, 

val:4       vNodes: 2,5
parent == > (i0)1	 (i1)1	 (i2)1	 (i3)1	 (i4)1	 (i5)1	 (i6)1	 (i7)1	 (i8)1	 
groups ==> 1->2, 

*/