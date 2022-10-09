
/*
https://leetcode.com/problems/number-of-ways-to-reach-a-position-after-exactly-k-steps/
2400. Number of Ways to Reach a Position After Exactly k Steps

*/ 
/*
Two sufficient and necessary conditions from a to b with k steps:

abs(a - b) <= k
(a - b - k) % 2 == 0
Otherwice no ways, directly return 0.

Now two eqations
left + right = k
right - left = b - a

So we can have right = (b - a + k) / 2.
The combinations is to pick right steps from k steps to go right.
return result combination(k, right)

// another equation
left+right = k
left-right = abs(endPos-startPos)

left = (k+dist)/2;
right = k - left

Complexity
Time O(klogk)
Space O(1)
*/
class Solution {
    const int mod = 1e9+7;
public:
    int start, end;
    int mx, mn;
    vector<vector<int>> memo;
    
    int numberOfWays(int startPos, int endPos, int k) {
        if(abs(endPos-startPos) > k)  // if steps are less
            return 0;  
        //if(((endPost-startPos)%2==1 and k%2==0) or ((endPost-startPos)%2==0 and k%2==1))  // if dist is odd, k even or k odd dist even
       if((startPos - endPos - k)%2 != 0) 
            return 0; 
        
        // // Approach 1
        // start = startPos+1000;
        // end = endPos+1000;
        // mx = max(start,  end) + k;
        // mn = min(start, end) - k;
        // memo.resize(mx+2, vector<int>(k+1, -1));
        // return solve(start, k);
        
        //Approach 2 
        int right = (endPos-startPos+k)/2;
        return combination(k, right);//choose right steps out of k steps
    }//
    
    long long combination(int n, int r)
    {
        long long res = 1L;
        for(int i=0; i<r; i++)
        {
            res = res*(n-i)%mod;
            res = res*INV(i+1) %mod;
            // res = res/(i+1) %mod; //overflow
        }
        return res;
    }
    
    long INV(long num)
    {
        if(num==1) return 1;
        return (mod - mod/num)*INV(mod%num)%mod;
    }
      
    int solve(int step,  int k)
    {
        if(k==0)
        {
             return memo[step][k]=(step == end);
        }
        
        if(abs(step-end) > k) return memo[step][k]=0;
        if(memo[step][k]!=-1) return memo[step][k];
        
        int cnt=0;
        if(step>mn)
            cnt += solve(step-1, k-1);
        if(step<mx)
             cnt += solve(step+1, k-1);
            
        return memo[step][k]=cnt % mod;
    }
};