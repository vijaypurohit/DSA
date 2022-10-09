/*
https://leetcode.com/problems/valid-parenthesis-string/
678. Valid Parenthesis String
*/

class Solution {
public:
    bool checkValidString(string s) {
        int cmin=0, cmax=0; // number of ')' to match
        for(char ch: s){
            switch(ch)
            {
                case '(' : 
                        cmin++; 
                        cmax++; 
                        break;
                case ')' : 
                        cmax--; 
                        cmin = max(cmin-1, 0);
                        break;
                case '*' : 
                        cmax++; 
                        cmin = max(cmin-1, 0);
                        break;
            }
            if(cmax<0)
               return false;
        }
        return cmin==0;
    }
    
     bool checkValidString_(string s) {
        int n = s.length();
        int open=0;
         for(int i=0; i<n; i++)
         {
             if(s[i] == '(' || s[i] == '*')
                 open++;
             else
                 open--;
             if(open<0)
                 return false;
         }
         if(open==0)return true;
         
         int close=0;
         for(int i=n-1; i>=0; i--)
         {
             if(s[i] == ')' || s[i] == '*')
                 close++;
             else
                 close--;
             if(close<0)
                 return false;
         }
         return true;
    }
};