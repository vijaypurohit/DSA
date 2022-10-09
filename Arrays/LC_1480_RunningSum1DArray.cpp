/*
https://leetcode.com/problems/running-sum-of-1d-array/
*/
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        partial_sum(begin(nums), end(nums), nums.begin());
        return nums;
    }
};