/*
https://leetcode.com/problems/count-of-range-sum/
*/

class Solution {
public:
    int n;
    int ans, lowLmt, UppLmt;
    int countRangeSum(vector<int>& nums, int lower, int upper) {
        n = nums.size();
        vector<long> sums(n+1, 0);
        for(int i=0; i<n; i++)
            sums[i+1] = sums[i] + nums[i];
        lowLmt = lower; UppLmt = upper;
        MergeSortIter(sums.begin(), sums.end());
        return ans;
    }
    
    typedef vector<long>::iterator vlt;
    void MergeSortIter(vlt begin, vlt end)
    {
        if(end-begin <= 1) // single element
            return;
        auto mid = begin + (end-begin)/2;
        MergeSortIter(begin, mid); // mid is like end() 
        MergeSortIter(mid, end);
        
        for(auto i=begin, j1=mid, j2=mid; i<mid; i++)
        {
            while(j1<end and  (*j1 - *i) < lowLmt)
                j1++;
            while(j2<end and  (*j2 - *i) <= UppLmt) 
                j2++;
            ans += (j2-j1);
        }
        inplace_merge(begin, mid, end);
    }
};