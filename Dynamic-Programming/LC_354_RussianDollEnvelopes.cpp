class Solution {
public:
    
class Solution {
public:
    
    /* ordering matters
        sort width in asc order (increasing order)
        if(width are same then sort them in desc order)
        reason: so that for same width, height will get replaced with smaller values and we more have possibility to envelop it
    */ 
    static bool mycmp(vector<int>& a, vector<int>& b)
    {
        if(a[0] == b[0]) return a[1]>b[1];
        return a[0]<b[0];
    }
    
    int using_1D(vector<vector<int>>& envelopes) { 
        vector<int> ans; // dp on height 
        
        for(auto x: envelopes)
        {
            int ind = lower_bound(ans.begin(), ans.end(), x[1]) - ans.begin();
            if(ind == ans.size())
                ans.push_back(x[1]);
            else
                ans[ind] = x[1];
        // for(int x: ans)cout<<x<<" "; cout<<endl;
        }
        return ans.size();
    }// end
    
    int n;
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        n = envelopes.size();
        sort(envelopes.begin(), envelopes.end(), mycmp);
         
        // memo.resize(n, vector<int>(n+1, -1));  //TLE
        // return solve(0, -1, envelopes);
        return using_1D(envelopes);
    }// end
    
    vector<vector<int>> memo;
    int solve(int i, int prev, vector<vector<int>>& envelopes)
    {
        if(i==n) return 0;
        
        if(memo[i][prev+1] != -1) return memo[i][prev+1];
        
        int pick = INT_MIN;
        if(prev==-1 || envelopes[prev][0] <envelopes[i][0] and envelopes[prev][1] <envelopes[i][1])
            pick = 1 + solve(i+1, i, envelopes);
        
        int notpick = solve(i+1, prev, envelopes);
        return memo[i][prev+1]=max(pick, notpick);
    }
};