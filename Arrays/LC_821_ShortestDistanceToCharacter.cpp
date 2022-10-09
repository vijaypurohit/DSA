/*
https://leetcode.com/problems/shortest-distance-to-a-character/
*/
class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.size();
        int right=-n;
        vector<int> ans(n, 0);
        
        // two pass
        for(int i=0; i<n; i++)
        {
            if(s[i] == c)
                right=i;
            ans[i] = i-right;
        }
        
        for(int i=right-1; i>=0; i--)
        {
            if(s[i] == c)
                right=i;
            ans[i] = min(ans[i], right-i);
        }
        return ans;
        
        // One Pass 2 Pointer Approach
        for(int i=0; i<n; i++)
        {
            if(s[i]==c)
            {
                if(right == -1)
                {
                    for(int j=i-1; j>=0 and s[j] != c; j--)
                        ans[j]=i-j;
                }
                else
                {
                    for(int j=right+1, k=i-1; j<=k; ++j, --k)
                    {
                        ans[j] = j-right;
                        ans[k] = i-k;
                    } 
                }
                right = i;
            }
        }
        
        if(right != -1)
        {
            for(int j=right+1; j<n; j++)
                ans[j] = j-right;
        }
        
        return ans;
    }
};