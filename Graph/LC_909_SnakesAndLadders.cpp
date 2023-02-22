/*
https://leetcode.com/problems/snakes-and-ladders/
*/

class Solution {
public:
    /*
       n = 6
       [0][1][2][3][4][5]
    [0] 36 35 34 33 32 31 (<--)  ((pos-1)/6) = 5 %2 = 1 
    [1] 25 26 27 28 29 30 (-->)  ((pos-1)/6) = 4 %2 = 0
    [2] 24 23 22 21 20 19 (<--)  ((pos-1)/6) = 3 %2 = 1
    [3] 13 14 15 16 17 18 (-->)  ((pos-1)/6) = 2 %2 = 0
    [4] 12 11 10 09 08 07 (<--)  ((pos-1)/6) = 1 %2 = 1
    [5] 01 02 03 04 05 06 (-->)  ((pos-1)/6) = 0 %2 = 0  
    */
    pair<int,int> PosToIndex(int pos) //pos is zero-based indexing
    {
        pos--; //zero-based indexing
        bool toRight = (((pos/n)%2)==0);
        int i = (n-1) - (pos/n);
        int j = (toRight) ? (pos % n) : (n-1 - (pos%n)); 
        return {i, j};
    }
    
/*
Without Conversion to 1D array 
*/
    int BreadthFirstSearch(vector<vector<int>>& board)
    {
        queue<int> q; q.push(1);
        vector<int> dist(totalSq+1, -1);
        dist[1] = 0;
          
        while(!q.empty())
        {
            int cur = q.front(); q.pop();
            for(int next = cur+1; next <= min(cur+6, totalSq); next++)
            {
                auto idx = PosToIndex(next);
                int dest = ((board[idx.first][idx.second] == -1) ? next : board[idx.first][idx.second]); // dest is snake/ladder or normal count
                if(dist[dest] == -1) //first time visit
                {
                    dist[dest] = dist[cur] + 1;
                    q.push(dest);
                }
            }
        } 
        return dist[totalSq]; // dist at n*n box else -1
    }
    
    int n, totalSq;
    int snakesAndLadders(vector<vector<int>>& board) {
        n = board.size(); 
        totalSq = n*n;
        // 4  3
        // 1  2
        if(n==2) return 1; 
         
        
        return BreadthFirstSearch(board); // without converting
        
        /*
        //Conversion from 2D to 1D   
        vector<int> path(totalSq);
        int idx=0; bool toRight = true;
        for(int r=n-1; r>=0; r--)
        {
            if(toRight)
            {
                for(int c=0; c<n; c++)
                {
                    path[idx++] = ((board[r][c] == -1) ? -1 : board[r][c]-1);
                }
                toRight = false;
            }
            else
            {
                for(int c=n-1; c>=0; c--)
                {
                    path[idx++] = ((board[r][c] == -1) ? -1 : board[r][c]-1);
                }
                toRight = true;
            } 
        }
        
        // for(int i=0; i<totalSq; i++) cout<<path[i]<<" ("<<i+1<<")"<<"-> "; cout<<endl; 
        
        // return BreadthFirstSearch1D(path); // by converting to 1D
        */
         
        // return backtracking(0, path); // TLE don't know 
    }
/*
Conversion to 1D array
Then Finding Shortest Distance using BFS (Consider Graph with unit weight edge)
*/
    int BreadthFirstSearch1D(vector<int> path)
    {
        queue<int> q; q.push(0);
        vector<int> dist(totalSq, -1);
        dist[0] = 0;
          
        while(!q.empty())
        {
            int cur = q.front(); q.pop();
            for(int next = cur+1; next < min(cur+7, totalSq); next++)
            {
                int dest = ((path[next] == -1) ? next : path[next]); // dest is snake/ladder or normal count
                if(dist[dest] == -1) //first time visit
                {
                    dist[dest] = dist[cur] + 1;
                    q.push(dest);
                }
            }
        } 
        return dist[totalSq-1]; // dist at n*n box else -1
    }
 
/*
TLE
start = M[n-1][0] (n-1)th row, 0th column
end = M[0][0]
iteration alternate
<---- right
-----> left
<---- right
-----> left
Converting the board to 1D array
*/    
    set<int> vis;
    int backtracking(int cur, vector<int> path)
    {
        if(cur >= totalSq-1)
        {
            return 1;
        }
        
        int moves=totalSq; 
        for(int dest = cur+1 ; dest < min(cur+6, totalSq); dest++)
        {
            if(path[dest] != -1)
            {
                if(vis.count(dest) == 0)
                {
                    vis.insert(dest);
                    // cout<<"d:"<<dest<<" ";
                    moves = min(moves, backtracking(path[dest], path) + 1);
                }
            }
            else
                moves = min(moves, backtracking(dest, path) + 1);
        } 
        return moves;
    }
    
};