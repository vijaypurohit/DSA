/*
https://leetcode.com/problems/tallest-billboard/
*/
/*
shorter ..... taller
dp[diff] = taller, where diff taller - shorter rods
base case dp[0] = taller = shorter, also answer since we need same height of shorter and taller

Assume we have an init state like this
------- y ------|----- d -----| (taller = y+d = dp[diff] value)
------- y ------|               (shorter = y = taller - diff)

case 1
If put x to tall side
------- y ------|----- d -----|----- x -----|
------- y ------|
We update dpNew[d + x] = max(taller + x, dpNew[d+x])

case 2.1
Put x to low side and d >= x:
-------y------|----- d -----|
-------y------|--- x ---|

We update dpNew[d-x] = max(dpNew[d - x], shorter + x)

case 2.2
Put x to low side and d < x:
------- y ------|----- d -----|
------- y ------|------- x -------|
We update dpNew[x - d] = max(dpNew[x - d], shorter + d) // shorter + d = taller

case 2.1 and case2.2 can merge into dp[abs(x - d)] = max(dp[abs(x - d)], shorter + min(d, x))

Time Complexity
O(NM), where we have
N = rod.length <= 20
S = sum(rods) <= 5000
M = all possible sum = min(3^N, S)
There are 3 ways to arrange a number: in the first group, in the second, not used.
*/
class Solution {
public:
    int n;
    int tallestBillboard(vector<int>& rods) {
        n = rods.size();
        
        return usingDP(rods);
    }
    
    int usingDP(vector<int>& rods) {
        unordered_map<int,int> dp;
        dp[0] = 0;
        for(const int& x: rods){
            unordered_map<int,int> curDP(dp);
            for(auto p: curDP){ // for iterations
                int diff = p.first;
                int taller = p.second;
                int shorter = taller - diff;
                // to taller stand
                dp[diff + x] = max(dp[diff+x], taller + x); // old max vs new value with diff
                //to shorter stand
                int newdiff = abs(diff-x);
                dp[newdiff] = max({dp[newdiff], taller, shorter+x });
                
            }//current rods
            // dp = curDP;
        }//new rod
        return dp[0];
    }
};