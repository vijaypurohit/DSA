/*
https://leetcode.com/problems/maximum-rows-covered-by-columns/
*/

class Solution {
public:
    int m, n;
    int ans=0;
    int maximumRows(vector<vector<int>>& mat, int cols) {
        m = mat.size();
        n = mat[0].size();
        if(n==cols) return m;
        
//         // vector<int> colsum(n, 0);
//         vector<int> rowsum(m, 0);
//         for(int i=0; i<m; i++)
//         {
//             for(int j=0; j<n; j++)
//             {
//                 rowsum[i] += mat[i][j];
//                 // colsum[j] += mat[i][j];
//             }
//         } 
        
//         solve(0, 0, cols, rowsum, mat);
        
        // approach 2: optimization 1: convert each row to num, optimization 2: next_popcount
        vector<int> nums(m,0);
        for(int i = 0; i < m; i++) 
        { 
            for(int j = 0; j < n; j++) {
               nums[i] = (nums[i]<<1) + mat[i][j];
            } 
        }
        int range = 1<<n;
        for(int mask=(1<<cols)-1; mask<range; mask++) // mask = next_popcount(mask)) 
        {
            if(__builtin_popcount(mask) != cols) continue;
            int curRows=0;
            
            // for(int r=0; r<m; r++)
            // {
            //     bool possible = true;
            //     for(int c=0; c<n; c++)
            //     { // mat[r][c] is one at that col c but we haven't selected that col
            //         if(mat[r][c]==1 and (mask>>c & 1)==0){
            //             possible = false;
            //             break;
            //         }
            //     }
            //     if(possible) curRows++;
            // }
            for(int row: nums)
            {
                if((row & mask) == row)
                    curRows++;
            }
            ans = max(ans, curRows);
        }
        
        return ans;
    }
    
    int next_popcount(int n) {
        int c = (n & -n), r = n + c;
        return (((r ^ n) >> 2) / c) | r;
    }
    
    void solve(int col_id, int rows_covered, int cols, vector<int> rowsum, vector<vector<int>>& mat)
    {
        if(cols == 0)
        {
            ans = max(ans, rows_covered);
            return;
        }
        if(col_id == n)
        {
            ans = max(ans, rows_covered);
            return;
        }
        
        //not pick
        solve(col_id+1, rows_covered, cols, rowsum, mat);
        
        //pick
        if(cols>0)
        { 
            int curRows=0;
            for(int r=0; r<m; r++)
            {
                if(mat[r][col_id] == 1) rowsum[r]--;
                if(rowsum[r]==0) curRows++;
            }
            
            solve(col_id+1, curRows, cols-1, rowsum, mat);
        }
    }
};