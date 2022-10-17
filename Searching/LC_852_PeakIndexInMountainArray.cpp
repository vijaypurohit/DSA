/*
https://leetcode.com/problems/peak-index-in-a-mountain-array/
*/
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        // int i=0;
        // while(arr[i] < arr[i+1])
        //     i++;
        // return i;
        
        int l=0, r=n-1;
        while(l<r)
        {
            int mid = (l+r)/2;
            if(arr[mid] < arr[mid+1])
                l = mid+1;
            else 
                r = mid;
        }
        return l;
    }
};