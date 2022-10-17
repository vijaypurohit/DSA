/*
https://leetcode.com/problems/perfect-squares/
*/
class Solution {
public:
    int numSquares(int n) {
        // if(n<=0) return 0;
        /*
        //dp[i] is the least number of perfect square number that sum to i;
        vector<int> dp(n+1, INT_MAX);
        dp[0] = 0;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j*j<=i; j++) //perfect squares
                dp[i] = min(dp[i], dp[i-j*j]+1);
        }
        */
        /*
        // static dp
        static vector<int> dp = {0}; //to keep data between test cases rather than recomputing from scratch all the time, when asked about a new n, extend dp
        while(dp.size() <= n)
        {
            int size = dp.size();
            int val = INT_MAX;
            for(int j=1; j*j<=size; j++)// for the i=size, take all the perfect squares one by one (from 1 to n) and compute the min ways we can make i=size 
                val = min(val, dp[size-j*j]+1);
            dp.push_back(val);
        }
        return dp[n];
        */
        
        /*
        //switching the looping for above
        static vector<int> dp = {0};
        int m = dp.size();
        dp.resize(max(m,n+1), INT_MAX); // if larger value then increase size, since we declare it static
        for(int j=1, i; (i=j*j)<=n; ++j)
        {
            for(int k = max(m, i); k<=n; ++k)
            {
                if(dp[k] > dp[k-i]+1)
                    dp[k] = dp[k-i]+1;
            }
        }
        return dp[n];
        */
        
         // Based on Lagrange's Four Square theorem, there  are only 4 possible results: 1, 2, 3, 4.
        auto is_square = [&](int x){
            int val = sqrt(x);
            return val*val == x;
        };
        
        // If n is a perfect square, return 1.
        if(is_square(n))   
            return 1;   
        
        // The result is 4 if and only if n can be written in the form of 4^k*(8*m + 7). Legendre's three-square theorem.
        while((n&3)==0) // (n%4 == 0)
            n>>=2; //n /= 4;
        while((n&7) == 7) // (n%8 == 7)
            return 4;
        
        // Check whether 2 is the result
        for(int i=1; i<=sqrt(n); i++)
        {
            if(is_square(n-i*i))
                return 2;
        }
        
        return 3;
    }
};