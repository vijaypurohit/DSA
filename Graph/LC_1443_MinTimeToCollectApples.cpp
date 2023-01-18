/*
https://leetcode.com/problems/minimum-time-to-collect-all-apples-in-a-tree/
*/

struct TNode
{   
    int id; // index
    bool isApple; // node is apple or not
    vector<TNode*> childrens;
    TNode(int indexVal, bool applePresent){
        id = indexVal;
        isApple = applePresent; 
    } 
};

/*
* Tree is not mentioned Binary Tree --> Therefore take vector of childrens;
Input: 
8
[[0,1],[1,2],[2,3],[1,4],[2,5],[2,6],[4,7]]
[true,true,false,true,false,true,true,false] 
Expected: 10
* undirected tree is given --> not necessary that edges are given correctly to build tree by one node after another 
Input:
4
[[0,2],[0,3],[1,2]]
[false,true,false,false] 
Expected: 4
*/
class Solution {
public:
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) 
    { 
        // return minTimeTree(n, edges, hasApple);
        return minTimeGraph(n, edges, hasApple);
    };
    
/*
By constructing Tree
*/
    int minTimeTree(int n, vector<vector<int>>& edges, vector<bool>& hasApple) 
    { 
        // storing TNode address of each index
        vector<TNode*> i2t(n);
        for(int i=0; i<n; i++) {
            i2t[i] = new TNode(i, hasApple[i]); //index --> TNode Address
        } 
        
        // Constructing the tree from given edges
        vector<bool> visited(n, false);  // necessary for undirected given
        visited[0] = true;
        for(auto &edge: edges)
        {
            int u = edge[0], v = edge[1]; 
            if(visited[u])
            {
                i2t[u]->childrens.push_back(i2t[v]);
                visited[v]= true;
            }
            else
            {
                i2t[v]->childrens.push_back(i2t[u]);
                visited[u]= true;
            }
        }
         
        int cnt=0;
        for(TNode *child: i2t[0]->childrens) // childrens of root; 
            cnt+= countEdges(child);
        return cnt*2; // whatever edges, twice would be the time.
    };
     
    int countEdges(TNode* root)
    {   // cout<<root->id<<" ("<<root->isApple<<") --";
        if(root == nullptr) 
            return 0;
        int retans=0;
        for(TNode* child: root->childrens)
            retans += countEdges(child); 
        return retans + ((retans>0 or root->isApple)?1:0); // return +1 edge if cur node is apple or apple was in some descended node
    }
/*
By constructing Graph
*/
    unordered_map<int, vector<int>> adj;
    int minTimeGraph(int n, vector<vector<int>>& edges, vector<bool>& hasApple) 
    { 
         for(auto &edge: edges)
         {
             int u = edge[0], v = edge[1]; 
             adj[u].emplace_back(v);
             adj[v].emplace_back(u);
         }
        
        // return dfs(0, -1, hasApple)*2;
        int cnt=0;
        for(int w: adj[0]) // childrens of node 0; 
            cnt+= dfs(w, 0, hasApple);
        return cnt*2; // whatever edges, twice would be the time.
    };
    
    int dfs(int node, int par, vector<bool>& hasApple)
    {
        int retans=0;
        for(int w: adj[node])
        {
            if(w != par)
                retans += dfs(w, node, hasApple);
        } 
        return retans + ((retans>0 or hasApple[node])?1:0);
    }
};