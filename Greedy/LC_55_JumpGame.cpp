/*
55. Jump Game
https://leetcode.com/problems/jump-game/
*/

class Solution {
public:
    int n;
    vector<int> memo;
    bool canJump(vector<int>& nums) {
        n = nums.size();
        // memo.resize(n, -1);
        // return solve(0,  nums);
        
        int furthest = 0;
        for(int i=0; i<n; i++)
        {
            if(furthest < i) return false;
            furthest = max(furthest, i+nums[i]);
            if(furthest>=n-1) return true;
        }
        
        return true;
    }
    
    bool solve(int id, vector<int>& nums)
    {
        if(id>=n-1)
            return true; 
        
        if(memo[id]!=-1) return memo[id];
        
        for(int steps=id+1; steps<= id+nums[id]; steps++)
        {
            if(solve(steps, nums))
                return memo[id]=true;
        }
        return memo[id]=false;
    }
};