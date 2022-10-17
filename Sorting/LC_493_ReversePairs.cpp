/*
https://leetcode.com/problems/reverse-pairs/


https://leetcode.com/problems/reverse-pairs/discuss/97268/General-principles-behind-problems-similar-to-%22Reverse-Pairs%22
*/
class Solution {
public:
    int n;
    int ans;
    int reversePairs(vector<int>& nums) {
        n = nums.size();
        MergeSortIter(nums.begin(), nums.end());
        return ans;
    }
    
    typedef vector<int>::iterator vit;
    void MergeSortIter(vit begin, vit end)
    {
        if(end-begin <= 1) // single element
            return;
        auto mid = begin + (end-begin)/2;
        MergeSortIter(begin, mid); // mid is like end() 
        MergeSortIter(mid, end);
        
        for(auto i=begin, j=mid; i<mid; i++)
        {
            while(j<end and *i > 2L*(*j)) // long long
                j++;
            ans += j-mid;
        }
        inplace_merge(begin, mid, end);
    }
};