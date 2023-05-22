/*
https://leetcode.com/problems/find-the-difference-of-two-arrays/
*/
class Solution {
public:
    
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
       
        return {arrDiff(nums1, nums2), arrDiff(nums2, nums1)};
    }
    
    vector<int> arrDiff(const vector<int>& nums1, const vector<int>& nums2){
        
        vector<int> ans;
        unordered_set<int> set2(nums2.begin(), nums2.end());
        unordered_set<int> set1;
        
        for(const int& x: nums1){
            if(set2.count(x) == 0 and set1.count(x) == 0){
                ans.push_back(x);
                set1.insert(x);
            }
        }
        
        return ans;
    }
    
};