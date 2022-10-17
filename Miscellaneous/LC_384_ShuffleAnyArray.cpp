/*
https://leetcode.com/problems/shuffle-an-array/
*/

class Solution {
    int n;
    vector<int> nums;
public:
    // Fisher Yates Algorithm for random shuffling,
    Solution(vector<int>& nums) {
        this->nums = nums;
        n = nums.size();
    }
    
    vector<int> reset() {
        return nums;
    }
    
    vector<int> shuffle() {
        vector<int> ans(nums);
        for(int i=n-1; i>=0; i--)
        {
            int pos = rand()%(i+1);
            swap(ans[i], ans[pos]);
        }
        return ans;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */