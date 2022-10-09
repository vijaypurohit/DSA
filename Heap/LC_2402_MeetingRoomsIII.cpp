/*
2402. Meeting Rooms III
https://leetcode.com/problems/meeting-rooms-iii/
*/

class Solution {
public:
    // static bool compare(vector<int>& a, vector<int>& b)
    // {
    //     return a[0]<b[0];
    // }
    
    typedef long long ll;
    typedef pair<ll, int> pli;
    
    int mostBooked(int n, vector<vector<int>>& meetings) { 
        //sort the meetings based on start time
        sort(meetings.begin(), meetings.end());
        
        // freq map to store number of times room is used for meetings
        vector<int> freq(n, 0);
        
        // min heap for engaged rooms {cur meeting end time, room num}
        priority_queue<pli, vector<pli>, greater<>> engaged ;
        
        // min heap for non-engaged rooms
        priority_queue<int, vector<int>, greater<>> unused;
        // currently all the rooms are empty
        for(int i=0; i<n; i++)
            unused.push(i);
        
        //for each meeting
        for(auto &meet : meetings)
        {
            int start_mt = meet[0], end_mt = meet[1];
            // move the meetings room in engaged with end_time<=end_mt to unused
            while(!engaged.empty() and engaged.top().first<= start_mt){
                int room = engaged.top().second;
                engaged.pop();
                unused.push(room);
            }
            
            // if there are multiple rooms choose one with lower room num
            if(unused.size()>0)
            {
                int room = unused.top(); unused.pop();
                freq[room]++;
                engaged.push({end_mt, room});
            }
            else // if there are no empty rooms, wait for the engaged room with nearest ending time to empty
            {
                auto nearest = engaged.top(); engaged.pop();
                int room = nearest.second;
                //since duration has to be same, the new end will 
                ll newEnd = nearest.first + (end_mt - start_mt); 
                freq[room]++;
                engaged.push({newEnd, room});
            }
            
        }//for each meetings
        
        int ans=0;
        for(int i=0; i<n; i++) {
            if(freq[i] > freq[ans])
                ans = i;
            // cout<<i<<" f="<<freq[i]<<"] ";
        }
        return ans;
    }//end mostBooked
};