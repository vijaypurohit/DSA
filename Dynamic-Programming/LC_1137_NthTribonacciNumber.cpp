/*
https://leetcode.com/problems/n-th-tribonacci-number/
*/
class Solution {
public:
    
    // int dp[38];
    // int tribonacci(int n) {
    //     if(n<=1)
    //         return n;
    //     if(n==2)
    //         return 1;
    //     if(dp[n]!=0)
    //         return dp[n];
    //     return dp[n] = tribonacci(n-3)+tribonacci(n-2)+tribonacci(n-1);
    // }
    
    //  int tribonacci(int n) {
    //     int dp[] = {0,1,1}; //t0, t1, t2
    //     for(int i=3; i<=n; i++)
    //         dp[i%3] = dp[0] + dp[1] +dp[2];
    //      return dp[n%3];
    // }
    
     int tribonacci(int n) {
       if(n<=1)
           return n;
         int a=0;
         int b=1;
         int c=1;
         int d=0;
         while(n-- > 2)
         {
             d = a+b+c;
             a=b;
             b=c;
             c=d;
         }
         return c;
    }
};
