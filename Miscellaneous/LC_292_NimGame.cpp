/*
https://leetcode.com/problems/nim-game/
*/
class Solution {
public:
    
    bool canWinNim(int n) {
        return ( n % 4 != 0);
        
        //TLE
        // if(n<=3)
        //     return true;
        // return solve(n);
        // vector<bool> ans(n+1, false);
        // ans[1]=ans[2]=ans[3]=true;
        // for(int i=4; i<=n; i++)
        //     ans[i] = (ans[i-1]==false || ans[i-2]==false || ans[i-3] ==false);
        // return ans[n];
    }//
    
    bool solve(int stones)
    {
        if(stones <= 0)
            return false;
        if(stones == 1 || stones == 2 || stones == 3)
            return true;
        
        for(int i=1; i<=3; i++)
        {
            if(canWinNim(stones-i) == false)
                return true;
        }
        return false;
    }
    
};