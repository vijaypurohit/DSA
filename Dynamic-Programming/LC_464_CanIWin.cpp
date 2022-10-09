/*
https://leetcode.com/problems/can-i-win/
*/

/*
https://leetcode.com/problems/can-i-win/
*/
/* 
Does there exist a choice for the 1st player, that no matter what choice the 2nd player make later, the 1st player always has a path to win?
*/
class Solution {
    
    
    // current game state k, remaining total T
    bool dfs_canStartingPlayerWin(int k, int T)
    {
        // the player who first causes the running total to reach or exceed the desiredTotal wins. if a player sees negative total in his turn, it means the other player causes the running total to exceed the desired total in the previous move
        if(T<=0) 
            return false;
        if(memo[k] != -1) return memo[k];
        for(int i=0; i<M; i++)
        {
            if(k & (1<<i)) //already picked
                continue;
            // if i+1 (count from 1) is available to pick and my opponent can't win after I picked
            if(dfs_canStartingPlayerWin(k|(1<<i), T-i-1) == false) // no chance for opponent to win
            {
                memo[k]=1;
                return true;
            }
        }
            
        memo[k] = 0; // I loose otherwise
        return false;
    }
    
public:
    
    int M;
    vector<int> memo;
    bool canIWin(int maxChoosableInteger, int desiredTotal) {
        M = maxChoosableInteger; 
        int sum = (M*(M+1))/2; // sum of entire
        
        if(desiredTotal <= M) // "cannot force a win" is only equal to "a forced win for the opponent"
            return true; // total desired is less than Max Int
        
        if(sum < desiredTotal) // total is large no body can win 
            return false;
        
        if(sum == desiredTotal) // 1 2 3 4 5, 1 2 3 4
            return M%2; // whoever picks at odd times wins;
        
        // vector<vector<int>> memo2(2, vector<int>(1<<M, -1));
        // this->desiredTotal = desiredTotal;
        // return solve(0, 0, 0, memo2);
         
        memo.resize(1<<M, -1);
        return dfs_canStartingPlayerWin(0, desiredTotal);// 0 number are picked  
    }

    int desiredTotal;
    bool solve(int k, int player, int T, vector<vector<int>>& memo2)
    { 
        if(memo2[player][k] != -1)
            return memo2[player][k];
        for(int i=0; i<M; i++)
        {
            if(k & (1<<i)) //already picked
                continue;
            if(T+i+1>=desiredTotal or solve(k|(1<<i), 1-player, T+i+1, memo2) == false) // either we should win or our opponent should loss.
            { 
                return memo2[player][k]=true;
            }
        }
        return memo2[player][k] = 0;
    }
};