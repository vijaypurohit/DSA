/*
https://leetcode.com/problems/scramble-string/
*/
/*!
dp[length][i][j] boolean representing whether t is a scrambled version of w.
two substring 
    substring of s1 => w, starting at index i with length equal to "length"
    substring of s2 => t, starting at index j with length

split of s1 at 0 < newlength < length
    p, start at index i,            end at i+newlength-1, legnth=>newlength
    q, start at index i+newlength,  end at i+length-1, length=>length-newlength

for each split
    do not swap two substring. The corresponding substrings of s2 must be scrambled versions of the substrings we just created by splitting s1.
        first part of both  s1 s2  dp[newlength][i][j] should be true
        second part of both s1 s2  dp[length-newlength][i+newlength][j+newlength]
    swap the two substring.
        first part of s1, sec part of s2  dp[newlength][i][j+length-newlength] should be true
        sec part of s1, first of s2  dp[length-newlength][i+newlength][j]
*/
class Solution {
public:
     bool isScramble(string s1, string s2) {
         // return solve(s1, s2);
         
         int n = s1.size();
         vector dp(n+1, vector(n, vector<int>(n,0))); // dp[length][i][j] boolean representing whether t is a scrambled version of s.
         for(int i=0; i<n; i++){
             for(int j=0; j<n; j++)
                 dp[1][i][j] = (s1[i] == s2[j]);
         }
         
         for(int len=2; len<=n; len++){ // for each length
             for(int i=0; i<n+1-len; i++){ // s1 i=0 to (n+1)-len
                 for(int j=0; j<n+1-len; j++)
                 {
                     for(int newlen=1; newlen<len; newlen++){ // all possible split
                         const vector<int> &p = dp[newlen][i];
                         const vector<int> &q = dp[len-newlen][i+newlen];
                         
                         dp[len][i][j] |= ((p[j] and q[j+newlen]) or (p[j+len-newlen] and q[j]));
                         // dp[len][i][j] |= (p[j] and q[j+newlen]) ;
                         // dp[len][i][j] |= (p[j+len-newlen] and q[j]) ;
                     }
                 } 
             }
         }
         return dp[n][0][0]; // after length n of both string s1 and s2
     }
    
    unordered_map<string, bool> hash; 
    bool solve(string s1, string s2) {
        int n = s1.size();
        if(n != s2.size())
            return false;
        if(s1 == s2) // if both are equal
            return true;
        if(n==1) // if not equal and len = 1 then never going to be equal
            return false;
        
        string key = s1+s2;
        
        if(hash.find(key) != hash.end()) 
            return hash[key];
        
        for(int i=1; i<n; i++){
             // i->split point
            string s1_02i = s1.substr(0,i); string s2_02i = s2.substr(0,i);
            string s1_i2n = s1.substr(i); string s2_i2n = s2.substr(i);  
             
            // no swapping s2 =>  Left part s1(0,i)==s2(0,i) and right part s1(i,n)==s2(i,n),  gr|eat and rg|eat
            if(solve(s1_02i, s2_02i) and solve(s1_i2n, s2_i2n))
                return hash[key] = true;  
            
            string s2_ni2n = s2.substr(n-i); string s2_02ni = s2.substr(0,n-i);
            //   swapping s2 =>  Left part s1(0,i)==s2(n-i,n) Right part and right part s1(i,n)==s2(0,n-i) left part, gr|eat  rge|at
            if(solve(s1_02i, s2_ni2n) and solve(s1_i2n, s2_02ni))
                return hash[key] = true;
            
        }
        
        return hash[key];
    }
};