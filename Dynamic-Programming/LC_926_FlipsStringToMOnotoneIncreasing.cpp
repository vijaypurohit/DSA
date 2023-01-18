/*
https://leetcode.com/problems/flip-string-to-monotone-increasing/
*/

class Solution {
public:
    int minFlipsMonoIncr(string s) {
        // return dynamicWindow(s);
        return dynamicProgramming(s);
    }
/*
  m = left1 + right0   (number of 1s in cur left) + (num of 0s in the cur right)
  if ch = '0'
    left1 unchanged, right0 - 1
  if ch = '1'
    left1 + 1, right0 unchanged
  initially m = right0 (num of 0s in string s)
  scan the input and dec or inc the m
*/    
    int dynamicWindow(string &s)
    {
        int m = 0; // m = left1 + right0 // (number of 1st in cur left) + (num of 0s in the cur right)
        for(char &ch: s)
        {
            if(ch == '0') ++m;
        }
        
        int ans = m;
        for(char &ch: s)
        {
            if(ch == '0') {
                m--;
                ans = min(ans, m);
            }
            else {
                m++;
            }
        }
        return ans;
    }
    
/*
dp[i] min number of flips to make the prefix of s of len i monotone increasing
dp[0] = 0 zero for len 0
if ch = 1
    then no need to flip as it is already increasing
    dp[i] = dp[i-1] // same number of flips
if ch = 0
    then two choices flip it or not flip it
    if we flip it  then dp[i] = dp[i-1] + 1; number of previous flips + 1 this time
    if we don't flip it then dp[i] = num; we need to flips all the ones till now.
*/    
    int dynamicProgramming(string &s)
    {
        int n = s.length(), num = 0; // number of ones in prefix of string s
        vector<int> dp(n+1); // dp[i] min num of flips to make the prefix of s of len i monotone increasing.
        dp[0] = 0; // zero flips for len of string 0
        for(int i=1; i<=n; i++)
        {
            if(s[i-1] == '0') // flip it or not flip it
            {
                dp[i] = min(dp[i-1]+1, num);
            }
            else // if (s[i-1] == 1) //then already increasing no need to flips
            {
                dp[i] = dp[i-1];
                ++num;
            }
        }
        
        return dp[n];
    }
};