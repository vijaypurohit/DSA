/*
https://leetcode.com/problems/restore-the-array/
*/
/*
In order to find all arrays that can be printed as the entire string s, we can start with finding all possible first integers.
Suppose the size of the input string is m, 
let dfs(x) be the number of arrays for the suffix substring s[x ~ m - 1].
*/
class Solution {
public:
    const int mod = 1e9+7;
    int m,k;
    int numberOfArrays(string s, int k) {
        m = s.length();
        this->k = k;
        vector<int> memo(m+1, -1);
        return dfs(0, s, memo);
    }
    
    int dfs(int idx, const string& s, vector<int>& memo){
        if(memo[idx] != -1)
            return memo[idx];
        if(idx == m)
            return 1; // one array division fonud;
        
        if(s[idx] == '0')
            return 0; // no leading zeros on number
        
        int count = 0;
        // for(int j=idx+1; j<=m; j++){
        //     string curnum = s.substr(idx, j-idx);
        //     if(stol(curnum) > k)break;
        //     count = (count + dfs(j, s, memo))%mod;
        // }
        long num=0;
        for(int j = idx; j<m; j++){
            num = num*10 + s[j]-'0';
            if(num > k)break;
            count = (count + dfs(j+1, s, memo))%mod;
        }
        return memo[idx] = count;
    }
};