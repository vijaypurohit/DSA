/*
https://leetcode.com/problems/maximum-fruits-harvested-after-at-most-k-steps/
*/

class Solution {
    // const int MXPOS = 2e5 + 2; //2e5+1 for array size, +1 for prefix offset
public:
    int maxTotalFruits(vector<vector<int>>& fruits, int startPos, int k) {
        int n = fruits.size();
        
        startPos++; // 1-based indexing
        int MXPOS = max(fruits[n-1][0], startPos) + 2;
        
        vector<int> presum(MXPOS, 0);
        for(auto &fruit: fruits)
            presum[fruit[0]+1] = fruit[1];
        for(int i=1; i<MXPOS; i++)
            presum[i] += presum[i-1];
        
        int l, r, ans=0;
        for(r=startPos; r<MXPOS and r<=startPos+k; r++)
        {
            // right_dist_covered = r-startPos, left_dist_feasible = k-2*right_dist_covered
            // l = min(startPos, startPos - (k - 2*(r-startPos)));
            l = startPos - (k - 2*(r-startPos));
            l = max(1, l);
            ans = max(ans, presum[r] - presum[l-1]);
        }
        
        for(l=startPos; l>0 and l>=startPos-k; l--)
        {
            // right_dist_covered = r-startPos, left_dist_feasible = k-2*right_dist_covered
            // r = max(startPos, startPos + (k - 2*(startPos-l)));
            r = startPos + (k - 2*(startPos-l));
            r = min(MXPOS-1, r);
            ans = max(ans, presum[r] - presum[l-1]);
        }
        
        return ans;
    }//end
};