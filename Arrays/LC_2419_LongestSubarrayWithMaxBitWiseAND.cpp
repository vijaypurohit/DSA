/*
https://leetcode.com/problems/longest-subarray-with-maximum-bitwise-and/submissions/
*/
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int largest = *max_element(nums.begin(), nums.end());
        int len=0, ans=1;  
        for(int i=0; i<n; i++)
        {
            if(nums[i] == largest) {
                len++;
                ans = max(ans, len);
            }
            else{
                len=0;
            }
        }
        return ans;
    }
};