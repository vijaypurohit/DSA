 /*
https://leetcode.com/problems/power-of-four/
342. Power of Four

Reference:: 
https://leetcode.com/problems/power-of-four/discuss/2463284/C%2B%2B-oror-Formal-Proof-oror-Explained

Proof that (4^k-1) is multiple of 3. (n=4^k, then n-1 % 3 == 1)
It relies on :

(4^k-1) = (2^k-1)*(2^k+1)
For any three consecutive integers (l,(l+1),(l+2)), one of them in necessarily multiple of 3
When we consider integers (2^k-1), 2^k, (2^k+1), one of them is a multiple of 3. We know however that 2^k is not multiple of 3. Therefore (2^k-1) or (2^k+1) is and therefore (4^k-1) is.

Proof that a single bit integer n such that '(n-1) is multiple of 3' is necessarily of power of 4.
Let's imagine that such single bit integer is not a power of 4, then n = 2^(2k+1).
Then n-1 = 2^(2k + 1) - 1 = 2* 2^(2k) -1 = 4^k + (4^k-1)
Since we assumed that n-1 is multiple of 3 and since we know that (4^k-1) is a multiple of 3, that would mean that 4^k is also a multiple of 3, which is impossible. Therefore n is necessarily a power of 4.

*/
class Solution {
public:
    bool isPowerOfFour(int n) {
        // return isPowerOfFour_rec(n);
        
        // if(n==0) return false;
        // float a = log(n)/log(4);
        // if(ceil(a) == floor(a))
        //     return true;
        // return false;
        
        return (n>0) and ((n & (n-1)) == 0) and ((n-1)%3 == 0);
    }
    
/*
    n>0 is there to check if the number is positive, since negative numbers are not power of 4
    (n & (n-1)) == 0 is there to check if the binary representation of the number has only one 1 in it.
    (n-1)%3==0 is to check 4 to the power x minus 1 is divisible by 3. This is mathematically true for all powers of 4
*/
     bool isPowerOfFour_rec(int n) {
        if(n<=0) return false;
        if(n==1) return true;
        return n%4==0 and isPowerOfFour_rec(n/4);
    }
};