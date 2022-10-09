/*
https://leetcode.com/problems/reverse-string-ii/
*/

class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.length();
        int k2 = 2*k;
        for(int i=0; i<n;  i = k2+i)
        {
            int pos = min({k2+i, k+i, n});
            reverse(s.begin()+i, s.begin()+pos);
        }
        return s;
    }
};