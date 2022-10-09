/*
https://leetcode.com/problems/jump-game-vii/
*/
class Solution {
public:
    int n;
    bool canReachBFS(string s, int minJump, int maxJump) { 
        queue<int> q; q.push(0);
        int farthest = 0;
        
        while(!q.empty())
        {
            int sz = q.size();
            while(sz--)
            {
                int i = q.front(); q.pop();
                if(i==n-1) return true;

                int left = max(i+minJump, farthest);
                int right = min(i+maxJump, n-1);

                for(int j=left; j<=right; j++)
                {
                    if(s[j] == '0')
                    {
                        q.push(j);
                    }
                }
                farthest = min(right+1, n-1); // to avoid TLE
            } 
        }
        return false; 
        
    }
    
    int minJump, maxJump;
    vector<int> memo;
    int solve(int i, string &s)
    {
        if(i==n-1)
            return memo[i]=true;
        if(i>=n) return false;
         
        if(memo[i]!=-1) return memo[i];
        
        bool flag = false;
        for(int j=i+minJump; j<=min(i+maxJump , n-1); j++)
        {
            if(s[j]=='0')
            {
                if(memo[j]==-1  and solve(j, s))
                {
                    flag = true;
                    break; 
                }
                else if(memo[j]){
                    flag = true;
                    break;
                }
            }
        }
        
        return memo[i] = flag;
    }
    
    bool canReach(string s, int minJump, int maxJump) {
        n = s.length();
        if(n==1) return true;
        if(s[n-1]=='1') return false;
        // return canReachBFS(s, minJump, maxJump);
         
        this->minJump = minJump;
        this->maxJump = maxJump;
        /*
        int count1=0;
        int max1=INT_MIN;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='1')
            {
                count1++;
                if(max1<=count1)
                {
                    max1 = count1;
                    if(max1>=maxJump) return false;
                } 
            }
            else
                count1=0;
        }
        // if(max1 != INT_MIN and max1>=maxJump)
        //         return false;
        
        memo.assign(n, -1);
        return solve(0, s);
        */
        
        vector<bool> dp(n, false);
        dp[0] = true;
        int cnt=0;
        for(int i=1; i<n; i++)
        {
            if(i-minJump>=0 and dp[i-minJump])
                cnt++;
            if(i-maxJump-1>=0 and dp[i-maxJump-1])
                 cnt--;
            if(cnt>0 and s[i] == '0')
                 dp[i]= true;
        }
        
        return dp[n-1];
    }
    
};