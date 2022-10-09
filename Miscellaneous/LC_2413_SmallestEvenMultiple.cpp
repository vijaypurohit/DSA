/*
https://leetcode.com/problems/smallest-even-multiple/
*/

class Solution {
public:
    int smallestEvenMultiple(int n) {
        // int div = __gcd(2, n);
        // int mult = 2*n; 
        // return mult/div;
        
        if(n%2 == 0)
            return n;
        else
            return n*2;
        
    }
};