/*
2389. Longest Subsequence With Limited Sum 
https://leetcode.com/problems/longest-subsequence-with-limited-sum/
*/

class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int m = queries.size();
        // vector<int> ans(m, 0);
//         vector<int> prefix(n, 0);
//         prefix[0] = nums[0];
        
//         for(int i=1; i<n; i++)
//             prefix[i] = prefix[i-1]+nums[i]; 
        
//         for(int i=0; i<m; i++)
//         {
//             int len = upper_bound(prefix.begin(), prefix.end(), queries[i]) - prefix.begin();
//             ans[i] = len;
//         }
        
        
        partial_sum(begin(nums), end(nums), begin(nums));
        for(int i=0; i<m; i++) 
            queries[i] = upper_bound(begin(nums), end(nums), queries[i]) - nums.begin();; 
        
        return queries;
    }
};