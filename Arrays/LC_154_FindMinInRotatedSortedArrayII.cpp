/*
https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/
154. Find Minimum in Rotated Sorted Array II

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
        /*
        if(nums[l] < nums[r]) return nums[l]; // ascending order
        while(l<r)
        {
            int mid = (r+l)/2; 
            if(nums[mid] < nums[r])
                r=mid; // nums[mid] may still be minimum
            else if(nums[mid] > nums[r])
                l = mid+1; // remove nums[mid] from search
            else
                r=r-1;
            cout<<"l="<<l<<", mid="<<mid<<", r="<<r<<endl;
        }
        return nums[l];
        */
        
        int ans=nums[l];
        if(nums[l]<nums[r]) return ans; // ascending order
        while(l<=r)
        {
            int mid = (l+r)/2;
            ans = min(ans, nums[mid]);
            if(nums[mid] > nums[r]) // right not sorted, but left is
                l = mid+1;
            else if(nums[mid] < nums[r]) // right sorted, but left not
                r = mid-1;
            else // if(nums[mid] ==nums[r])
            {
                r = r-1; // we can't decide which side to move in
            }
            cout<<"l="<<l<<", mid="<<mid<<", r="<<r<<endl;
        }
        return ans;
    }
};

// [10,1,10,10,10]
// [10,10,10,1,10]