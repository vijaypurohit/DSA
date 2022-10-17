/*
https://leetcode.com/problems/count-of-smaller-numbers-after-self/
https://practice.geeksforgeeks.org/problems/count-smaller-elements2214/1
*/

class Solution {
public:
    int n;
    vector<int> ans;
    vector<int> countSmaller(vector<int>& nums) {
        n = nums.size();
        ans.resize(n, 0);
        vector<pair<int,int>> newNums; // {numval, idx}
        for(int i=0; i<n; i++)
            newNums.push_back({nums[i], i}); // index is used to store resul of nums_i in ans array
        // MergeSort(0, n-1, newNums);
        MergeSortIter(newNums.begin(), newNums.end());
        return ans;
    }
    
    typedef vector<pair<int,int>>::iterator piit;
    void MergeSortIter(piit begin, piit end)
    {
        if(end-begin <= 1) // single element
            return;
        auto mid = begin + (end-begin)/2;
        MergeSortIter(begin, mid); // mid is like end() 
        MergeSortIter(mid, end);
        
        for(auto i=begin, j=mid; i<mid; i++)
        {
            while(j<end and i->first > j->first)
                j++;
            ans[i->second] += j-mid;
        }
        
        inplace_merge(begin, mid, end);
    }
     
    
    void MergeSort(int start, int end, vector<pair<int,int>>& nums)
    {
        if(start>=end)
            return;
        int mid = start + (end-start)/2;
        
        MergeSort(start, mid, nums);
        MergeSort(mid+1, end, nums);
        
        Merge(start, mid, end, nums);
        return;
    }
    
    void Merge(int l, int m, int r, vector<pair<int,int>>& nums)
    {   //[l..m][m+1..r]
        int i=l, j=m+1, cRsmallerL=0; // it will track the cnt of elements greater than element in left array,
        while(i<=m and j<=r)
        {
            if(nums[i].first <= nums[j].first)
            {
                ans[nums[i].second] += cRsmallerL; // it is like j-mid+1
                i++;
            }
            else if(nums[i].first > nums[j].first) 
            {
                cRsmallerL++;
                j++;
            }
        }
        while(i<=m)
        {
            ans[nums[i].second] += cRsmallerL;
            i++;
        }
        // start of first array, end of first array /start of sec array, end of sec array
        inplace_merge(begin(nums)+l, begin(nums)+m+1, begin(nums)+r+1);
    }
    
};