/*
https://leetcode.com/problems/maximum-subarray/
53. Maximum Subarray
https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1/

https://binarysearch.com/problems/Largest-Sublist-Sum

Ref:
https://leetcode.com/problems/maximum-subarray/discuss/1595195/C%2B%2BPython-7-Simple-Solutions-w-Explanation-or-Brute-Force-%2B-DP-%2B-Kadane-%2B-Divide-and-Conquer
*/
class Solution {
public:
    int maxSubArray1(vector<int>& nums) {
       
       if(nums.size() == 1) return nums[0];
        
       int curr_max = nums[0];
       int max_sum = nums[0];
       
       for(int i=1; i<nums.size(); i++)
       {
           if(curr_max + nums[i] > nums[i])
               curr_max =  curr_max + nums[i]; // if inculding current nums_i it is greater than include
           else
               curr_max = nums[i]; // reset value of curr_max if not greater than current nums_i
           
           if(max_sum < curr_max)
               max_sum = curr_max;
       }
        
        return max_sum;
        
    }//end
    
    
     int maxSubArray(vector<int>& nums) {
       int n = nums.size();
       if(n == 1) return nums[0];
         
        pre = suf = nums;
       //   for(int i=1; i<n; i++) pre[i] +=max(0, pre[i-1]);
       //   for(int i=n-2; i>=0; i--) suf[i] += max(0, suf[i+1]);
       // return DandC(0, n-1, nums);  
        
       int curMax = 0, maxTillNow  = INT_MIN;
       
       for(int &x: nums)
       {
           curMax =  max(x, curMax + x); // if inculding current nums_i it is greater than include
           if(maxTillNow < curMax) maxTillNow = curMax; 
       } 
        return maxTillNow; 
    }//end
    
    vector<int> pre, suf;
     int DandC(int l, int r, vector<int>& nums) {
//        if(l>r) return INT_MIN;
//         int mid = (l+r)/2;
//          int leftSum =0;
//          int rightSum = 0;
         
//          // leftSum = max subarray sum in [l, mid-1] and starting from mid-1
//          for(int i=mid-1, curSum=0; i>=l; i--)
//          {
//              curSum += nums[i];
//              leftSum = max(leftSum, curSum);
//          }
         
//          // rightSum = max subarray sum in [mid+1, r] and starting from mid+1
//          for(int i=mid+1, curSum=0; i<=r; i++)
//          {
//              curSum += nums[i];
//              rightSum = max(rightSum, curSum);
//          }
         
//          return max({DandC(l, mid-1, nums), DandC(mid+1, r, nums), leftSum + nums[mid]+rightSum});
         
         if(l==r) return nums[l];
         int mid = (l+r)/2;
         return max({DandC(l, mid, nums), DandC(mid+1, r, nums), pre[mid] + suf[mid+1]});
    }//end
    
    /* //Using DP-Memoization
    int n;
   vector<vector<int>> memo ; 
    int maxSubArray(vector<int>& nums) { 
        n = nums.size();
       if(n == 1) return nums[0];
//Memoization
        // memo.resize(2, vector<int>(n, -1));
        // return solve(0, false, nums);
//Tabulation
//         vector<vector<int>> dp(2, vector<int>(n));
//         dp[0][0] = nums[0]; //dp[0][i] max subarray sum ending at i (may or may not inclue nums[i])
//         dp[1][0] = nums[0]; //dp[1][i] max subarray sum upto i (including nums[i])
//         for(int i=1; i<n; i++)
//         {
//             dp[1][i]= max(nums[i], nums[i]+dp[1][i-1]);
//             dp[0][i]= max(dp[0][i-1], dp[1][i]);
// //             At each index, we update dp[1][i] as max between either only choosing current element -> nums[i] or extending from previous subarray and choosing current element as well -> dp[1][i-1] + nums[i]
// // Similarly, dp[0][i] can be updated as max between maximum sum subarray found till last index - dp[0][i-1] or max subarray sum found ending at current index dp[1][i].
//         }
        
//         return dp[0][n-1];
//1-d DP
        vector<int> dp(n);
        dp[0] = nums[0]; //maximum subarray sum ending at i
        for(int i = 1; i < size(nums); i++) 
            dp[i] = max(nums[i], nums[i] + dp[i-1]);        
        return *max_element(begin(dp), end(dp));
    }//end
    
    int solve(int i, bool mustPick, vector<int>& nums)
    {
        if(i>=n) return mustPick ? 0 : -1e5; // if we have to inclue then return 0 else min ele so that we can ignore it
        if(memo[mustPick][i] != -1) return memo[mustPick][i];
        if(mustPick)
            return memo[mustPick][i] = max(0, nums[i] + solve(i+1, true, nums));
        return memo[mustPick][i] = max(solve(i+1, false, nums), nums[i] + solve(i+1, true, nums));
    }
    */
};