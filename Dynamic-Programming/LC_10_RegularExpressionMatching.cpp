/*
10. Regular Expression Matching

https://leetcode.com/problems/regular-expression-matching/
*/

class Solution {
public:
    int ns, np; 
     vector<vector<int>> memo;
    bool isMatch(string s, string p) {
        ns = s.length();
        np = p.length();
        // memo.assign(ns+1, vector<int>(np+1, -1));
        // return solveDPRec(0,0, s, p);
        
         return solveDP(s,p);
    }
    
     bool solveDP(string s, string p)
    {
       vector<vector<bool>> dp(np+1, vector<bool>(ns+1, false));
        dp[0][0] = true; // null both
        // for(int c=1; c<=ns;  c++)  dp[0][c] = false;
        
        for(int i=1; i<=np; i++)
        {   //j==0
            if(p[i-1] == '*') dp[i][0] = dp[i-2][0]; 
            // bool match = false; 
            for(int j=1; j<= ns; j++)
            {
                if(p[i-1] == s[j-1] || p[i-1] =='.')
                    dp[i][j] = dp[i-1][j-1];
                else if(p[i-1] == '*')
                {
                    dp[i][j] = dp[i-2][j]; // if we dont consider current *
                    if(p[i-2] == s[j-1] || p[i-2] =='.')
                    { 
                        dp[i][j] = dp[i][j] || dp[i][j-1];
                    }
                } //else dp[i][j]= false;
            }
        }
        
        // for(int i=0; i<=np; i++) { for(int j=0; j<=ns; j++){ cout<<dp[i][j]<<" "; } cout<<endl;  }
        
        return dp[np][ns];
    }
    
    bool solveDPRec(int i, int j, string& s, string& p)
    {
        if(i>=ns and j>=np) // both the string matched.
            return true;
        if(j>=np) // pattern completed but not string s 
            return false;
        if(i>=ns){ 
            if(j+1<np and p[j+1]=='*')
                return solveDPRec(i, j+2, s, p);
            else
                return false; 
        }
        
        if(memo[i][j] != -1) return memo[i][j];
        
        bool match = (s[i] == p[j]) || (p[j]=='.');// first char matched
        
        if(j+1<np and p[j+1]=='*') // next char is *
        {
            // not take the next * and jump to next of * (zero char of ?*)
            // OR char is matched so we can same char one or more times so go to next char in string
            return memo[i][j] = (solveDPRec(i, j+2, s, p)) || ( match and solveDPRec(i+1, j, s, p));
        }  
        else 
            return memo[i][j] = match and solveDPRec(i+1, j+1, s, p);
    }
    
};