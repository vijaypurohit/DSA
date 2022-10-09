 /*
 https://leetcode.com/problems/minimum-time-to-make-rope-colorful/
*/
/*
* if there are consecutive ballons with the same color -> we want to keep the one with maximum neededTime and remove others with less min time
* if there are 2 ballons with different colors, ans = 0;
  if there are 2 ballons with same colors, ans = min(neededTime[0], neededTime[1]);
* if there are 3 ballons with same color, ans = sum(neededTime[0..2]) - max(neededTime[0..2]);
  if there are N ballons with same color, ans = sum(neededTime[0..N-1]) - max(neededTime[0..N-1]);
* we don't need to calculate the sum and sutract the max though, instead, we can either
    1. update the neededTime inplace to the max of neededTime[i] and neededTime[i-1] (remove min of two and then proceed)
    2. store the max value in some variable;
* eg: colors = "aaa" and neededTime = [1,2,1]
      compare neededTime[0] and neededTime[1], remove [0]st one;
      then compare neededTime[1] and neededTime[2], remove [2]nd one;
      colors = "_a_" and neededtime = [_,2,_]
*/
class Solution {
public: 
    int minCost(string colors, vector<int>& neededTime) {
        int n = colors.length();
        // int ans=0;
        // for(int i=1; i<n; i++)
        // {
        //     if(colors[i] == colors[i-1])
        //     {
        //         int mn, mx;
        //         if(neededTime[i] > neededTime[i-1]) { mn = neededTime[i-1]; mx = neededTime[i];}
        //         else  { mn = neededTime[i]; mx = neededTime[i-1];} 
        //         ans += mn;
        //         neededTime[i] = mx; 
        //     }
        // }
        // return ans;
        
        int ans=neededTime[0], maxTime = neededTime[0];
        for(int i=1; i<n; i++)
        {
            if(colors[i] != colors[i-1])
            { // if there is new color then from ans, remove the max Time which we added and reset it
                ans -= maxTime;
                maxTime = 0;
            }
            ans += neededTime[i];
            maxTime = max(maxTime, neededTime[i]);
        }
        return ans - maxTime; // for last color
    }
};