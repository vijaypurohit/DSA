/*
https://leetcode.com/problems/divide-intervals-into-minimum-number-of-groups/
*/

class Solution {
public:
    int n;
    int minGroups(vector<vector<int>>& intervals) {
        n=intervals.size();
        if(n <=1 )return n;
        
        sort(intervals.begin(), intervals.end());
        // return usingMultiSet(intervals); 
        // return usingPQ(intervals); 
        return usingLineSweep(intervals);
    }
    int usingLineSweep(vector<vector<int>>& intervals)
    {
        map<int,int> hash;
        for(const auto& i: intervals)
        {
            hash[i[0]]++;
            hash[i[1]+1]--;
        }
        int ans=0, cur=0;
        for(const auto& h: hash)
            ans = max(ans, cur+=h.second);
        return ans;
    }
/*
we are using minHeap to track rightmost number of each group.
For each interval we check if the leftmost number is greater than top of minHeap. that is starting of this interval is greater than ending time of some other interval then we can merge them.
by removing the endtime from PQ and adding the ending time of current interval.
if we can't merge the current interval with smallest endtime then we are not able to merge with anyother also.
*/
    int usingPQ(vector<vector<int>>& intervals)
    {
        priority_queue<int, vector<int>, greater<int>> pq;
        for(const auto& i: intervals)
        {
            if(!pq.empty() and i[0] > pq.top())
                pq.pop();
            pq.push(i[1]);
        }
        return pq.size();
    }
    
    int usingMultiSet(vector<vector<int>>& intervals)
    {
        multiset<int> s; 
        for(auto x: intervals)
        {
            int l=x[0], r=x[1];
            if(s.empty() || l <= *s.begin()) //intersect
            {
                s.insert(r);
                continue;
            }
            auto it = --s.lower_bound(l);
            s.erase(it);
            s.insert(r);
        } 
        return s.size();
    }
};
