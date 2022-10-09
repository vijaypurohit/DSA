/*
357. Count Numbers with Unique Digits

https://leetcode.com/problems/count-numbers-with-unique-digits/
*/

/*
357. Count Numbers with Unique Digits
https://leetcode.com/problems/count-numbers-with-unique-digits/
*/

// dp[0] = 1;
// dp[1] = 9;
// dp[2] = 9*9;
// dp[3] = 9*9*8;
// dp[4] = 9*9*8*7;
// dp[5] = 9*9*8*7*6;
// dp[6] = 9*9*8*7*6*5;
// dp[7] = 9*9*8*7*6*5*4;
// dp[8] = 9*9*8*7*6*5*4*3;
class Solution {
public:
    /*
    int solveByDP(int n) {
        
        vector<int> dp(n+1, 9); // dp[i] count of numbers with uniq digits 10^(i-1) < 10^i
        dp[0] = 1; // dp[1] = 9;
        
        if(n==0) return dp[0];
        
        int ans=dp[0] + dp[1];
        
        if(n==1) return ans;
        
        int factor = 9;
        for(int i=2; i<=n; i++)
        {
            // dp[i] = dp[i-1] * (dp[1] - i + 2); //9 - 2 +2=9, 9-3+2=8
            dp[i] = dp[i-1] * (factor--); 
            ans += dp[i];
        }
            
        return ans;
    }//
    */
    
    /*
    vector<bool> visited =  vector<bool>(10, false);
    int solveByBackTrack_PP(int n) { 
        // return solveByDP(n);
        if(n==0) return 1;
        if(n==1) return 10;
        
        int ans=10;
        for(int i=2; i<=n; i++)
        {
            for(int digit=1; digit<=9; digit++)
            {
                visited[digit] = true;
                ans +=  countuniq(i-1);
                visited[digit] = false;
            }
        }
        return ans;
    }//
    
    int countuniq(int places)
    { 
        if(places==0) return 1;
        // if(places==1) return 10;
        int cnt=0;
        
        for(int digit=0; digit<=9; digit++)
        {
            if(visited[digit] == true) continue;
            visited[digit] = true;
            cnt +=  countuniq(places-1);
            visited[digit] = false;
        }
        
        return cnt;
    }
    */
    
    int countbybits(int idx, int places, int mask)
    {
        if(idx == places) return 1;
        int cnt=0;
        
        int digit=0;
        if(idx == 0 and digit == 0) digit=1;
        for( ; digit<=9; digit ++)
        {
            if(mask & (1<<digit)) continue;
            cnt+= countbybits(idx+1, places, mask | (1<<digit));
        }
        
        return cnt;
    }
    
    int countNumbersWithUniqueDigits(int n) { 
        // return solveByDP(n);
        if(n==0) return 1;
        if(n==1) return 10;
        
        int ans=10;
        int mask=0;
        for(int places=2; places<=n; places++)
        {
            ans +=  countbybits(0, places, mask); 
        }
        return ans;
    }//
};