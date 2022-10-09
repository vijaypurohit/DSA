/*
https://leetcode.com/problems/removing-stars-from-a-string/
*/

class Solution {
public:
    string removeStars(string s) {
        int n = s.length();
        
        //  string ans;
        // for(int i=0; i<n; i++)
        // {
        //     if(s[i] != '*')
        //         ans.push_back(s[i]);
        //     else 
        //         ans.pop_back(); 
        // }
        // return ans;
        
        int j=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='*')
                j--;
            else
                s[j++] = s[i];
        }
        
        return s.substr(0, j);
    }
};