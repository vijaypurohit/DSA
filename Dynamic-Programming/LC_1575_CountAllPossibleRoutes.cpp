/*
https://leetcode.com/problems/count-all-possible-routes/
*/
class Solution {
    const int mod = 1e9+7;
    int finishCity, n;
    vector<vector<int>> memo;
public:
    int countRoutes(vector<int>& locations, int start, int finish, int fuel) {
        n = locations.size();
        finishCity = finish;     
        memo = vector<vector<int>>(n, vector<int>(fuel+1, -1));
        return solve(start, fuel, locations);
    }
    
    int solve(int curCity, int fuel, vector<int>& locations){
        if(fuel<0)
            return 0;
        if(memo[curCity][fuel] != -1) return memo[curCity][fuel] ;
        int ans = (curCity == finishCity) ? 1 : 0 ;
        
        for(int nxtCity = 0; nxtCity < n; nxtCity++){
           if(nxtCity != curCity){
               ans = (ans + solve(nxtCity, fuel - abs(locations[curCity] - locations[nxtCity]) ,locations))%mod;
           } 
        }//
        
        return memo[curCity][fuel]=ans;
    }
};