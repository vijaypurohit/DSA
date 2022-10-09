/*
https://leetcode.com/problems/reverse-vowels-of-a-string/
*/

class Solution {
public:
    string reverseVowels(string s) {
        int l=0, h=s.length()-1;
        unordered_set<char> hash = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        while(l<h)
        {
            while(l<h and hash.count(s[l])==0)
                l++;
            while(l<h and hash.count(s[h])==0)
                h--;
            swap(s[l], s[h]);
            l++, h--;
        }
        return s;
    }
};