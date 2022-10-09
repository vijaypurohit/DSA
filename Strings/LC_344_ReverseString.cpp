/*
https://leetcode.com/problems/reverse-string/
*/
class Solution {
public:
    void reverseString(vector<char>& s) {
        // reverse(s.begin(), s.end());
        int l=0, h=s.size()-1;
        while(l<h)
        {
            swap(s[l], s[h]);
            l++;
            h--;
        }
    }
};