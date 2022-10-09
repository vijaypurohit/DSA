/*
714. Best Time to Buy and Sell Stock with Transaction Fee
https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/
*/

class Solution {
public:
    int n, fee;
    vector<vector<int>> memo;
    int maxProfit(vector<int>& prices, int fee) {
        n = prices.size();
        this->fee = fee;
        memo.resize(n, vector<int>(2, -45));
        solve(n-1, 0, prices);
        // for(int i=0; i<n; i++){ cout<<prices[i]<<"->"<<memo[i][0]<<" "<<memo[i][1]<<endl;}
        return memo[n-1][0];
        
        //2 from 0 to n-1
        // return solve0(0, true, prices);
        
        // tabulation and space optimization
        return solve0dp(n, prices); 
    }
    
    int solve(int i, int share, vector<int>& prices)
    {
        if(i==0){
            if(share == 0)
                return memo[i][share]=0;
            else 
                return memo[i][share]=-prices[i];
        }
        
        if(memo[i][share]!= -45) return memo[i][share];
        
        if(share == 0)
            return memo[i][share]=max(solve(i-1, 0, prices), solve(i-1, 1, prices) + prices[i] - fee);
        else
            return memo[i][share]=max(solve(i-1, 1, prices), solve(i-1, 0, prices) - prices[i]);
        
    }//solve
    
     int solve0(int i, bool buy, vector<int>& prices)
    { 
        if(i>=prices.size())return 0;
        if(memo[i][buy] != -45) return memo[i][buy];
        
        if(buy==false) {
            //don't sell or sell + profit
            return memo[i][buy]=max(solve0(i+1, buy, prices), solve0(i+1, true, prices) + prices[i]- fee);
        }
        else{
            //don't buy or buy-profit
            return memo[i][buy]=max(solve0(i+1, buy, prices), solve0(i+1, false, prices) - prices[i]);
        } 
    }
    
    int solve0dp(int n, vector<int>& prices)
    { 
//        vector<vector<int>> dp (n+1, vector<int>(2, 0));
//         for(int i=n-1; i>=0; i--)
//         {
//             // for(int buy=0; buy<=1; buy++)
//             // {
//             //     if(buy==false)
//                     dp[i][0] = max(dp[i+1][0], dp[i+1][1] + prices[i] - fee);
//                 // else
//                     dp[i][1] = max(dp[i+1][1], dp[i+1][0] - prices[i]);
//             // }
//         }
            
//         return dp[0][1]; 
        
        int sellKara=0, buyKara=-prices[0];
        for(int i=1; i<n; i++)
        { 
            int buy = max(buyKara, sellKara - prices[i]);  // hold, or not hold + buy
            int sell = max(sellKara, buyKara + prices[i] - fee);  // not holding, or hold then sold
            buyKara = buy;
            sellKara = sell;
        }
        return sellKara;
    }
};