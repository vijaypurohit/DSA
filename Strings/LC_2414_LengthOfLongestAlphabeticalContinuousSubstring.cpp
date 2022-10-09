/*
https://leetcode.com/problems/length-of-the-longest-alphabetical-continuous-substring/
*/

class Solution {
public:
    int longestContinuousSubstring(string s) {
        int n = s.length();
        int max_len=1; 
        int l=0, r=1; 
        /*
        while(r<n)
        {
            if(s[l]+(r-l) == s[r])
            { 
                r++; 
                max_len = max(max_len, r-l);
            }
            else 
            {
                r++;
                l=r-1; 
            }
        }
        return max_len;
        */
        
        for( ; r<n; r++)
        {
            if(s[l] + (r-l) != s[r])
                l=r;
            max_len = max(max_len, r-l+1);
        }
        return max_len;
    }
};