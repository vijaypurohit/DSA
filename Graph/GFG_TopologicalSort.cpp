/* https://practice.geeksforgeeks.org/problems/topological-sort/1#
 * Given a Directed Acyclic Graph (DAG) with V vertices and E edges, Find any Topological Sorting of that Graph.
 */
  
class Solution
{
public:

    void DFS_TOP(int src, vector<int> adj[], vector<bool> &vis, vector<int> &o){

        vis[src]=true;

        for(int w: adj[src]){

            if(!vis[w])
                DFS_TOP(w, adj, vis, o);

        }//for adj

        o.push_back(src);
    }//DFS

    //Function to return list containing vertices in Topological order.
    vector<int> topoSort1(int V, vector<int> adj[])
    {
        vector<bool> visited(V,false);

        vector<int> order;

        //USING DFS + Vector
        for(int v=0; v<V; ++v){ //for disconnected graph
            if(!visited[v])
                DFS_TOP(v, adj, visited, order);
        }//for v

        reverse(order.begin(), order.end());
        return order;
    } //topoSort


    // Kahn's Algorithm for Topological Sort
    vector<int> topoSort(int V, vector<int> adj[])
    {
        // vector<bool> visited(V,false);
        vector<int> ind(V,0);       //indegree of each vertex

        vector<int> order;          // topological order
        queue<int> q;
        int cnt_vis = 0;            // Initialize count of visited vertices

        //Calculating Indegree of Each Node
        for(int v=0; v<V; ++v){
            for(int w: adj[v]){
                ind[w]++;
            }//for adj
        }//for v

        // enqueue all vertices with indegree 0
        for(int v=0; v<V; v++)
            if(ind[v]==0)
                q.push(v);

        while(!q.empty()){
            int x = q.front(); q.pop();

            order.push_back(x);
            cnt_vis++;


            for(int w: adj[x])
                if(--ind[w] == 0)
                    q.push(w);


        }//while q

        // Check if there was a cycle
        // if (cnt_vis != V) {
        //     cout << "There exists a cycle in the graph\n";
        //     return;
        // }

        return order;
    } //topoSort


};

