/*
https://leetcode.com/problems/minimum-cost-to-cut-a-stick/
*/
/*
If we select cuts[p1] as the first cutting position, 
it would result in a cost of n and split the stick into two pieces of length cuts[p1] and n - cuts[p1], respectively.
another first cutting position, say cuts[p2] would also bring a cost of n and split the stick into two pieces of length cuts[p2] and n - cuts[p2].

function cost(left, right): minimum cost of all the cuts on the stick fragment with both ends at cuts[left] and cuts[right]
*/
class Solution {
public:  
    vector<vector<int>> memo;
    int m;
    int minCost(int n, vector<int>& cuts) {
        vector<int> newCuts = cuts;
        newCuts.push_back(0); newCuts.push_back(n);
        sort(newCuts.begin(), newCuts.end());
        
        m = newCuts.size();
        memo.resize(m, vector<int>(m, -1));
        return solve(0, m - 1, newCuts);
    }//
    
    int solve(int l, int r, vector<int>& newCuts){
        
        if(r - l <= 1) return 0; // no cut to make
        
        if(memo[l][r] != -1) return memo[l][r];
        
        int ans = INT_MAX;
        
        for(int k = l+1; k<r; k++){
            int cost = solve(l,k, newCuts) + solve(k, r, newCuts) + newCuts[r]-newCuts[l];
            ans = min(ans, cost);
        }
        
        return memo[l][r] = ans;
    }//
};