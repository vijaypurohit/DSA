/*
https://leetcode.com/problems/add-digits/
*/

class Solution {
public:
    int addDigits(int num) {
        if(num == 0) return 0;
        if(num%9 ==0 ) return 9;
        return num%9;
       // int digitalRoot = 0;  
        // while(num>0){
        //     digitalRoot += num%10;
        //     num = num/10;
        //     if(num == 0 and digitalRoot > 9){
        //         num = digitalRoot;
        //         digitalRoot = 0;
        //     }
        // } 
        // return digitalRoot;
    }//
};