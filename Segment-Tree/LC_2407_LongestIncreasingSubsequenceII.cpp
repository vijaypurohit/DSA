/*
https://leetcode.com/problems/longest-increasing-subsequence-ii/
*/

class SegmentTree{
    vector<int> segtree; // 0 based indexing
    int n; 
    
    pair<int,int> getChildIndex(int tidx){
        return {2*tidx+1, 2*tidx+2};
    }
    
public:
    
    SegmentTree(int size)
    {
        n = size; 
        segtree.resize(4*n, 0); 
    } 
    
    int maxval(){
        return segtree[0]; // root node contains info of all //***************
    }
    // nums left, nums right, tree array index, nums new val, nums index
    void updateValueInTree(int lo, int hi, int tidx, int &newValue, int &numsIdx)
    { 
        if(lo==hi) {
            segtree[tidx] = max(newValue, segtree[tidx]); //***************
            return;
        } 
        auto [left_tidx, right_tidx] = getChildIndex(tidx); // int left_tidx = 2*tidx+1, right_tidx = 2*tidx+2;
        int mid = lo + (hi-lo)/2;
        if(numsIdx <= mid)
            updateValueInTree(lo, mid, left_tidx, newValue, numsIdx);
        else
            updateValueInTree(mid+1, hi, right_tidx, newValue, numsIdx);
        segtree[tidx] = max(segtree[left_tidx],segtree[right_tidx]);
    }
    
    // nums left, right, tree array index, range[i..j]
    int findMaxInRange(int lo, int hi, int tidx, int i, int j)
    {
        if(i>j) return INT_MIN;
        if(lo==i and hi==j) {
            return segtree[tidx] ; 
        }
        auto [left_tidx, right_tidx] = getChildIndex(tidx); // int left_tidx = 2*tidx+1, right_tidx = 2*tidx+2;
        int mid = lo + (hi-lo)/2;
        return max( findMaxInRange(lo, mid, left_tidx, i, min(j, mid)),
                    findMaxInRange(mid+1, hi, right_tidx, max(mid+1, i), j) 
                  );
        
//         if(hi < i or j < lo) // ..hi] [i..j] [lo.. , segment completely outside range
//             return INT_MIN;
//         if(i<=lo and hi<=j ) // [i .[lo..hi].  j], sement completely inside
//             return segtree[tidx];
//         auto [left_tidx, right_tidx] = getChildIndex(tidx);  
//         int mid = lo + (hi-lo)/2;
//         if(i > mid ) // [lo mid [i j] hi] // go right
//             return findMaxInRange(mid+1, hi, right_tidx, i, j);
//         else if(j<= mid ) // [lo [i j] mid  hi] // go left
//             return findMaxInRange(lo, mid, left_tidx, i,  j);
        
//         return max( findMaxInRange(lo, mid, left_tidx, i, min(j, mid)),
//                     findMaxInRange(mid+1, hi, right_tidx, max(mid+1, i), j) 
//                   );
    
    }
     
     
};

class Solution {
public:
    int lengthOfLIS(vector<int>& nums, int k) {
        int mxele = *max_element(nums.begin(), nums.end());
        SegmentTree* sg = new SegmentTree(mxele+1); 
        int lo, max_val;
        int ans=1;
        for(int &x: nums) //element are actual index and length is the value
        {
            lo = max(0, x-k); // range [lo..x-1] [x
            max_val = 1+sg->findMaxInRange(0, mxele, 0, lo, x-1); 
            ans = max(ans, max_val);
            sg->updateValueInTree(0, mxele, 0, max_val, x);
        }
        return ans;
    }
};