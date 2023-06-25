/*
https://leetcode.com/problems/stone-game-iii/
*/
/*
 dp[i] is the first player's score minus the second player's score at the end of the game.
 base case dp[n]=0 no stones
 dp[i] = score_x - score_y;
 dp[i+1] = score_y - score_x
  
one player's gain is the other player's loss, we need to subtract the next dp state. 

*/

class Solution {
public:
    int n;
    const int notComputed = 1000000000;
    string stoneGameIII(vector<int>& stoneValue) {
        n = stoneValue.size();
        vector<int> dp(n+1, notComputed);
        
        function<int(int)> solve = [&](int i) -> int {
            if(i == n) return 0;
            if(dp[i] != notComputed) return dp[i];
            int ans = stoneValue[i] - solve(i+1);
            if(i+2<=n)
                ans = max(ans, stoneValue[i] + stoneValue[i+1] - solve(i+2));
            if(i+3<=n)
                ans = max(ans, stoneValue[i] + stoneValue[i+1] + stoneValue[i+2] - solve(i+3));
            return dp[i]=ans;
        };
        
        
        int diff = solve(0);
        if(diff < 0) return "Bob";
        if(diff > 0) return "Alice";
        return "Tie";
    }
};