/*
https://leetcode.com/problems/check-if-a-parentheses-string-can-be-valid/
*/
class Solution {
public:
    bool canBeValid(string s, string locked) {
        int n = s.size();
        if(n & 1) // odd length
            return false;
        
        int bracket = 0;
        for(int i = 0; i<n; i++)
        {   // if opening bracket or unlocked
            if(s[i] == '(' or locked[i] == '0')
                bracket++;
            else
                bracket--; // ')' and locked
            if(bracket < 0) // we have more ')'
                return false;
        }
        bracket = 0;
        for(int i = n-1; i>=0; i--)
        {   // if opening bracket or unlocked
            if(s[i] == ')' or locked[i] == '0')
                bracket++;
            else
                bracket--; // '(' and locked
            if(bracket < 0) // we have more '('
                return false;
        }
        return true;
    }
};