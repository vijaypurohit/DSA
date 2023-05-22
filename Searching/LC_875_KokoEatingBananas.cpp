/*
https://leetcode.com/problems/koko-eating-bananas/
*/

class Solution {
public:
    int n, h;
    int minEatingSpeed(vector<int>& piles, int h) {
        n = piles.size();
        this->h = h;
        
        int low = 1, high = 1e9, mid=0; // binary search bw [1, max(piles)]
        while(low <= high)
        {
            mid = low + (high-low)/2;
            if(isFeasible(mid, piles)) // if mid(possible k) is feasible within h hours;
                high = mid-1; 
            else
                low = mid+1;
        }
        return high+1;
    }
    
    bool isFeasible(int &k, vector<int>& piles){
        int hrsReq=0;
        for(int &p: piles){
            // hrsReq += ((p-1)/k)+1;
            hrsReq += ceil(1.0*p/k);
            if(hrsReq > h) return false;
        }
        return hrsReq<=h;
    }
    
};