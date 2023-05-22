/*
https://leetcode.com/problems/number-of-subsequences-that-satisfy-the-given-sum-condition/
*/

class Solution {
public:
    vector<int> power;
    const int mod = 1e9+7;
    int n;
    int numSubseq(vector<int>& nums, int target) {
        n = nums.size();
        sort(nums.begin(), nums.end());
        
        power.resize(n, 1);
        for(int i=1; i<n; i++)
            power[i] = (power[i-1]*2)%mod;
        
        int ans = 0; int left = 0, right = n-1;
        while(left <= right){
            if(nums[left] + nums[right] > target){
                right--;
            }else {
                ans = (ans + power[right - left])%mod;
                left++;
            }
        }
         
        
        return ans;
    }
};