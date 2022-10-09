/*
https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/
*/
class Solution {
public:
     vector<vector<vector<int>>> memo;
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int k = 2;
        if(n==0) return 0;
        memo.resize(n, vector<vector<int>>(k+1, vector<int>(2, -45)));
        
        //1 from  n-1 to 0
        // solve(n-1, k, 0, prices);
        // // for(int i=0; i<n; i++) { for(int j=0; j<=k; j++) { for(int l=0; l<2; l++) { cout<<memo[i][j][l]<<" "; } cout<<endl; } cout<<endl; }
        // return memo[n-1][k][0];
        
        //2 from 0 to n-1
        // return solve0(0, k, true, prices);  
        
        // tabulation and space optimization
        return solve0dp(n, k, prices); 
        
        //3
        // int minPrice1 = INT_MAX;
        // int profit1=0;
        // int minPrice2 = INT_MAX;
        // int profit2=0;
        // for(int i=0; i<n; i++)
        // {
        //    minPrice1=min(prices[i],minPrice1);
        //     profit1=max(profit1,prices[i]-minPrice1);
        //     minPrice2=min(minPrice2,prices[i]-profit1);
        //     profit2=max(profit2,prices[i]-minPrice2);
        // }
        // return max(profit1, profit2);
    }
    
    int solve0(int i, int k, bool buy, vector<int>& prices)
    { 
        if(i==prices.size() || k == 0)return 0;
        if(memo[i][k][buy] != -45) return memo[i][k][buy];
        
        if(buy==false) {
            //don't sell or sell + profit
            return memo[i][k][buy]=max(solve0(i+1, k, buy, prices), solve0(i+1, k-1, true, prices) + prices[i]);
        }
        else{
            //don't buy or buy-profit
            return memo[i][k][buy]=max(solve0(i+1, k, buy, prices), solve0(i+1, k, false, prices) - prices[i]);
        } 
    }
    
    int solve0dp(int n, int k, vector<int>& prices)
    { 
        // /*
       vector<vector<vector<int>>> dp (n, vector<vector<int>>(k+1, vector<int>(2, 0)));
        dp[n-1][1][0] = prices[n-1]; // 1 trans, all sold
        dp[n-1][2][0] = prices[n-1]; // 2 trans, all sold
        for(int i=n-2; i>=0; i--)
        {
            for(int count=k; count>0; count--)
            {
                for(int buy=0; buy<=1; buy++)
                {
                    if(buy==false)
                        dp[i][count][0] = max(dp[i+1][count][0], dp[i+1][count-1][1] + prices[i]);
                    else
                        dp[i][count][1] = max(dp[i+1][count][1], dp[i+1][count][0] - prices[i]);
                }
            }
        }
            
        return dp[0][k][1]; //
        // */
        
        
        vector<vector<int>> cur(k+1, vector<int>(2, 0)), prev(k+1, vector<int>(2, 0));
        prev[1][0] = prices[n-1]; // 1 trans, all sold
        prev[2][0] = prices[n-1]; // 2trans, all sold
        for(int i=n-2; i >= 0; --i){
            for(int count = k; count > 0; --count){
                for(int buy = 0; buy <= 1; ++buy){
                    if(buy==false)
                        cur[count][0] = max(prev[count][0], prices[i] + prev[count-1][1]);
                    else
                        cur[count][1] = max(prev[count][1], -prices[i] + prev[count][0]);
                }
            }
            prev = cur;
        }
        
        return prev[k][1];
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