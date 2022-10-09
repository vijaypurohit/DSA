/*
https://leetcode.com/problems/concatenation-of-consecutive-binary-numbers/
*/
class Solution {
    const int mod = 1e9+7;
public:
    int n;
    int concatenatedBinary(int n) {
        if(n==1)
            return 1;
        
        int len = 1, m=1;
        long ans=1;
        auto numOfBits = [&](int x){
            return log2(x)+1;
        };
        for(int i=2; i<=n; i++)
        {
            // int len = numOfBits(i); // one way to count num of bits
            // if(m*2 == i)m=i,len++; // another way to count num of bits sequentially from 338.Counting Bits
            if((i&(i-1))==0)len++; // another way to count num of bits sequentially from 338.Counting Bits
            ans = ((ans<<len) | i)%mod;
        }
        return ans;
    }
    
//     int solve(int x )
//     {
//         if(x==n)
//             return x;
        
//         int ret = solve(x+1);
//         int digits = ceil(log2(ret));
//         long p = pow(2, digits);
//         int val2 = ((p*x)%mod + ret%mod)%mod;
          
        
//         return val2%mod;
//     }
};