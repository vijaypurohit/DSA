/*
https://leetcode.com/problems/number-of-ways-to-form-a-target-string-given-a-dictionary/
*/ 
/*
n = words.size(); k = words[0].size(); m = target.size();
imagine words as a matrix containing n rows (each being a word) and k columns.

dp[i][j] = num of ways to build the prefix of target of length i using only j leftmost columns

base case j = 0 -> not considered any columns and not build target yet
    dp[0][0] = 1 -> there is one way not to put any characters
    dp[i][0] = 0 for i>0 some char to make because it is impossible to build a non-empty prefix using 0 columns.

dp[i][j] with j < k
    if i<m we need to add the char target[i] to current built prefix
    otherwise we have completely built the string target

Let cnt[c][j] denote the number of occurrences of the character c in the j-th column of the matrix – one can precompute this before calculating the DP. 

we have two options: to pick a character at the j-th column (only if  i<m) or to move to the next one. 
    When we choose a character target[i] from the j-th column and add it to the current prefix with length i
        then new length becomes i+1; we cannot use j th col and have to move to j+1 one.
        The number of ways to choose a character target[i] in the j-th column equals cnt[target[i]][j].
    When we skip the j-th column and move on to the (j + 1)-th one, we do not add anything to the current prefix, 
        and its length remains equal to i.
        Only one way to not choose any character.
*/

class Solution { 
    const int mod = 1e9+7;
public:
    int n, m, k;
    int numWays(vector<string>& words, string target) {
        n = words.size(); // num of words / rows
        k = words[0].size(); // num of chars in words /columns
        m = target.size();
        
        // vector cnt(26, vector<int>(k)); 
        // for(const string& s: words){
        //     for(int col=0; col<k; col++){ 
        //         cnt[s[col]-'a'][col]++;
        //     }   
        // }
        // return memo(words, target, cnt);
        // return tabulation(words, target, cnt);
        
         
        vector<long> res(m + 1); res[0] = 1; // one way to make 0 char target
        for (int col = 0; col < k; ++col) {
            vector<int> count(26);
            for (auto& s : words) // freq of char in the col
                count[s[col] - 'a']++;
            for (int ti = m - 1; ti >= 0; --ti) {
                res[ti + 1] += res[ti] * count[target[ti] - 'a'] % mod;
            }
        }
        return res[m] % mod;
    }//
    
    
    int tabulation(vector<string>& words, string& target, vector<vector<int>>&cnt){
        // dp
        vector dp(m+1, vector<long long>(k+1));
        dp[0][0] = 1;
        for(int ti=0; ti<=m; ti++){
            for(int col=0; col<k; col++){
                if(ti<m){ // picking up col
                    dp[ti+1][col+1] += cnt[target[ti]-'a'][col] * dp[ti][col];
                    dp[ti+1][col+1]%=mod;
                }
                (dp[ti][col+1] += dp[ti][col])%=mod;
            }
        }
        return dp[m][k]; 
    }
    
    int memo(vector<string>& words, string& target, vector<vector<int>>&cnt){
         // ,memoization
        vector memo(m+1, vector<long long>(k+1, -1)); 
        function<int(int,int)> solve =[&](int i, int col)->long long{
            if(col==0){
                return (i==0)?1:0;
            }
            if(memo[i][col] != -1) return memo[i][col];
            long long res = solve(i, col-1); // don't take this col to build i th char of target
            if(i>0){ // take this col to build
                res += (long)cnt[target[i-1]-'a'][col-1] * solve(i-1, col-1);   
            }
            return memo[i][col] = res%mod;
        }; 
        int ans = solve(m, k); // make m char with k cols
        return ans;
    }
};