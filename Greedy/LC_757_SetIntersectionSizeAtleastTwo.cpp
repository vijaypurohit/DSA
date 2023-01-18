/*
https://leetcode.com/problems/set-intersection-size-at-least-two/
*/

class Solution {
public:
    int intersectionSizeTwo(vector<vector<int>>& intervals) {
        int n = intervals.size(); 
        
        sort(begin(intervals), end(intervals), [&](vector<int>& a, vector<int>& b){
            if(a[1] == b[1])
                return a[0]>b[0];
            return a[1] < b[1];
        });
        
//         vector<int> ans;
        
//         ans.push_back(intervals[0][1] - 1);
//         ans.push_back(intervals[0][1]);
        
//         for(int i=1; i<n; i++)
//         {
//             int start = intervals[i][0], end =  intervals[i][1];
//             if(start > ans.back()){
//                 ans.push_back(end - 1);
//                 ans.push_back(end);
//             }
//             else if(start == ans.back()){
//                 ans.push_back(end);
//             }
//             else if(start > ans[ans.size()-2]){
//                 ans.push_back(end);
//             }
//         }
        
//         return ans.size();
        // known two rightmost point in the set
        int l = intervals[0][1]-1, r = intervals[0][1];
        int ans = 2, start, end;
        for(int i=1; i<n; i++)
        {
            start = intervals[i][0]; end =  intervals[i][1];
            if(l < start and start <= r) // [l   start/r]   end]
            {
                ans++; // one end point is inside
                l = r;
                r = end;
            }
            else if(start > r) //[l   r] [start  end]
            {
                ans += 2;
                l = end-1;
                r = end;
            }
        }
        return ans;
    }
};