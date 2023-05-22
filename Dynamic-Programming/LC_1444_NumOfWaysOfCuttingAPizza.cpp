/*
https://leetcode.com/problems/number-of-ways-of-cutting-a-pizza/
*/
/*
dp[remain][row][col]: number of ways to cut the rectangular part pizza[row .. rows-1][col .. cols-1] with remain cuts , %mod
    remain -> how many cuts are left to make
    row topmost row, col leftmost column

base case = remain=0, ie no cut to make
    if pizza contains at least one apple -> dp[0][row][col] = 1 (there is one way to make no cuts and give it last person)
    if pizza contains no apples -> dp[0][row][col] = 0 (no way to give)

horizontal cuts (row < nxt_row < rows)
    upper part = pizza[row .. nxt_row-1][col .. cols-1] (apples = apples[row][col] - apples[nxt_row][col])
    bottom part = pizza[nxt_row .. rows-1][col .. cols-1]

vertical cut (col < nxt_col < cols)
    left part = pizza[row .. rows-1][col .. nxt_col-1] (apples = apples[row][col] - apples[row][nxt_col])
    right part = pizza[row .. rows-1][nxt_col .. cols-1]

how to verify if rectangle has an apple
apples[row][col] = number of apples on pizza pizza[row .. rows-1][col .. cols-1]
    (apples[0][0] will be the number of apples on the original pizza).
    apples[row][col] = (pizza[row][col] == 'A') +  // apple at cur pos
                        apples[row + 1][col] +  // num of apples at bottom rect
                        apples[row][col + 1] -  // num of apples at right rect
                        apples[row + 1][col + 1]. // num of apples at next block, it is being summed twice above
*/
class Solution {
public:
    const int mod = 1e9+7;
    int m, n;
    int ways(vector<string>& pizza, int k) {
        m = pizza.size(); n = pizza[0].size();
        vector apples(m+1, vector<int>(n+1, 0));
         vector memo(k, vector(m, vector<int>(n, -1)));
        // vector dp(k, vector(m, vector<int>(n, 0)));
        
        for(int i=m-1; i>=0; i--){
            for(int j=n-1; j>=0; j--){
                apples[i][j] = (pizza[i][j] =='A') + apples[i+1][j] + apples[i][j+1] - apples[i+1][j+1];
                // dp[0][i][j] = (apples[i][j] > 0);
            }
        }
        
        return solve(0,0,k-1,memo, apples);
        
//         for(int rem=1; rem<k; rem++){
//             for(int r=0; r<m; r++){
//                 for(int c=0; c<n; c++){
                    
//                     for(int nxt_r = r+1; nxt_r < m; nxt_r++){ // horizontal cut
//                         if(apples[r][c] - apples[nxt_r][c] > 0)
//                             (dp[rem][r][c] += dp[rem-1][nxt_r][c])%=mod;
//                     }
                    
//                     for(int nxt_c = c+1; nxt_c < n; nxt_c++){ //vertical cut
//                         if(apples[r][c] - apples[r][nxt_c] > 0)
//                             (dp[rem][r][c] += dp[rem-1][r][nxt_c])%=mod;
//                     }
                    
//                 }//j
//             } //i  
//         }//rem
//         return dp[k-1][0][0];
    }//ways
    
    
    int solve(int r, int c, int k, vector<vector<vector<int>>>& memo, vector<vector<int>>& apples){
        
        if(apples[r][c] == 0) // remaining rectangle has no apples
            return 0;
        if(k==0) // no cut remained
            return 1; // apples[r][c] > 0, so one way to make no cut
        
        if(memo[k][r][c] != -1)
            return memo[k][r][c];
        
        int cnt=0;
        for(int nxt_r = r+1; nxt_r < m; nxt_r++){ // horizontal cut
            if(apples[r][c] - apples[nxt_r][c] > 0)
                cnt = (cnt+solve(nxt_r,c,k-1,memo, apples))%mod;
        }

        for(int nxt_c = c+1; nxt_c < n; nxt_c++){ //vertical cut
            if(apples[r][c] - apples[r][nxt_c] > 0)
                cnt = (cnt+solve(r,nxt_c,k-1,memo, apples))%mod;
        }
        
        return memo[k][r][c] = cnt;

    }//solve
};