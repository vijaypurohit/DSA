/*
https://www.lintcode.com/problem/920/description
https://leetcode.com/problems/meeting-rooms/
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
     * @return: if a person could attend all meetings
     */
    bool canAttendMeetings(vector<Interval> &intervals) {
        sort(intervals.begin(), intervals.end(), [&](Interval &I1, Interval &I2){return I1.start < I2.start;});
        int n = intervals.size();
        for(int i=1; i<n; i++)
        {
            if(intervals[i-1].end > intervals[i].start )
                return false;
        }
        return true;
    }
};