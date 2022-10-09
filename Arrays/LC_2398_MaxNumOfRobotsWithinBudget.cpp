/*
2398. Maximum Number of Robots Within Budget

https://leetcode.com/problems/maximum-number-of-robots-within-budget/
*/

class Solution {
public:
    int n;
    int maximumRobots(vector<int>& chargeTimes, vector<int>& runningCosts, long long budget) {
        n = chargeTimes.size();
        
        
        // return usingMultiSet(chargeTimes, runningCosts, budget);
         return usingDeque(chargeTimes, runningCosts, budget);
    } 
    
    int usingMultiSet(vector<int>& chargeTimes, vector<int>& runningCosts, long long budget)
    {
        int ans=0;
        int i=0, j=0;
        long long sum=0;
        multiset<int, greater<int>> s;
        for(j=0; j<n; j++)
        {
            sum += runningCosts[j];
            s.insert(chargeTimes[j]);
            int k = j-i+1;
            long long B = *begin(s) + k*sum;
            if(B > budget)
            {
                sum -= runningCosts[i];
                s.erase(s.find(chargeTimes[i++])); // remove only one occurrence
            }
        }
        return n-i;
    }
    
    int usingDeque(vector<int>& chargeTimes, vector<int>& runningCosts, long long budget)
    {
        int ans=0;
        int i=0, j=0;
        long long sum=0;
        deque<int> dq;
        for(j=0; j<n; j++)
        {
            sum += runningCosts[j];
            while(!dq.empty() and chargeTimes[dq.back()] <= chargeTimes[j])
                dq.pop_back();
            dq.push_back(j);
            int k = j-i+1;
            long long B = chargeTimes[dq.front()] + k*sum;
            if(B > budget)
            {
                sum -= runningCosts[i];
                if(dq.front() == i)
                    dq.pop_front();
                i++;
            }
        }
        return n-i;
    }
};