/*
942. DI String Match

https://leetcode.com/problems/di-string-match/
*/

class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = s.length();
        vector<int> ans(n+1);
        int low=0;
        int high= n;
        for(int i=0; i<=n; i++)
        {
            if(s[i] == 'I')
                ans[i] = low++;
            else 
                ans[i] = high--;
        } 
        return ans;
    }
};