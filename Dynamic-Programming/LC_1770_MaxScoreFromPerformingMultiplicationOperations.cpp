/*
1770. Maximum Score from Performing Multiplication Operations
https://leetcode.com/problems/maximum-score-from-performing-multiplication-operations/
*/

class Solution {
public:
    int n,m; 
    vector<vector<int>> memo;
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        n = nums.size();
        m = multipliers.size(); 
        
        
        /* // memoization, two things, use m as only upto left=m can be reached and use INT_Min as -1 could be ans
        // init values that couldn't be reached. -1 will cause TLE. -2 would pass but it's not supposed to pass
        memo.resize(m, vector<int>(m, INT_MIN)); // max possible score after we have done op total operations and used left numbers from the left/start side;
        return solve(0, 0, nums, multipliers);
        */
        
        
        /* //tabulation
        //op can vary from 0 to m and left also
        vector<vector<int>> dp(m+1, vector<int>(m+1, 0));  // max possible score after we have done op total operations and used left numbers from the left/start side; 
        
        for(int op=m-1; op>=0; op--)
        {
            for(int left=op; left>=0; left--) //op operations done, we are at max left=op index (all left used)
            {
                int right = (n-1) - (op-left);
                dp[op][left] = max(
                    nums[left]*multipliers[op] + dp[op+1][left+1],
                    nums[right]*multipliers[op] + dp[op+1][left]
                );
            }
        }
        return dp[0][0];
        */
        
        /* //one dimension DP with extra row
        vector<int> dp(m+1, 0);
        for(int op=m-1; op>=0; op--)
        {
            vector<int> next_row = dp; 
            for(int left=op; left>=0; left--) 
            {
                int right = (n-1) - (op-left);
                dp[left] = max(
                        nums[left]*multipliers[op] + next_row[left+1],
                        nums[right]*multipliers[op] + next_row[left]
                    );
            }
        }
        return dp[0];
        */
        
        //one dimension DP , so we require to use right part of (left dp) so we can start from 0
        vector<int> dp(m+1, 0);
        for(int op=m-1; op>=0; op--)
        { 
            for(int left=0; left<=op; left++) 
            {
                int right = (n-1) - (op-left);
                dp[left] = max(
                        nums[left]*multipliers[op] + dp[left+1],
                        nums[right]*multipliers[op] + dp[left]
                    );
            }
        }
        return dp[0];
    }
    
    int solve(int op, int left, vector<int>& nums, vector<int>& multi)
    {
        // if we have performed all the operations
        if(op==m)
            return 0;
        
        if(memo[op][left] != INT_MIN)
            return memo[op][left];
        int right = (n-1) - (op-left);
        return memo[op][left] = max(
            nums[left]*multi[op] + solve(op+1, left+1, nums, multi), //use left and then inc
            nums[right]*multi[op] + solve(op+1, left, nums, multi) // use right, left will remain same but op inc
        );
    }
};