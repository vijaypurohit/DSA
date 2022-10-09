/*
https://leetcode.com/problems/smallest-subarrays-with-maximum-bitwise-or/
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
        segtree[tidx] = segtree[left_tidx] | segtree[right_tidx];
    }
    
    // nums left, right, tree array index, range[i..j]
    int findORSumInRange(int lo, int hi, int tidx, int i, int j)
    {
        if(i>j) return 0;
        if(lo==i and hi==j) {
            return segtree[tidx] ; 
        }
        auto [left_tidx, right_tidx] = getChildIndex(tidx); 
        int mid = lo + (hi-lo)/2;
        return findORSumInRange(lo, mid, left_tidx, i, min(j, mid)) |
             findORSumInRange(mid+1, hi, right_tidx, max(mid+1, i), j); 
    }
     
};

class Solution {
public:
    int n;
    SegmentTree* sg;
    vector<int> smallestSubarrays(vector<int>& nums) {
        n=nums.size();
        if(n==1) return {1};
        vector<int> ans(n);
        /* //SLIDING WINDOW
        sg = new SegmentTree(nums); 
        ans[n-1] = 1;
        int cur=0, start=n-2, end=n-1, maxOr=nums[n-1];
        while(start>=0)
        {
            maxOr |= nums[start];
            while (end > start) //till end reaches start, minimized window
            {
                int reduce = sg->findORSumInRange(0, n-1, 0, start, end-1);
                if(reduce == maxOr)
                    end--;
                else break;
            }
            // cout<<"("<<start<<","<<end<<") maxOr"<<maxOr<<" "<<nums[start]<<endl;
            ans[start] = end-start+1;
            --start;
        } 
        
        return ans;
        */
        int pos[30] = {0};
        for(int i = n-1; i>=0; i--)
        {
            int maxim = 0;
            for(int j=0; j<30; j++)
            {
                if(nums[i] & (1<<j))
                    pos[j]=i;
                maxim = max(maxim, pos[j]);
            }
            ans[i] = max(maxim-i+1, 1);
        }
        return ans;
    }
};