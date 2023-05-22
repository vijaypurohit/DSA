/*
https://leetcode.com/problems/minimum-insertion-steps-to-make-a-string-palindrome/
*/
/*
The answer of the problem would be the length of s minus the length of the longest palindromic subsequence in s.
*/
class Solution {
public:
    int minInsertions(string s) {
        int n = s.length();
        
        return n - longestPalindromeSubseq(s);
    }
    
    int longestPalindromeSubseq(const string &s){
        int n = s.length();
        vector dp(n, vector<int>(n, 0));
        
        for(int i=0; i<n; i++)
            dp[i][i] = 1;
        
        for(int k=2; k<=n; k++){
            for(int i=0; i<n-k+1; i++){
                int j = i+k-1;
                if(s[i] == s[j])
                    dp[i][j] = dp[i+1][j-1] + 2;
                else
                    dp[i][j] = max(dp[i+1][j], dp[i][j-1]);
            }
        }
        
        return dp[0][n-1];
    }
};