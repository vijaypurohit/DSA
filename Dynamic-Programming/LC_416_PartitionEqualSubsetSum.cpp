/*
https://leetcode.com/problems/partition-equal-subset-sum/

https://practice.geeksforgeeks.org/problems/subset-sum-problem2014/1
Partition Equal Subset Sum
*/

class Solution {
public:
    int n;
    vector<vector<int>> memo;
    bool canPartition(vector<int>& nums) {
        n = nums.size();
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if(sum%2)
            return false;
        memo.assign(n+1, vector<int>(sum/2 +1, -1));
        return solve(n, sum/2, nums);
    }//end
    
    bool solve(int idx, int sum, vector<int>& nums)
    {
        if(sum==0)
            return memo[idx][sum] = true;
        if(idx==0)
            return memo[idx][sum] = false;
        
        if(memo[idx][sum] != -1)
            return memo[idx][sum];
        
        if(nums[idx-1] > sum)
            return memo[idx][sum] = solve(idx-1, sum, nums);
        
        return memo[idx][sum] = solve(idx-1, sum-nums[idx-1], nums) || solve(idx-1, sum, nums);
    }
};

class Solution{
public:
    vector<vector<int>> memo;
    int equalPartition(int N, int arr[])
    {
        int sum = accumulate(arr, arr+N, 0);
        if(sum%2 == 1) return 0;
        memo.assign(N+1, vector<int>(sum+1, -1));
        return solve(arr, sum/2, N);
    }
    
    bool solve(int arr[], int sum, int idx)
    {
        if(sum==0) return memo[idx][sum] = true;
        if(idx == 0) return memo[idx][sum] = false;
        
        if(memo[idx][sum] != -1)
            return memo[idx][sum];
        
        if(arr[idx-1] > sum) return memo[idx][sum] = solve(arr, sum, idx-1);
        
        return memo[idx][sum] = solve(arr, sum, idx-1) || solve(arr, sum - arr[idx-1], idx-1);
    }
};