/*
https://leetcode.com/problems/maximum-value-of-k-coins-from-piles/solution/
*/
/*
dp[i][coins] be the maximum total value of coins you can have in your wallet if you choose at most "coins" from the "leftmost i" piles optimally.
For example, dp[4][7] is the maximum total value when one takes at most "seven" coins from the "leftmost four" piles.

The base case of this DP is i = 0 – no piles are considered, so one didn't take any coins from any piles. Since the total value of  0 coins is zero, dp[0][coins] = 0. (Koi piles nhi hai, fhir coins ho ya nahi kya frk pdta hai value to zero hai)

if i>0 piles hai. we can take piles[i].size() coins or k coins left to us (min of both)
    *  don't take any coins from  i'th pile and take at most "coins" from leftmost "i" piles
    *  take ONE coin from  i'th pile and take at most "coins - 1" from leftmost "i" piles
    *  take TWO coins from  i'th pile and take at most "coins - 2" from leftmost "i" piles
    *  take "takecoins" coins from  i'th pile and take at most "coins - takecoins" from leftmost "i" piles
*/

class Solution {
public:
    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
        int n = piles.size(),ans;
        
        vector dp(n+1, vector<int>(k+1, -1));
        
        function<int(int,int)> solve = [&](int lp, int k){ // leftmost piles, coins left
            if(lp == 0)
                return dp[lp][k] = 0;
            if(dp[lp][k] != -1)
                return dp[lp][k];
            int csum = 0;
            for (int takecoins=0; takecoins <= min(int(piles[lp-1].size()), k); takecoins++){
                if(takecoins > 0){
                    csum += piles[lp-1][takecoins-1];
                }
                dp[lp][k] = max(dp[lp][k], solve(lp-1, k - takecoins) + csum);
            }
            
            return dp[lp][k];
        };
        // int ans = solve(n, k); //memoization
        
        for(int lp=1; lp<=n; lp++) {
            int csum = 0;
            for (int takecoins=0; takecoins <= min(int(piles[lp-1].size()), k); takecoins++){
                if(takecoins > 0){
                    csum += piles[lp-1][takecoins-1];
                }
                dp[lp][k] = max(dp[lp][k], solve(lp-1, k - takecoins) + csum);
            }
        }
        ans =dp[n][k];
        // for(int i=0; i<=n; i++) {
        //     cout<<"\npl:"<<i<<"  | ";
        //     for(int j=0; j<=k; j++) cout<<" "<<dp[i][j];
        // }
        return ans;
    }//
};