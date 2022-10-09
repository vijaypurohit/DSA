/*
https://leetcode.com/problems/number-of-good-pairs/
1512. Number of Good Pairs

*/

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size(), ans=0;
        unordered_map<int,int> freq;
        for(int x: nums)
        {
            ans += freq[x];
            freq[x]++;
        }
        return ans;
    }
};