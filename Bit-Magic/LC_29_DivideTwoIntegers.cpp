 /*
https://leetcode.com/problems/divide-two-integers/
*/
/*
Value of INT_MAX is +2147483647. (2^31 - 1)
Value of INT_MIN is -2147483648. (-2^31)
INT_MIN / -1 = INT_MAX+1 (or -INT_MIN or 2147483648); INT_MIN/1 = INT_MIN

dividend = (quotient) * divisor + remainder
Any number can be represented in binary form. Same goes for quotient :
Let us have an example: 58/5:
58 = (11) * 5 + 3
Representing the quotient in binary form: (11)base_10 = (1011)base_2:

	58 = (2^3 + 2^1 + 2^0) * 5 + 3                // --- (I)
	58 = [(2^3 * 5) + (2^1 * 5) + (2^0 * 5)] + 3  // --- (II)
Since we dont know the quotient and remainder the equation we know is:
58 = (q) * 5 + rem
We will first multiply 5 with maximum power of 2 such that the resulting number is still smaller than the dividend (read further if you don't understand why). Since multiplication operator is not allowed, we would use bitwise left shift to achieve this multiplication: each time we shift 5 by 1, we multiply it by 2:
    5 << 0 = 5               // less than dividend
	5 << 1 = 5*2 = 10        // less than dividend
	5 << 2 = 5*2*2 = 20      // less than dividend
	5 << 3 = 5*2*2*2 = 40    // less than dividend
	5 << 4 = 5*2*2*2*2 = 80  // (stop and consider the previous value as the result is greater than dividend
We observe that:
58 = (2^3 * 5) + (something * 5) + rem // --- (III)
You can see we are getting close to the equation we initialy wanted (eqa II).
Since 5 is multiplied with 23, we add 23 to our answer.
Further operating on equation III:

	58 - (2^3 * 5)  =  (something * 5) + rem
	58 - (8 * 5) = something * 5 + rem
	58 - 40 = something * 5 + rem
	18 = something * 5 + rem
*/
class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == divisor)
            return 1;
        if(dividend == INT_MIN and divisor == -1)
            return INT_MAX;
        // return dividend/divisor;
        
        unsigned int a = abs(dividend), b = abs(divisor), ans=0;
        // short q=0;
        // while(a >= b) // while dividend is greater than or equal to divisor
        // {   
        //     for(q=0; a > (b<<(q+1)); q++); 
        //     ans += (1<<q); // add the power of two to ans
        //     a -= (b<<q); // reduce the dividend
        //     // cout<<"a="<<a<<" b="<<b<<" x="<<x<<" ans="<<ans<<" "<<endl;
        // }
        
        for(short q = 31; q>=0; q--)
        {
            if((a>>q)>=b)
            {
                a = a-(b<<q);
                ans = ans+ (1<<q);
            }
        }
        
        // if both positive then ans, else negative quotient
        return (dividend>0) == (divisor>0) ? ans : -ans;
    }
};