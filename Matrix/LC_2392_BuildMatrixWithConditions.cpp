/*
2392. Build a Matrix With Conditions 
https://leetcode.com/problems/build-a-matrix-with-conditions/
*/

class Solution {
public:
    vector<vector<int>> buildMatrix(int k, vector<vector<int>>& rowConditions, vector<vector<int>>& colConditions) {
        
        auto rowOrder = topological_sort(k, rowConditions);
        auto colOrder = topological_sort(k, colConditions);
        
        if(rowOrder.size() <k || colOrder.size()<k) return {};
        vector<vector<int>> ans(k, vector<int>(k, 0));
        
        vector<int> rowid(k), colid(k);
        for(int i=0; i<k; i++)
        {
            rowid[rowOrder[i]] = i; // opposite mapping which order should be placed at which position
            colid[colOrder[i]] = i;
        }
        // for(int x: rowOrder) cout<<x<<" ";cout<<endl;
        // for(int x: colOrder) cout<<x<<" ";cout<<endl;
        // for(int x: rowid) cout<<x<<" ";cout<<endl;
        // for(int x: colid) cout<<x<<" ";cout<<endl;
        
        for(int i=0; i<k; i++)
        {
            ans[rowid[i]][colid[i]] = i+1;
        }
        
        return ans;
    }//
    
    vector<int> topological_sort(int k, vector<vector<int>>& conditions)
    {
        vector<int> indeg(k, 0);
        vector<int> adj[k];
        queue<int> q;
        vector<int> order; 
        for(auto &edge: conditions)
        {
            adj[edge[0]-1].push_back(edge[1]-1);
            indeg[edge[1]-1]++;
        }
        
        for(int i=0; i<k; i++)
        {
            if(indeg[i]==0)
                q.push(i);
        }
        
        while(!q.empty())
        {
            int x = q.front(); q.pop();
            order.push_back(x); 
            for(int &w: adj[x])
            {
                if(--indeg[w] == 0)
                    q.push(w);
            }
        }
        
        if(order.size() != k) //cycle exists
            return {};
        return order;
    }//
};