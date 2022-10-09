/*
https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/
*/
class Solution {
public:
    int n;
    vector<vector<int>> memo;
    int maxProfit(vector<int>& prices) {
        n = prices.size();
        //USING DP
        // memo.resize(n, vector<int>(2, -45));
        // solve(n-1, 0, prices);  
        // return memo[n-1][0];
        
        //Using PeakValley
        // return peakValley(prices);
        
        //One pass of Peak Valley
        return onePass(prices);
    }// end of maxProfit 
    
    int onePass(vector<int>& prices) { 
        int maxProfit=0;
        
        for(int i=1; i<n; i++)
        {
            if(prices[i-1]<prices[i])
                maxProfit += prices[i]-prices[i-1];
        }
        
        return maxProfit;
    }
    
    int peakValley(vector<int>& prices) { 
        int i=0;
        int valley = prices[0]; //i=0
        int peak = prices[0];
        int maxProfit = 0; //peak - valley
        int len = n-1;
        while(i<len)
        {
            while(i<len and prices[i] >= prices[i+1])
                i++;
            valley = prices[i];
            // cout<<"v["<<i<<"]="<<valley<<" p[";
            while(i<len and prices[i] <= prices[i+1])
                i++;
            peak = prices[i];
            // cout<<i<<"]="<<peak<<"), ";
            maxProfit += peak-valley;
        }
        
        return maxProfit;
    }// end of peakValley 
    
    int solve(int i, int share, vector<int>&prices)
    {
        if(i==0){
            if(share==0)
                return memo[i][share] = 0;
            else
                return memo[i][share] = -prices[i];
        }
        
        if(memo[i][share] != -45) return memo[i][share];
        
        if(share==0)
            return memo[i][share] = max(solve(i-1, 0, prices), solve(i-1, 1, prices)+prices[i]);
        else
            return memo[i][share] = max(solve(i-1, 1, prices), solve(i-1, 0, prices)-prices[i]);
    }//end solve
     
};