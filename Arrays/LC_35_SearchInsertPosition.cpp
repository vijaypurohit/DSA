/*
35. Search Insert Position

https://leetcode.com/problems/search-insert-position/
*/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // return lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        int n = nums.size();
        int l=0; int r= n-1;
        int mid;
        while(l<=r)
        {
            mid = l+(r-l)/2;
            if(nums[mid]<target)
            {
                l = mid+1;
            }
            else
                r = mid-1;
        }
        return l;
    }
};