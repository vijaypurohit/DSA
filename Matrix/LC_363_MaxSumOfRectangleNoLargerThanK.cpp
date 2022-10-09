/*
https://leetcode.com/problems/max-sum-of-rectangle-no-larger-than-k/
363. Max Sum of Rectangle No Larger Than K

*/

class Solution {
public:
    int m,n;
    int maxSumSubmatrix_1(vector<vector<int>>& matrix, int k) {
        m = matrix.size();
        n = matrix[0].size();
        vector<vector<int>> presum(m, vector<int>(n+1, 0));
        int ans = INT_MIN;
        
        for(int r=0; r<m; r++)
        {
            for(int c=0; c<n; c++)
            {
                presum[r][c+1] = presum[r][c]+matrix[r][c];
                if(matrix[r][c]<=k) 
                    ans = matrix[r][c];
            }
        }
        
        for(int c1=0; c1<=n; c1++)
        {
            for(int c2=c1+1; c2<=n; c2++)
            {
                int sum = 0;
                set<int> s;
                s.insert(0);
                for(int r=0; r<m; r++)
                {
                    sum+=presum[r][c2]-presum[r][c1];
                    auto it = s.lower_bound(sum-k);
                    if(it!=s.end())
                    {
                        int val = sum - (*it);
                        if(ans < val)
                            ans = val;
                        // if(k == val) // doing this for TLE handling
                        //     return val; 
                    }
                    s.insert(sum);
                }
            }
        }
            
        return ans;
    }//end
    
    int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {
        m = matrix.size();
        n = matrix[0].size();
        int ans = INT_MIN;
          
        for(int c1=0; c1<n; c1++)
        { 
            vector<int> presum(m, 0);
            for(int c2=c1; c2<n; c2++)
            {  
                int kadane=0, max_kadane=INT_MIN;
                for(int r=0; r<m; r++)
                {
                    presum[r] += matrix[r][c2];
                    kadane = max(presum[r], kadane+presum[r]);
                    max_kadane = max(max_kadane, kadane);
                }
                
                if(max_kadane<=k)
                {
                    ans = max(ans, max_kadane);
                    if(k == ans) // doing this for TLE handling
                            return ans; 
                    continue;
                } 
                // code of max sum of subarray whose sum is less than equal to x
                set<int> s = {0};
                int csum=0;
                for(int x: presum)
                {
                    csum += x;
                    auto it = s.lower_bound(csum-k);
                    if(it!=s.end())
                    {
                        int val = csum - (*it);
                        if(ans < val)
                            ans = val;
                        if(k == val) // doing this for TLE handling
                            return val; 
                    }
                    s.insert(csum);
                } 
            }
        }
            
        return ans;
    }//end
};