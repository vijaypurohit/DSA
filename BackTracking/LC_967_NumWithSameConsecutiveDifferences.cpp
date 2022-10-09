/*
https://leetcode.com/problems/numbers-with-same-consecutive-differences/
*/

class Solution {
public:
    vector<int> ans;
    
    vector<int> numsSameConsecDiff(int n, int k) {
        
        for(int d=1; d<=9; d++)
        {
            solve(1, d, d, n, k);    
        }
        return ans;
    }//end numsSameConsecDiff
    
    void solve(int len, int d, int num, int &n, int &k)
    {
        if(len==n)
        {
            ans.push_back(num);
            return;
        }
        
        if(d+k <= 9)
        {
            solve(len+1, d+k, num*10+d+k, n, k);
        }
        
        if(k!=0 and d-k >= 0)
        {
            solve(len+1, d-k, num*10+d-k, n, k);
        }
        
    }//solve
    
};