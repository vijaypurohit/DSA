/*
https://leetcode.com/problems/surrounded-regions/
*/
class Solution {
public:
    int m, n;
    void solve(vector<vector<char>>& board) {
        m = board.size();
        n = board[0].size();
        
        //first and last column
        for(int r=0; r<m; r++) {
            if(board[r][0]=='O')  dfs(r, 0, board);
            if(board[r][n-1]=='O')  dfs(r, n-1, board);
        }
        //first and last row
        for(int c=0; c<n; c++) {
            if(board[0][c]=='O')  dfs(0, c, board);
            if(board[m-1][c]=='O') dfs(m-1, c, board);
        }
        
        for(int r=0; r<m; r++) {
            for(int c=0; c<n; c++) {
                 if(board[r][c]=='O')  board[r][c]='X';
                 else if(board[r][c]=='#')  board[r][c]='O';
            }
        }
    }
    
    vector<pair<int,int>> dirs = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    void dfs(int r, int c, vector<vector<char>>& board)
    {
        if(r<0 or c<0 or r>=m or c>=n or board[r][c] != 'O')
            return ;
        board[r][c] = '#';
        for( auto &[x, y]: dirs) 
            dfs(r+x, c+y, board); 
    }
};