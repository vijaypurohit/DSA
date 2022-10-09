/*
https://leetcode.com/problems/sum-of-even-numbers-after-queries/
*/

class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size(), nq = queries.size();
        vector<int> ans(nq, 0);
        
        int sum=0;
        for(int i=0; i<n; i++) {
            if(nums[i] % 2 == 0)
                sum+=nums[i];
        }
        
        for(int i=0; i<nq; i++)
        {
            int val = queries[i][0], index = queries[i][1]; 
            nums[index] += val;
            int oldv = nums[index] % 2 ? 0 : nums[index];
            sum -= oldv; // subtract even value from sum;
            if(nums[index] % 2 == 0) 
              sum = sum  + nums[index]; 
            ans[i] = sum;
        }
        return ans;
    }//
};