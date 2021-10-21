/*https://leetcode.com/problems/count-number-of-homogenous-substrings/*/

class Solution {
    public int countHomogenous(String s) {
        long consecutiveCount = 0, result = 0, mod = 1000000007;
        for (int i = 0; i < s.length(); ++i)
        {
            if (i == 0)
                ++consecutiveCount;
            else if (s.charAt(i-1) == s.charAt(i))
                ++consecutiveCount;
            else
            {
                result += ((consecutiveCount*(consecutiveCount+1))/2)%mod;
                result %= mod;
                consecutiveCount = 1;
            }
        }
        result += ((consecutiveCount*(consecutiveCount+1))/2)%mod;
        result %= mod;
        return (int)(result%mod);
    }
}