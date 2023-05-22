/* https://leetcode.com/problems/profitable-schemes/ */

/*
Each of the M crimes in the list has two options, either we consider it in the current subset, or we don't. If we add this crime to the subset, we need to ensure first that the number of members doesn't exceed N; also, the total profit will be increased by the profit of this crime. If we don't consider this crime, there would be no change in the number of members or the total profit. The total number of such subsets would be the sum of the count of these two choices for each crime. 

*/

class Solution {
public:
    const int mod = 1e9+7;
    int n,m,minProfit;
    int memo[101][101][101]; // we required to check upto minProfit so that only 101
    int profitableSchemes(int n, int minProfit, vector<int>& group, vector<int>& profits) {
        memset(memo, -1, sizeof(memo));
        this->n = n;
        this->minProfit = minProfit;
        m = group.size();
        return solve(0, 0, 0, group, profits);
    }
    
    int solve(int idx, int persons, int profit, vector<int>& group, vector<int>& profits){
        if(idx == m) // explored all groups
            return profit >= minProfit; // profitable scheme;
        
        if(memo[idx][persons][profit] != -1)
            return memo[idx][persons][profit];
        
        int ways = solve(idx+1, persons, profit, group, profits); // not pick this;
        if(persons + group[idx] <= n){
            ways += solve(idx+1, persons + group[idx], min(minProfit, profit+profits[idx]) , group, profits);
        }
        
        return memo[idx][persons][profit] = ways%mod;
    }
};