/*
https://leetcode.com/problems/longest-nice-subarray/
*/
class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int n = nums.size();
        int ans=0;
        int l=0, r=0, mask=0;
        while(r<n)
        {
            while((mask & nums[r]) != 0) //remove number from left side if right side number cannot be added
                mask ^= nums[l++]; //unset bits with nums[l]
            mask |= nums[r]; // add this number to subarray;
            ans = max(ans, r-l+1);
            r++;
        }
        return ans;
    }
};