/*
2395. Find Subarrays With Equal Sum
https://leetcode.com/problems/find-subarrays-with-equal-sum/
*/

class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        int n = nums.size();
        if(n <= 2) return false;
        unordered_set<int> hash; 
        for(int i=1; i<n; i++)
        {
            int sum = nums[i-1]+nums[i];
            if(hash.find(sum) != hash.end())
                return true;
            hash.insert(sum);
        }
        return false;
    }//end
};