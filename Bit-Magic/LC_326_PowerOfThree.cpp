/*
326. Power of Three

https://leetcode.com/problems/power-of-three/
*/

class Solution {
public:
    bool isPowerOfThree(int n) {
        // return isPowerOfThree_rec(n);
        // if(n<=0) return false;
        // double a = log10(n)/log10(3);
        // if(ceil(a) == floor(a))
        //     return true;
        // return false;
        // n must be greater than 0 and the largest power of 3 is 3^19 and since 3 is prime, only a power of 3 would be divisible
        return n > 0 && 1162261467 % n == 0;
    }
    
    bool isPowerOfThree_rec(int n) {
        // if(n<=0) return false;
        // if(n==1) return true;
        // while(n>1)
        // {
        //     if(n%3 != 0)
        //         return false;
        //     n = n/3;
        // }
        // return true;
        
        return n%3==0 and isPowerOfThree_rec(n/3);
    }
};