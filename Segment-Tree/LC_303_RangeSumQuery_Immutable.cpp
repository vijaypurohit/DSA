/*
https://leetcode.com/problems/range-sum-query-immutable/
*/

class SegmentTree{
    vector<int> segtree; // 0 based indexing
    int n; 
    
    pair<int,int> getChildIndex(int tidx){
        return {2*tidx+1, 2*tidx+2};
    }
    
public:
    
    SegmentTree(vector<int> &nums)
    {
        n = nums.size(); 
        segtree.resize(4*n, 0);
        
        buildSegTree(0, n-1, 0, nums);
    }
    // nums left, nums right, tree index, nums array
    void buildSegTree(int lo, int hi, int tidx, vector<int>& nums)
    {
        if(lo==hi)  {
            segtree[tidx] = nums[lo];
            return;
        }
        auto [left_tidx, right_tidx] = getChildIndex(tidx); // int left_tidx = 2*tidx+1, right_tidx = 2*tidx+2;
        int mid = lo + (hi-lo)/2;
        buildSegTree(lo, mid, left_tidx, nums);
        buildSegTree(mid+1, hi, right_tidx, nums);
        // merge build results;
        segtree[tidx] = segtree[left_tidx] + segtree[right_tidx];
    }
    
    // nums left, nums right, tree array index, nums new val, nums index
    void updateValueInTree(int lo, int hi, int tidx, int newValue, int numsIdx)
    {
        if(lo>hi or tidx<lo or tidx>hi) return;
        if(lo==hi) {
            segtree[tidx] = newValue;
            return;
        } 
        auto [left_tidx, right_tidx] = getChildIndex(tidx); // int left_tidx = 2*tidx+1, right_tidx = 2*tidx+2;
        int mid = lo + (hi-lo)/2;
        if(numsIdx <= mid)
            updateValueInTree(lo, mid, left_tidx, newValue, numsIdx);
        else
            updateValueInTree(mid+1, hi, right_tidx, newValue, numsIdx);
        segtree[tidx] = segtree[left_tidx] + segtree[right_tidx];
    }
    
    // nums left, right, tree array index, range[i..j]
    int findSumInRange(int lo, int hi, int tidx, int i, int j)
    {
        if(i>j) return 0;
        if(lo==i and hi==j) {
            return segtree[tidx] ; 
        }
        auto [left_tidx, right_tidx] = getChildIndex(tidx); // int left_tidx = 2*tidx+1, right_tidx = 2*tidx+2;
        int mid = lo + (hi-lo)/2;
        return findSumInRange(lo, mid, left_tidx, i, min(j, mid))+
             findSumInRange(mid+1, hi, right_tidx, max(mid+1, i), j);
    }
     
};

class NumArray {
public:
    int n;
    SegmentTree* Seg;
    NumArray(vector<int>& nums) {
        n=nums.size();
        Seg = new SegmentTree(nums);
    }
    
    int sumRange(int left, int right) {
        return Seg->findSumInRange(0, n-1, 0, left, right);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */