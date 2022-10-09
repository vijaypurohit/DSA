/*
https://leetcode.com/problems/minimize-xor/
https://practice.geeksforgeeks.org/problems/x-xor-a-is-minimum-and-set-bits-in-x-b/1
*/

/*
https://leetcode.com/problems/minimize-xor/
Input 64 40      (64 -> 0100 0000 (1), 40 -> 0010 1000 (2))
Output: 3 Expected: 65 (0100 0001, (2))
Input: 79 74     (79 - > 0100 1111 (5), 74 -> 0100 1010 (3))
Output: 74 Expected: 76 (0100 1100 (3))
Input: 25 72     (25 -> 0001 1001 (3), 72 -> 0100 1000 (2))
Output: 3 Expected: 24 (0001 1000 (2))

Let a = bitCount(num1) and b = bitCount(num2).
If a == b, we can pick x = num1 and x XOR num1 = 0 is minimal.

Explanation
If a > b, we can pick x equals the bigger b bits of num1,
so that we can XOR the bigger b bits of num1,
and keep the smaller a - b bits left to make result small.

If a < b, we can firstly pick x = num1,
and additionaly we need to pick b - a more bits that not in num1.
We check from the smaller bits until x have b bits.
*/ 
class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int cnt2 = __builtin_popcount(num2);
        int cnt1 = __builtin_popcount(num1);
        if(cnt1 == cnt2)
            return num1; // min xor value 0  
        int ans=0;
        /*
        // mask num1 bits
        for(int i=31; i>=0; i--)
        {
            int mask = 1<<i;
            bool bit = (num1 & mask);
            if(bit == 1 and cnt2 > 0){
                ans |= mask;
                cnt2--;
            }
        }
        // if cnt2>0 still, then set lsb bits
        for(int i=0; i<=31; i++)
        {
            if(cnt2==0)break;
            int mask = 1<<i;
            bool bit = (ans & mask);
            if(bit == 0){
                ans |= mask;
                cnt2--;
            }
        }
        return ans;
        */
        
        for(int i=0; i<=31; i++)
        {
            int mask = 1<<i;
            int set = num1 & mask;
            if(set==0 && cnt1 < cnt2) // set the bits 
            {
                ans |= mask;
                cnt2--;
            }
            else if(set && cnt1 > cnt2) // unset the bits
                cnt1--;
            else ans|=set; // same as num1 bits
        }
         
        return ans;
    }
};