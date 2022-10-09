/*
https://leetcode.com/problems/ugly-number-iii/
*/

/*
For every integer N, F(N) = (total number of positive integers <= N which are divisible by a or b or c.).
the intersection of two/three circles is the total number of positive integers <= N which are divisible by the least common multiple of them.
F(N) = a + b + c - a ∩ c - a ∩ b - b ∩ c + a ∩ b ∩ c
F(N) = N/a + N/b + N/c - N/lcm(a, c) - N/lcm(a, b) - N/lcm(b, c) + N/lcm(a, b, c)(lcm = least common multiple)
Find the least integer N that satisfies the condition F(N) >= K
*/
class Solution {
public:
    int nthUglyNumber(int n, int a, int b, int c) {
        int lo = 1, hi = min({a,b,c})*n, ans=0;
        long A = a, B = b, C = c;
        long AB = (A*B)/__gcd(A, B); //LCM(a, b) = (a x b) / GCD(a,b)
        long BC = (B*C)/__gcd(B,C);
        long AC = (A*C)/__gcd(A,C);
        long ABC = (A*BC)/__gcd(A, BC);
        
        while(lo<=hi)
        {
            int mid = lo + (hi-lo)/2;
            int cnt = mid/A + mid/B + mid/C - mid/AB - mid/BC - mid/AC + mid/ABC;
            if(cnt >= n) // find mid as small as possible that count == n
            {
                ans = mid;
                hi = mid-1;
            } 
            else
                lo = mid+1;
        }
        return ans;
    }
    
    
};