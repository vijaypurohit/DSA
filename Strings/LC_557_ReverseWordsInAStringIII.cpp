/*
557. Reverse Words in a String III

https://leetcode.com/problems/reverse-words-in-a-string-iii/
*/

class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        for(int i=0; i<n; i++)
        {
            int start=i;
            while(i<n and s[i] != ' ')
                i++;
            reverse(s.begin()+start, s.begin()+i);
        }
        return s;
    }
};