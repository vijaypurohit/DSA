/*
https://leetcode.com/problems/set-mismatch/
*/
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        int dup = -1, missing = -1;
        
        for(int x: nums){
            int idx = abs(x)-1;
            if(nums[idx] < 0)
                dup = abs(x);
            else
                nums[idx] *= -1;
        }
        
        for(int i=1; i<n; i++)
            if(nums[i]>0)
                missing = i+1;
        
        return {dup, missing};
    }
};