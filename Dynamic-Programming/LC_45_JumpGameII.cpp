/*
https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1
https://leetcode.com/problems/jump-game-ii/
*/

class Solution {
public:
    int n;
    vector<int> memo;
    int jump(vector<int>& nums) {
        n = nums.size();
        // memo.resize(n, -1); 
        // return solve(0, nums);
        
        // int max_reach = 0, left_ptr = 0, right_ptr = 0, steps=0;
        // while(right_ptr<n-1)
        // {
        //     for(int i=left_ptr; i<=right_ptr; i++)
        //         max_reach = max(max_reach, i+nums[i]);
        //     left_ptr = right_ptr+1;
        //     right_ptr = max_reach;
        //     steps++;
        // }
        // return steps;
        
        int cur_max=0;
        int cur_reach=0;
        int jumps=0;
        for(int i=0; i<n-1; i++)
        {
            cur_max = max(cur_max, i+nums[i]);
            if(cur_max >=n-1) return jumps+1;
            if(i == cur_reach)
            {
                jumps++;
                cur_reach = cur_max;
            }
        }
        return jumps;
    }
    
    int solve(int idx, vector<int>&nums)
    {
        if(idx >= n-1)
            return 0;
        if(memo[idx]!=-1) return memo[idx];
        int cnt=1e7;
        for(int steps=idx+1; steps<=idx+nums[idx]; steps++)
        {
            cnt = min(cnt, solve(steps, nums)+1);
        }
        
        return memo[idx]=cnt;
    }//
};