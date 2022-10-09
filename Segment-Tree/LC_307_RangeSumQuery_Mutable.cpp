/*
https://leetcode.com/problems/range-sum-query-mutable/
307. Range Sum Query - Mutable
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
    void updateValueInTree(int lo, int hi, int tidx, int &newValue, int &numsIdx)
    {
        if(lo==hi) {
            segtree[tidx] = newValue;
            return;
        } 
        auto [left_tidx, right_tidx] = getChildIndex(tidx);
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
        auto [left_tidx, right_tidx] = getChildIndex(tidx); 
        int mid = lo + (hi-lo)/2;
        return findSumInRange(lo, mid, left_tidx, i, min(j, mid))+
             findSumInRange(mid+1, hi, right_tidx, max(mid+1, i), j);
        
//         if(hi < i or j < lo) // ..hi] [i..j] [lo.. , segment completely outside range
//             return 0;
//         if(i<=lo and hi<=j ) // [i .[lo..hi].  j], sement completely inside
//             return segtree[tidx];
//         auto [left_tidx, right_tidx] = getChildIndex(tidx);  
//         int mid = lo + (hi-lo)/2;
//         if(i > mid ) // [lo mid [i j] hi] // go right
//             return findSumInRange(mid+1, hi, right_tidx, i, j);
//         else if(j<= mid ) // [lo [i j] mid  hi] // go left
//             return findSumInRange(lo, mid, left_tidx, i,  j);
        
//         return findSumInRange(lo, mid, left_tidx, i, mid)+ findSumInRange(mid+1, hi, right_tidx, mid+1, j); 
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
    
    void update(int index, int val) {
        Seg->updateValueInTree(0, n-1, 0, val, index);
    }
    
    int sumRange(int left, int right) {
        return Seg->findSumInRange(0, n-1, 0, left, right);
    }
};

/* //TLE , Naive approach
class NumArray {
public:
    vector<int> nums;
    NumArray(vector<int>& nums) {
        this->nums = nums;
    }
    
    void update(int index, int val) {
        nums[index] = val;
    }
    
    int sumRange(int left, int right) {
        int sum=0;
        for(int i=left; i<=right; i++)
            sum+=nums[i];
        return sum;
    }
};
*/

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */