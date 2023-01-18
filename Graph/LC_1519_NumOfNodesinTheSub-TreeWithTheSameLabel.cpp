/*
https://leetcode.com/problems/number-of-nodes-in-the-sub-tree-with-the-same-label/
*/

struct TNode
{   
    int id; // index
    char label; // label
    vector<TNode*> childrens; // can be n-ary tree
    TNode(int indexVal, char lab){
        id = indexVal;
        label = lab; 
    } 
};


/*
*
Refer Problem 1443. Minimum Time to Collect All Apples in a Tree
* Tree is not mentioned Binary Tree --> Therefore take vector of childrens;
* undirected tree is given --> not necessary that edges are given in correct increasing order of node to build tree by one node after another 
4
[[0,2],[0,3],[1,2]]
"aeed"
Expected: [1,1,2,1]
*/
class Solution {
public:
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        
        // return byTree(n, edges, labels);
        return byGraph(n, edges, labels);
    }
    
    vector<int> byTree(int& n, vector<vector<int>>& edges, string& labels) {
       
        vector<TNode*> i2t(n);
        for(int i=0; i<n; i++)
            i2t[i] = new TNode(i, labels[i]);
        
        vector<bool> visited(n, false);
        visited[0] = true;
        for(auto &edge: edges)
        {
            int u = edge[0], v = edge[1];
            if(visited[u])
            {
                i2t[u]->childrens.push_back(i2t[v]);
                visited[v]=true;
            }
            else
            {
                i2t[v]->childrens.push_back(i2t[u]);
                visited[u]=true;
            }
        }//for
        
        vector<int> ans(n, 0);
        countFreq(i2t[0], ans);
        return ans;
    }//
    
    vector<int> countFreq(TNode* node, vector<int>& ans)
    {
        vector<int> nodeFreq(26, 0); // frequency of labels for current node.
        if(node == nullptr)
            return nodeFreq;
        for(TNode* child: node->childrens)
        {
            vector<int> childFreq = countFreq(child, ans);
            for(int i=0; i<26; i++) // add frequency of child node to the parent
                nodeFreq[i] += childFreq[i];
        }
        ++nodeFreq[node->label - 'a']; // add node label count to freq array
        ans[node->id] = nodeFreq[node->label - 'a']; // for node_i, ans_i = freqCount of label at node_i
        return nodeFreq;
    }
/*
By constructing Graph
*/
    unordered_map<int, vector<int>> adj;    
    vector<int> byGraph(int& n, vector<vector<int>>& edges, string& labels) {
        for(auto &edge: edges)
         { int u = edge[0], v = edge[1]; 
             adj[u].emplace_back(v);
             adj[v].emplace_back(u);
         }
        vector<int> ans(n, 0);
        dfs(0,-1, labels, ans);
        return ans;
    }
    
    vector<int> dfs(int node, int par, string& labels, vector<int>& ans)
    {
        vector<int> nodeFreq(26, 0); // frequency of labels for current node. 
        for(int w: adj[node])
        {
            if(w == par) continue; 
            vector<int> childFreq = dfs(w, node, labels, ans);
            for(int i=0; i<26; i++) // add frequency of child node to the parent
                nodeFreq[i] += childFreq[i];
        }
        ++nodeFreq[labels[node] - 'a']; // add node label count to freq array
        ans[node] = nodeFreq[labels[node] - 'a']; // for node_i, ans_i = freqCount of label at node_i
        return nodeFreq;
    }
    
};