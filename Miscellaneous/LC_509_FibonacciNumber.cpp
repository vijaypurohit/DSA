/*
https://leetcode.com/problems/fibonacci-number/
*/
class Solution {
public:
    int fib(int n) {
        // return solve_rec(n);
        // return solve_dp(n);
        
        // using Binets Nth Forumla
        double phi = (sqrt(5)+1)/2;
        return round(pow(phi, n)/sqrt(5));
    }
    
    int solve_dp(int n)
    {
        if(n==0 or n==1)
            return n;
        // int dp[n+1];
        // dp[0]=0; dp[1]=1;
        // for(int i=2; i<=n; i++)
        //     dp[i] = dp[i-1]+dp[i-2];
        // return dp[n];
        
        int a=0, b = 1, c=0;
        for(int i=2; i<=n; i++)
        {
            c=a+b;
            a =b;
            b =c;
        }
        return c;
    }
    
    int solve_rec(int n)
    {
        if(n==0 or n==1)
            return n;
        return solve_rec(n-1)+solve_rec(n-2);
    }
};