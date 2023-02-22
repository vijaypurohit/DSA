/*
https://leetcode.com/problems/minimum-fuel-cost-to-report-to-the-capital/
*/

class Solution {
public:
    typedef long long ll;
    ll fuel;
    
    int n;
    long long minimumFuelCost(vector<vector<int>>& roads, int seats) {
        n = 1+roads.size();
        vector<vector<int>> adj(n);
        for(auto& road: roads) { // undirected graph as a tree
            adj[road[0]].push_back(road[1]);
            adj[road[1]].push_back(road[0]);
        }
        fuel=0;
        dfs(0, -1, adj, seats);
        return fuel;
    }
    
    //POST ORDER TRAVERSAL
    ll dfs(int src, int par, vector<vector<int>>& adj, int &seats)
    {
        int representatives = 1;
        for(auto &child: adj[src])
        {
            if(child != par)
            {
                representatives += dfs(child, src, adj, seats);
            }
        }
        
        if(src != 0)
        {
            fuel += ceil((double)representatives/seats);
        }
        
        return representatives;
    }
};