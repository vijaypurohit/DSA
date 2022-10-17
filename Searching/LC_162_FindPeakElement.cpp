/*
https://leetcode.com/problems/find-peak-element/
*/
class Solution {
public:
    int n;
    int findPeakElement(vector<int>& nums) {
        n = nums.size(); 
        if(n==1) return 0;
        /* // Linear Scan
        for(int i=0; i<n-1; i++)
        {
            if(nums[i] > nums[i+1])
                return i;
        }
        return n-1;
        */
        
        //Binary Search a[m-1].<.a[m].>.a[m+1]
        // a[m] < a[m+1] go right
        // a[m-1] > a[m] go left 
        // else return m;
        
        int l=0, r=n-1;
        // if(nums[0] > nums[1]) return 0;
        // if(nums[n-2] < nums[n-1]) return n-1;
        // while(l<=r)
        // {
        //     int mid = (l+r)/2; 
        //     if(nums[mid] < nums[mid+1])
        //         l=mid+1;
        //     else if(nums[mid-1] > nums[mid])
        //         r = mid-1;
        //     else //if(nums[mid-1] < nums[mid] > nums[mid+1])
        //         return mid;
        // }
        // return -1;
        while(l<r)
        {
            int mid = (l+r)/2; 
            if(nums[mid] < nums[mid+1])
                l=mid+1; // definitely ans would be from mid+1 to n
            else  // possibility of ans being from 1 to mid
                r = mid; 
        }
        return l;
    }
};