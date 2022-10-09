/*
https://leetcode.com/problems/maximum-performance-of-a-team/
*/

class Solution {
    const int mod = 1e9+7;
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        vector<pair<int,int>> eng(n);
        for(int i=0; i<n; i++)
            eng[i]={efficiency[i], speed[i]};
        sort(begin(eng), end(eng), greater<>());
        
        // for(auto &[e, s]: eng)
        //     cout<<"["<<e<<","<<s<<"] ";cout<<endl;
        
        long ans=0;
        long sumSpeed=0;
        priority_queue<int, vector<int>, greater<>> pq; //minHeap;
        
        for(auto &[e, s]: eng)
        {
            pq.emplace(s);
            sumSpeed += s;
            if(pq.size()>k){
                 sumSpeed -= pq.top(); pq.pop();
            }
            // cout<<"["<<e<<","<<s<<"] speed="<<sumSpeed<<" perf="<<sumSpeed*e<<endl;
            ans = max(ans, sumSpeed*e);
        }
        
        return ans % mod;
    }//
};