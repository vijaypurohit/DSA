/*
1514. Path with Maximum Probability

https://leetcode.com/problems/path-with-maximum-probability/
*/
class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        
        return usingDijkstra(n, edges, succProb, start, end);
    }
    
    double usingDijkstra(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        vector<vector<pair<int,double>>> adj(n);
        for(int i=0; i<edges.size(); i++){
            adj[edges[i][0]].push_back({edges[i][1], succProb[i]});
            adj[edges[i][1]].push_back({edges[i][0], succProb[i]});
        }
        
        // vector<int> seen(n, 0);
        vector<double> dist(n, 0.0);
        dist[start] = 1.0;
        
        priority_queue<pair<double,int>> q;
        q.push({(double)1.0, start});
        
        while(!q.empty()){
            auto ele = q.top(); q.pop();
            double prob = ele.first;
            int node = ele.second;
            
            for(auto& w: adj[node]){
                if(dist[w.first] < w.second*prob){
                    dist[w.first] = w.second*prob;
                    q.push({dist[w.first], w.first});
                }
            }
        }
        
        return dist[end];
    }
};