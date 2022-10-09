/*
https://leetcode.com/problems/find-greatest-common-divisor-of-array/
1979. Find Greatest Common Divisor of Array
*/

class Solution {
public:
    int findGCD(vector<int>& nums) {
        auto x  = minmax_element(nums.begin(), nums.end());
        // for(int i=*x.first; i>=1; i--)
        // {
        //     if(*x.first % i == 0 and *x.second%i == 0)
        //         return i;
        // }
        return gcd(*x.first, *x.second);
        // return __gcd(*x.first, *x.second);
    }
    
    int gcd(int a, int b)
    {
        return b==0 ? a : gcd(b, a%b);
    }
};