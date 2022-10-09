/*
https://leetcode.com/problems/number-of-common-factors/
https://practice.geeksforgeeks.org/problems/common-divisors4712/1
*/
class Solution {
public:
    int commonFactors(int a, int b) {
        int g = __gcd(a,b);
        int n = sqrt(g);
        int ans=0;
        for(int i=1; i<=n; i++)
        {
            if(g%i == 0)
            {
                if(g/i == i) // if divisor is equal then count 1 (100/10 = 10 only 1)
                    ans+=1;
                else // if divisor is different  the count 2 (100/2 = 50 --> (2 and 50))
                    ans+=2;
            }
        }
        return ans; 
    }
};