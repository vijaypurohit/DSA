/*
https://leetcode.com/problems/maximum-number-of-events-that-can-be-attended/
*/
class Solution {
public:
    int n;
    int maxEvents(vector<vector<int>>& events) {
        n = events.size();
        sort(events.begin(), events.end()); 
        priority_queue<int, vector<int>, greater<>> pq;
        int i=0, ans=0;
        // for(int d=1; d<=100000; ++d)
        // {
        //     while(!pq.empty() and pq.top() < d)
        //         pq.pop();
        //     while(i<n and events[i][0] == d)
        //         pq.push(events[i++][1]);
        //     if(!pq.empty())
        //     {
        //         pq.pop();
        //         ans++;
        //     }
        // }
        
        int d=0;
        while(i<n or !pq.empty())
        {
            if(pq.empty()) // if pq is empty reset day to nearest upcoming event day
               d = events[i][0];
            while(i<n and events[i][0] <= d)
                pq.push(events[i++][1]); 
            pq.pop(); //attend one event
            ans++;  // inc ans
            d++; // go to next day
            while(!pq.empty() and pq.top() < d)
                pq.pop();
        }
        return ans;
    } 
};