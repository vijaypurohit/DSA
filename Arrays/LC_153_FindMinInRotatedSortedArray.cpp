/*
https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
153. Find Minimum in Rotated Sorted Array

*/

class Solution {
public:
    int findMin(vector<int>& nums) {
        // priority_queue<int, vector<int>, greater<>> pq(nums.begin(), nums.end());
        // return pq.top();
        
        int n = nums.size();
        if(n==1) return nums[0];
        int l=0;
        int r=n-1; 
        while(l<r)
        {
            if(nums[l] < nums[r]) return nums[l]; // ascending order
            int mid = (r+l)/2; 
            if(nums[mid] > nums[r])
                l=mid+1;
            else
                r=mid;
        }
        return nums[l];
    }//end
};