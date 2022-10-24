/*
https://leetcode.com/problems/maximum-earnings-from-taxi/
*/

class Solution { 
public:
    int m;
    long long maxTaxiEarnings(int n, vector<vector<int>>& rides) {
        m = rides.size();
        unordered_map<int, vector<pair<int,int>>> rideEndAt;
        for(auto &r: rides)
            rideEndAt[r[1]].push_back({r[0], r[1]-r[0]+r[2]});//{start, profit};
        
        vector<long long> dp(n+1, 0);
        int l=0;
        for(int e=1; e<=n; e++)
        {
            dp[e] = dp[e-1]; //not pick then profit
            if(rideEndAt.find(e) == rideEndAt.end()) continue;
           for(auto [s, p]: rideEndAt[e]) //point on road same as starting point of ride
            {
               dp[e] = max(dp[e], p+dp[s]);
            }
        }
        return dp[n];
        
        /*
        sort(rides.begin(), rides.end());
        vector<long long> dp(n+1, 0);
        int l=0;
        for(int i=1; i<=n; i++)
        {
            dp[i] = max(dp[i], dp[i-1]); //not pick then profit
            while(l<m and rides[l][0] == i) //point on road same as starting point of ride
            {
                dp[rides[l][1]] = max(dp[rides[l][1]], dp[i] + rides[l][1] - rides[l][0] + rides[l][2]);
                l++;
            }
        }
        return dp[n];
        */
        sort(rides.begin(), rides.end());
        vector<long long> memo(m, -1);
        solve(0, rides, memo);
        // for(int i=0; i<m; i++) cout<<memo[i] <<" "; cout<<endl;
        return memo[0];
    }
    
    long long solve(int i, vector<vector<int>>& rides, vector<long long> &memo)
    {
        if(i>=m) return 0;
        if(memo[i] != -1) return memo[i];
        
        long long notpick = solve(i+1, rides, memo);
        long long pick = rides[i][2]  + (rides[i][1] - rides[i][0]);
        int nexti=-1;
        int l=i+1, r = m-1;
        while(l<=r)
        {
            int mid = l + (r-l)/2;
            if(rides[i][1] <= rides[mid][0])
            {
                nexti = mid;
                r = mid-1;
            }
            else
                l = mid+1;
        } 
        if(nexti != -1)
            pick += solve(nexti, rides, memo);
        
        return memo[i] = max(notpick, pick);
    }
};