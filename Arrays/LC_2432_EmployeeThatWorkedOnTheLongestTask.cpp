/*
https://leetcode.com/problems/the-employee-that-worked-on-the-longest-task/
*/

class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) { 
        int m = logs.size();
        int stime=0, maxDuration=0, ans=n+1; 
        
        for(auto& log: logs)
        {
            int duration = log[1] - stime; 
            if(duration > maxDuration)
            {
                maxDuration = duration;
                ans = log[0];
            }
            else if(duration == maxDuration and ans > log[0])
            { 
               ans = log[0];
            }
            stime = log[1];
        }
        
        return ans;
    }
};