/*
https://leetcode.com/problems/maximum-number-of-events-that-can-be-attended-ii/
*/

class Solution {
public:
    int n;
    vector<vector<int>> memo;
    int maxValue(vector<vector<int>>& events, int k) {
        n = events.size();
        sort(events.begin(), events.end());
        memo.resize(n+1, vector<int>(k+1, -1));
        return solve(0, k, events);
    }
    
    int solve(int i, int k, vector<vector<int>>& events)
    {
        if(i>=n || k==0) return 0;
        if(memo[i][k] != -1) return memo[i][k];
        int nexti=-1;
        int l=i+1, r=n-1;
        while(l<=r)
        {
            int mid = l + (r-l)/2; // end time of cur < st time of next
            if(events[i][1] < events[mid][0]){
                nexti =mid;
                r = mid-1;
            }
            else
                l = mid+1;
        }
        
        int notpick = solve(i+1, k, events);
        int pick = events[i][2];
        if(nexti != -1)
            pick += solve(nexti, k-1, events);
        
        return memo[i][k] = max(notpick, pick);
    }
};