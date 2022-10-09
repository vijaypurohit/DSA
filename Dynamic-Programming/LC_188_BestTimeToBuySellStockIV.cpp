/*
188. Best Time to Buy and Sell Stock IV
https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iv/
*/

class Solution {
public: 
    vector<vector<vector<int>>> memo;
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        if(n==0) return 0;
        memo.resize(n, vector<vector<int>>(k+1, vector<int>(2, -45)));
        solve(n-1, k, 0, prices);
        for(int i=0; i<n; i++) { for(int j=0; j<=k; j++) { for(int l=0; l<2; l++) { cout<<memo[i][j][l]<<" "; } cout<<endl; } cout<<endl; }
        return memo[n-1][k][0];
    }
    
    int solve(int i, int k, int share, vector<int>& prices)
    {
        if(k==0) // no transaction left
            return memo[i][k][share]=0;
        if(i==0) //0th day
        {
            if(share==0) // no share at the end 
                return memo[i][k][share]=0;
            else // one share at the end, so you buy it
                return memo[i][k][share]=-prices[i]; 
        }
        
        if(memo[i][k][share] != -45) return memo[i][k][share];
        
        if(share == 0) //ith day, with k trans, and 0 share will happen when
        { // i-1 day tk with k trans, and 0 share same cond or
            // i-1 day with k trans going on, 1 share , we sell it today and profit is price;
            return memo[i][k][share]=max(solve(i-1, k, 0, prices), solve(i-1, k, 1, prices) + prices[i]);
        }
        else // ith day with k trans and 1 share will happen when
        { // i-1 day tk with k trans, and 1 share, as same cond previous day
            // or i-1 day with k-1 trans completed, 0 share and we buy today so that k-1 -> k trans, 0 share -> 1share
            return memo[i][k][share]=max(solve(i-1, k, 1, prices), solve(i-1, k-1, 0, prices) - prices[i]);
        }
    }
};