/*
https://www.lintcode.com/problem/919/description
https://leetcode.com/problems/meeting-rooms-ii/
*/

/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    /**
     * @param intervals: an array of meeting time intervals
     * @return: the minimum number of conference rooms required
     */
     int n;
    int minMeetingRooms(vector<Interval> &intervals) {
        n = intervals.size();
        // return diffStartEndVector(intervals);
        // return usingPQ(intervals);
        return usingLineSweep(intervals);
    }
    
    int usingLineSweep(vector<Interval> &intervals)
    {
        map<int,int> hash;
        for(const auto &i: intervals)
        {
            hash[i.start]++;
            hash[i.end]--;
        }
        int used=0, ans=0;
        for(const auto& m: hash)
            ans = max(ans, used+=m.second);
        return ans; 
    }
    int usingPQ(vector<Interval> &intervals)
    {
        sort(intervals.begin(), intervals.end(), [&](const Interval& a, const Interval& b){
            return a.start<b.start;
        });
        priority_queue<int, vector<int>, greater<int>> pq;
        pq.push(intervals[0].end);
        for(int i=1; i<n; i++)
        {
            if(intervals[i].start >= pq.top())
                pq.pop();
            pq.push(intervals[i].end);
        }
        return pq.size();
    }

    // approach -> ordering, two pointers, line sweep
    int diffStartEndVector(vector<Interval> &intervals)
    {
        vector<int> start(n), end(n);
        for(int i=0; i<n; i++)
        {
            start[i] = intervals[i].start;
            end[i] = intervals[i].end;
        }
        //sorting
        sort(start.begin(), start.end());
        sort(end.begin(), end.end());
        int ans=0; // used rooms;
        int i=0, j=0;
        while(i<n)
        {   // if meeting end, doesn't matter which one
            if(start[i] >= end[j])
            {
                ans -=1;
                j++;
            }
            ans +=1; // inc used rooms, as it is starting of new meeting
            i++;

        }
        return ans;
    }
};