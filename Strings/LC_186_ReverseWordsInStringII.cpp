/*
https://leetcode.com/problems/reverse-words-in-a-string-ii/
https://www.lintcode.com/problem/927/
*/

class Solution {
public:
    /**
     * @param str: a string
     * @return: return a string
     */
    string reverseWords(string &s) {
        int n = s.length();
        int l=0;
        for(int r=0; r<=n; r++)
        {
            if(r==n || s[r]==' ')
            {
                reverse(s.begin()+l, s.begin()+r);
                l=r+1;
            }
        }   
        reverse(s.begin(), s.end());   
        return s;
    }
};