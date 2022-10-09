/*
https://leetcode.com/problems/palindromic-substrings/
647. Palindromic Substrings

*/

class Solution {
public:
    int n;
    int countSubstrings(string s) {
        n = s.length();
        int ans=0;
        // /*
        for(int i=0; i<n; i++)
        {
            ans +=  expand(s, i, i);
            if(i-1>=0 and s[i]==s[i-1])
                ans+= expand(s, i-1, i);
        }
        // */
        
        // vector<vector<int>> dp(n, vector<int>(n, 0));
        // for(int i=n-1; i>=0; i--)
        // {
        //     for(int j=i; j<n; j++)
        //     {
        //         if(i==j)
        //             dp[i][j] = 1;
        //         else if(i+1 == j and s[i] == s[j])
        //             dp[i][j] = 1;
        //         else if(i<j and s[i]==s[j] and dp[i+1][j-1] != 0)
        //             dp[i][j] = 1;
        //         ans += dp[i][j];
        //     }
        // }
        return ans;
    }//
    
    int expand(string& s, int l, int r)
    {
        // if(l<0 || r>=n) return 0;
        int cnt=0;
        while(l>=0 and r<n and s[l] == s[r])
        {
            l--;
            r++;
            cnt += 1;
        }
        return cnt;
    }
    
};