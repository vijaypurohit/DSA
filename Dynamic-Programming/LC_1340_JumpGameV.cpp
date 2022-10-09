/*
1340. Jump Game V

https://leetcode.com/problems/jump-game-v/
*/

class Solution {
public:
    int n, d;
    vector<int> memo;
    int maxJumps(vector<int>& arr, int d) {
        n = arr.size();
        this->d = d;
        int ans=0;
        
        memo.resize(n, -1);
        for(int i=0; i<n; i++)
        {
            // int cnt = solve(i, arr);
            // cout<<i<<" "<<cnt<<endl;
            ans = max(ans, solve(i, arr));
            
        }
        
        return ans+1;
    }
    
    int solve(int i, vector<int>& arr)
    {
        if(memo[i]!=-1) return memo[i];
        int cnt=0;
        for(int j=i+1; j<n and j<=i+d; j++)
        {
            if(arr[j]<arr[i])
            {
                cnt = max(cnt, 1+solve(j, arr));
            }
            else
                break;
        }
        
        // cout<<i<<", right "<<cnt<<", ";
        for(int j=i-1; j>=0 and j>=i-d; j--)
        {
            if(arr[j]<arr[i])
            {
                cnt = max(cnt, 1+solve(j, arr));
            }
            else
                break;
        }
        // cout<<" left "<<cnt<<") ";
        return memo[i]=cnt;
    }
};