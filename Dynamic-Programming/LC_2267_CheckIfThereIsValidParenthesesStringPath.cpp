/*
https://leetcode.com/problems/check-if-there-is-a-valid-parentheses-string-path/
*/
class Solution {
public:
    int n, m;
    vector<vector<vector<int>>> memo;
    bool hasValidPath(vector<vector<char>>& grid) {
        m = grid.size();
        n = grid[0].size();
        if((m+n-1)%2) return false; //odd length path;
        memo.resize(m, vector<vector<int>>(n, vector<int>(m+n-1, -1)));
        return solve(0, 0, 0, grid);
    }
    
    bool solve(int r, int c, int openb, vector<vector<char>> &grid)
    {
        if(r>=m || c>=n)
            return false;
        if(grid[r][c] == '(') openb++;
        else openb--;
        if(openb<0 || openb > (m+n)/2) return false;
        if(r==m-1 and c==n-1)
            return (openb == 0);
        if(memo[r][c][openb] != -1)
            return memo[r][c][openb];
        return memo[r][c][openb]=solve(r+1, c, openb, grid) || solve(r, c+1, openb, grid);
    }
};