/*
396. Rotate Function

https://leetcode.com/problems/rotate-function/
*/

class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n = nums.size();
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int state=0;
        for(int i=1; i<n; i++)
            state += i*nums[i];
        int ans=state;
        for(int i=n-1; i>=0; i--)
        {
            state += (sum - n*nums[i]);
            ans = max(ans, state);
        }
        return ans;
    }
};