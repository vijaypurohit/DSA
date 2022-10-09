/*
1345. Jump Game IV  
https://leetcode.com/problems/jump-game-iv/
*/

class Solution {
public:
    int n;
    unordered_map<int,vector<int>> indexes;
    vector<bool> visited;
    int jumps=0;
    int minJumps(vector<int>& arr) {
        n= arr.size();
        if(n<=1) return 0;
        
        for(int i=0; i<n; i++)
            indexes[arr[i]].push_back(i);
        
        visited.resize(n, false);
        
        queue<int> q; q.push(0);
        visited[0] = true;
        
        while(!q.empty())
        {
            int sz = q.size();
            while(sz--)
            {
                int i = q.front(); q.pop();
                
                if(i==n-1) return jumps;
                
                int left = i-1;
                if(left>=0 and visited[left]==false)
                {
                    visited[left]= true;
                    q.push(left);
                }
                int right = i+1;
                if(right<n and visited[right]==false)
                {
                    visited[right]= true;
                    q.push(right);
                }
                
                int same = arr[i];
                for(int &w: indexes[same])
                {
                    if(w != i and visited[w] == false)
                    {
                        visited[w] = true;
                        // if(w==n-1) return jumps+1;
                        q.push(w);
                    }
                }
                indexes[same].clear();
            }
            
            jumps++;
        }
        
       return jumps; 
    }//end
    
    
};