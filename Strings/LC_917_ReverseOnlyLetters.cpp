/*
https://leetcode.com/problems/reverse-only-letters/
*/
class Solution {
public:
    string reverseOnlyLetters(string s) {
        int n = s.length();
        int l = 0, r=n-1;
        while(l<r)
        {
            if(isalpha(s[l])==false)
                l++;
            else if(isalpha(s[r])==false)
                r--;
            else
            {
                swap(s[l], s[r]);
                l++, r--;
            }
        }
        return s;
    }
};