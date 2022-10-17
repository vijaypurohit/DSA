/*
https://leetcode.com/problems/number-of-pairs-satisfying-inequality/
*/
class Solution {
public:
    int n, diff;
    vector<int> nums;
    typedef long long ll;
    long long numberOfPairs(vector<int>& nums1, vector<int>& nums2, int diff) {
        n = nums1.size(); this->diff = diff;
        nums.resize(n);
        for(int i=0; i<n; i++)
            nums[i] = nums1[i]-nums2[i];
        
        return mergeSort(0, n-1);
    }
    
    ll mergeSort(int l, int r)
    {
        if(l==r) return 0;
        int mid = l+(r-l)/2;
        ll cnt1 = mergeSort(l, mid);
        ll cnt2 = mergeSort(mid+1, r);
        return cnt1+cnt2+mergeCount(l,mid,r);
    }
    
    ll mergeCount(int& start, int& mid, int& end)
    {
        int i=start, j=mid+1; ll cnt=0;
        while(i<=mid and j<=end)
        {   // if it is true then it will be true for all index j to end
            if(nums[i] <= nums[j] + diff)
            {
                cnt += (end-j+1);
                i++;
            }
            else //otherwise inc j in order to find diff
                j++;
        }
        sort(nums.begin()+start, nums.begin()+end+1);
        return cnt;
    }
};