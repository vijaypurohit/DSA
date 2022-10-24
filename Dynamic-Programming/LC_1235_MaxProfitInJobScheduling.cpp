/*
https://leetcode.com/problems/maximum-profit-in-job-scheduling/
*/
class Solution {
    struct job{
        int start, end, profit;
        job(int s, int e, int p): start(s), end(e), profit(p){}
        bool const operator<(const job& other) const{
            return end  < other.end; // sort in ascending order;
        }
    };
    
    static bool compare(const job& a, const job& b){
        return a.start < b.start; // sort according to start time
    }
public:
    int n;
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        n = startTime.size();
        vector<job> jobs;
        for(int i=0; i<n; i++) 
            jobs.emplace_back(startTime[i], endTime[i], profit[i]); 
        
        
        // sort(jobs.begin(), jobs.end(), compare);  // sort by start time
        // vector<int> memo(n, -1);
        // return solve(0, jobs, memo);
        
        sort(jobs.begin(), jobs.end());  // sort by end time
        vector<int> dp(n, 0); // dp[i] max profit with i jobs
        dp[0] = jobs[0].profit; // if there is only one scheduling job
        for(int i=1; i<n; i++)
        {
            int pick = jobs[i].profit;
            int previ=-1;
            int l=0, r = i-1;
            while(l<=r){
                int mid = l + (r-l)/2; // mid[s  e] ... i[s  e]
                if(jobs[mid].end <= jobs[i].start){
                    previ = mid;
                    l=mid+1;
                }
                else
                    r = mid-1;
            }
            if(previ != -1)
                pick += dp[previ];
            
            dp[i] = max(dp[i-1], pick);
        }
        return dp[n-1];
    }
    
    int solve(int i, vector<job>& jobs, vector<int>& memo)
    {
        if(i>=n) return 0; // you checked all jobs
        if(memo[i] != -1) return memo[i]; // already solved
        
        int notpick = solve(i+1, jobs, memo); // if not pick then no profit go to next job
        int pick = jobs[i].profit; // if you are going to pick the collect profit
        int nexti = -1; // look for next job from where you can start 
        int l=i, r = n-1;
        while(l<=r){
            int mid = l + (r-l)/2; // i[s  e] .... mid[s  e]
            if(jobs[i].end <= jobs[mid].start){
                nexti = mid;
                r=mid-1;
            }
            else
                l = mid+1;
        }
        
        if(nexti != -1)
            pick += solve(nexti, jobs, memo);
        
        return memo[i] = max(pick, notpick);
    }
};