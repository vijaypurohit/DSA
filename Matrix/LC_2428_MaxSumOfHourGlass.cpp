/*
https://practice.geeksforgeeks.org/problems/maximum-sum-of-hour-glass3842/1
https://leetcode.com/problems/maximum-sum-of-an-hourglass/
*/

class Solution {
public:
    int maxSum(vector<vector<int>>& grid) {
        int m = grid.size(),  n = grid[0].size();
        int rows = m-2, cols = n-2;
        int ans = 0;
        
        for(int i=0; i<rows; i++)
        {
            for(int j=0; j<cols; j++)
            {
                int sum = (grid[i][j]+grid[i][j+1]+grid[i][j+2])+
                            (grid[i+1][j+1])+
                            (grid[i+2][j]+grid[i+2][j+1]+grid[i+2][j+2]);
                ans = max(ans, sum);
            }
        }
        
        return ans;
    }
};