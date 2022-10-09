/*
https://leetcode.com/problems/excel-sheet-column-title/

https://practice.geeksforgeeks.org/problems/excel-sheet5448/1


n = base26(ABZ) = (A+1)*26^2 + (B+1)*26^1 + (Z+1)*26^0; A->0 , B->1, Z->25
Now to derive
n-1 =  (A+1)*26^2 + (B+1)*26^1 + (Z+0)
(n-1)%26 =  (Z)
(n-1)/26 =  (A+1)*26^1 + (B+1) 
*/

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans="";          
        while(columnNumber>0)
        {
            columnNumber--; 
            ans = char(columnNumber % 26+65) + ans;
            columnNumber = columnNumber/26;
        } 
        return ans;
    }
};