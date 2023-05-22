/*
https://leetcode.com/problems/sign-of-the-product-of-an-array/
*/

class Solution {
public:
    int arraySign(vector<int>& nums) {
        int cntneg = 0;
        for(const int& x: nums){
            if(x == 0) return 0;
            else if(x < 0) cntneg++;
        }
        
        return (cntneg%2 == 0)? 1 : -1;
    }
};