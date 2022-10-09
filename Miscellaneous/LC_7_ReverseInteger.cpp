/*
https://leetcode.com/problems/reverse-integer/
*/

// INT_MAX is equal 2147483647. INT_MIN is equal  -2147483648. 
class Solution {
public:
    int reverse(int x) {
       int rev=0;
       while(x)
       {
           int pop = x%10;
           x/=10;
           
           if(rev>INT_MAX/10 || rev==INT_MAX/10 and pop > 7) return 0;
           if(rev<INT_MIN/10 || rev==INT_MIN/10 and pop < -8) return 0;
           
           rev = rev*10 + pop;
       }
        
       return rev;
    }//
};