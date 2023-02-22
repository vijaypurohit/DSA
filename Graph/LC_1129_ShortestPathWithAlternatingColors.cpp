/*
https://leetcode.com/problems/shortest-path-with-alternating-colors/
*/

class Solution {
public:
    vector<int> shortestAlternatingPaths1(int n, vector<vector<int>>& redEdges,
                                         vector<vector<int>>& blueEdges) {
        vector<vector<int>> adjR(n), adjB(n);
        for(auto& edge: redEdges) adjR[edge[0]].push_back(edge[1]);
        for(auto& edge: blueEdges) adjB[edge[0]].push_back(edge[1]); 
        
        vector<int> ans(n, -1);
        ans[0] = 0; // source node distance = 0;
        
        queue<vector<int>> q;
        q.push({0,0,-1}); // {node, shortest path from 0, color (undefined -1)};
        
        vector<vector<bool>> visited(n, vector<bool>(2, 0)); // for red and blue
        visited[0][0] = visited[0][1] = true;
        
        while(!q.empty())
        {
            auto &node = q.front();
            int u = node[0], steps = node[1], curCol=node[2]; q.pop();
             
            if(curCol == 1 or curCol == -1) // i.e. 1, -1
            {
                for(auto &w: adjR[u])
                {
                    if(visited[w][0] == 0)
                    {
                        visited[w][0] = true;
                        q.push({w, steps+1, 0});
                        if(ans[w] == -1) ans[w] = steps+1;
                    }
                }
            }
            if(curCol == 0  or curCol == -1)
            {
                for(auto &w: adjB[u])
                {
                    if(visited[w][1] == 0)
                    {
                        visited[w][1] = true;
                        q.push({w, steps+1, 1});
                        if(ans[w] == -1) ans[w] = steps+1;
                    }
                }
            }
        }
        
        return ans;
    }//
    
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& redEdges,
                                         vector<vector<int>>& blueEdges) { 
        vector<vector<pair<int,int>>> adj(n);
        for(auto& edge: redEdges) adj[edge[0]].push_back({edge[1],0});
        for(auto& edge: blueEdges) adj[edge[0]].push_back({edge[1],1});
        
        vector<int> ans(n, -1);
        ans[0] = 0; // source node distance = 0;
        
        queue<vector<int>> q;
        q.push({0,0,-1}); // {node, shortest path from 0, color (undefined -1)};
        
        vector<vector<bool>> visited(n, vector<bool>(2, 0)); // for red and blue
        visited[0][0] = visited[0][1] = true;
        
        while(!q.empty())
        {
            auto &node = q.front();
            int u = node[0], steps = node[1], curCol=node[2]; q.pop();
            
            for(auto &[w, nCol]: adj[u])
            {
                if(visited[w][nCol] == 0 and curCol != nCol)
                {
                    visited[w][nCol] = true;
                    q.push({w, steps+1, nCol});
                    if(ans[w] == -1)
                        ans[w] = steps+1;
                }
            } 
        }
        
        return ans;
    }//
};