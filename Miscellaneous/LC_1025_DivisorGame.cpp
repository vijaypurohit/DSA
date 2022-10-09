/*
https://leetcode.com/problems/divisor-game/
*/

class Solution {
public:
    bool divisorGame(int n) {
        // return n%2==0;
        if(n==1) 
            return false;
        
        /*
        // chance left 
        int c=0;
        while(n!=1)
        {
            n--;
            c++;
        }
        if(c%2 == 0) return false;
        
        return true;
        */
        
        vector<int> dp(n+1, -1);
        return can_win(n, dp);
    }
    
    bool can_win(int n, vector<int>& dp)
    {
        if(n<=1)
            return false;
        if(dp[n] != -1)
            return dp[n];
        dp[n]=0;
        int range= sqrt(n);
        for(int i=1; i<=range; i++)
        {
            if(n%i == 0)
                dp[n] |= can_win(n-i, dp)==false;
        }
        return dp[n];
    }
};