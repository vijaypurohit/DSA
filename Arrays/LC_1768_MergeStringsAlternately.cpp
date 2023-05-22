/*
https://leetcode.com/problems/merge-strings-alternately/
*/

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        int i=0;
        string ans="";
        while(i<min(n,m)){
            // cout<<word1[i]<<" "<<word2[i]<<endl;
            ans.push_back(word1[i]);
            ans.push_back(word2[i]);
            i++;
        }
        if(i<n) ans += word1.substr(i);
        if(i<m) ans += word2.substr(i);
        
        return ans;
    }
};