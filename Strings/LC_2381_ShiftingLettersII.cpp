/*
2381. Shifting Letters II

https://leetcode.com/problems/shifting-letters-ii/
*/
class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int ns = s.length();
        vector<int> prefix(ns+1, 0);
        for(auto &x: shifts)
        { 
            if(x[2] == 0)
            {
                prefix[x[0]] -= 1;
                prefix[x[1]+1] += 1; 
            }
            else
            {
                prefix[x[0]] += 1;
                prefix[x[1]+1] -= 1; 
            }
        }
        
        prefix[0] %= 26;
        for(int i=1; i<ns; i++){
            prefix[i] += prefix[i-1];
            if(prefix[i] > 25 || prefix[i] < -25) prefix[i] %= 26; 
            // cout<<prefix[i]<<" ";
        }
        
        for(int i=0; i<ns; i++)
        {
            int ch = s[i] + prefix[i];
            if(ch > 'z') ch -= 26;
            else if(ch < 'a')  ch += 26;
            // cout<<s[i]<<" "<<ch<<" "<<prefix[i]<<") ";
            s[i] = ch;
        }
        return s;
    }//end
};