/*
https://leetcode.com/problems/count-primes/
*/

class Solution {
public:
    int countPrimes(int n) {
        if(n<=2) return 0;
        
        vector<bool> seen(n, false);
        int cnt=0;
        
        for(int i=2; i<n; i++)
        {
            if(seen[i] == true)
                continue;
            cnt++;
            for(long k=(long)i*i; k<n; k=k+i)
                seen[k] = true;
        }
        
        return cnt;
    }
};