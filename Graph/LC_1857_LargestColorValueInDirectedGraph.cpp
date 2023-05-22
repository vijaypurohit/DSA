/*
https://leetcode.com/problems/largest-color-value-in-a-directed-graph/solution/
*/

/*
If there is an edge from u -> v, the path ending at v will have the same color frequencies as the path ending at u, 
except that the color of v will be incremented by one.
Notice that for each edge u -> v, we must first obtain the maximum frequency of all the colours for paths ending until u, 
and only then can we form the answers for paths ending until v. This leads us to consider using topological sort to solve the problem.

The advantage of using Kahn's algorithm is that it also aids in the detection of graph cycles.

Create a 2D-array count with n rows and 26 columns, where n is the number of graph nodes. We have an array of size 26 for each node to
store the maximum frequency of each colour across the paths that end at the node.

A popped-out node indicates that all of its incoming edges have been processed, and it can now be used to iterate over all of its outgoing edges. So for each node -> neighbor edge, we use count[neighbor][i] = max(count[neighbor][i], count[node][i]) (we use max here instead of just setting it because there could be multiple ways to reach the neighbor) for all colors i.
*/

class Solution {
public:
    int n;
    int largestPathValue(string colors, vector<vector<int>>& edges) {
        n = colors.length();
        vector<vector<int>> adj(n);
        vector<int> indegree(n);
        for( auto& edge: edges){
            adj[edge[0]].push_back(edge[1]);
            indegree[edge[1]]++;
        }
        vector dp(n, vector<int>(26, 0));
        queue<int> q;
        
        for(int i=0; i<n; i++){
            if(indegree[i]==0)q.push(i);
        }
        
        int nodeSeen=0;
        int ans=0;
        
        while(!q.empty()){
            int node = q.front(); q.pop();
            ans = max(ans, ++dp[node][colors[node]-'a']); // is node pe ending path and uska color max hai ya phle se jo is path pe max hai wo.
            nodeSeen++;
            
            for(const auto& child: adj[node]){
                // node -> child, phele se child me max freq hai, ya node ki freq le us color ki.
                // dp[1][b] = max(0, dp[0][b]=0) = 0,  dp[1][r] = max(0, dp[0][r]=1) = 1
                for(int c=0; c<26; c++){ 
                    dp[child][c] = max(dp[child][c], dp[node][c]);
                }
                if(--indegree[child]==0)
                    q.push(child);
            }
        }
        
        // for(int i=0; i<n; i++){
        //     cout<<"\nnode:"<<i<<" ";
        //     for(int c=0; c<26; c++) 
        //             cout<<char(c+97)<<":"<<dp[i][c]<<" |";
        // }
        
        return nodeSeen < n ? -1: ans;
    }
};