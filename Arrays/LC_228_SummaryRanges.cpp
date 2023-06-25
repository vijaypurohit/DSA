/*
https://leetcode.com/problems/summary-ranges/
*/

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n = nums.size();
        vector<string> ans; 
        int last_id = 0;
        for(int i = 0; i<n; i++){
            
            if(i<n-1 and nums[i] + 1 == nums[i+1])
                continue;
            
            if(last_id != i){
                ans.push_back(to_string(nums[last_id])+"->"+to_string(nums[i]));
            }else{
                ans.push_back(to_string(nums[i]));
            } 
            last_id = i+1;
        }
        
        return ans;
    }
};