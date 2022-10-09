/*
871. Minimum Number of Refueling Stops
https://leetcode.com/problems/minimum-number-of-refueling-stops/
*/

class Solution {
public:
    int minRefuelStops_PQ(int target, int startFuel, vector<vector<int>>& stations) {
        if(target <= startFuel) return 0; 
        int n = stations.size();
        int ansStops=0; // ans, number of times to refill
        int fuel=0;
        int sid=0;
        priority_queue<int> pq; //maxHeap
         
        for(int curDist = startFuel; curDist < target; curDist += fuel,  ansStops++)
        {
            //upto curDist we tend to insert every fuel into maxheap
            while(sid<n and curDist >= stations[sid][0])
                pq.push(stations[sid++][1]);
            if(pq.empty()) return -1; // if we don't have any choice 
            fuel = pq.top(); pq.pop(); // best max fuel available 
        }  
        return ansStops;
    }
    
     int minRefuelStops_1DP(int target, int startFuel, vector<vector<int>>& stations) {
        if(target <= startFuel) return 0;
         int n = stations.size();
         vector<long> dp(n+1);
         dp[0] = startFuel; // dp[i] is the farthest location we can get to using i refueling STOPS
         
         for(int sid=0; sid<n; sid++)
         {
             for(int t = sid; t>=0; t--)
             {
                 if(dp[t] >= stations[sid][0])
                     dp[t+1] = max(dp[t+1], dp[t] + (long) stations[sid][1]); // t stop mai cur station ka fuel daal ke stop bda do 
             }
         }
         
         for(int i=0; i<=n; i++)
             if(dp[i]>= target) return i;
         
        return -1;
    }
    
     int minRefuelStops_2D(int target, int startFuel, vector<vector<int>>& stations) {
        if(target <= startFuel) return 0;
         int n = stations.size();
         vector<vector<long>> dp(n+1, vector<long>(n+1, 0));
         // for(int i=0; i<=n; i++)
             dp[0][0] = startFuel; // dp[i][j] is the maximum distance someone can get by making 'j' refueling stops and consideing only i stations. 
         // with cur dist i and j number of stops, how far we can travel
         
         for(int i=1; i<=n; i++)
         {
             for(int j=1; j<=i; j++)
             {
                 if(dp[i-1][j-1] >= stations[i-1][0])
                     dp[i][j] = max(dp[i-1][j], dp[i-1][j-1] + stations[i-1][1]);
                 else
                     dp[i][j] = dp[i-1][j];
             }
         }
         
         // for(int i=0; i<=n; i++) { for(int j=0; j<=n; j++) { cout<<dp[i][j]<<" "; }  cout<<endl;  }
         
         for(int i=0; i<=n; i++)
             if(dp[n][i]>= target) return i;
         
        return -1;
    }
    
    int minRefuelStops (int target, int startFuel, vector<vector<int>>& stations) {
        return minRefuelStops_2D( target,  startFuel,  stations);
        // return minRefuelStops_1DP( target,  startFuel,  stations);
        // return minRefuelStops_PQ( target,  startFuel,  stations);
        
    }
};