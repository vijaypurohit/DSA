/*
https://leetcode.com/problems/fair-distribution-of-cookies/
2305. Fair Distribution of Cookies
*/

class Solution {
public:
    
    int n, k;
    int distributeCookies(vector<int>& cookies, int k) {
        n = cookies.size();
        this->k = k;
        
        //Backtracking
        vector<int> ks(k, 0);
        return solve(0, ks, cookies);
        
        //Using Binary Search
        int l = *max_element(cookies.begin(), cookies.end()); // max value of cookie
        int r = accumulate(cookies.begin(), cookies.end(), 0); // sum, if all cookies goes to one child
        
        int ans=0;
        while(l<=r)
        {
            int mid = (l+r)/2;
            vector<int> ksum(k, 0);
            if(isPossible(0, mid, ksum, cookies))
            {
                ans = mid;
                r=mid-1;
            }
            else
                l=mid+1;
        }
        return ans;
    }//
    
    bool isPossible(int bagId, int &TotCookies, vector<int>&ksum, vector<int>& cookies)
    {
        if(bagId==n)
            return true;
        for(int child=0; child<k; child++)
        {
            if(ksum[child] + cookies[bagId] <= TotCookies)
            {
                ksum[child] += cookies[bagId]; //give bag idx to child i
                if(isPossible(bagId+1, TotCookies, ksum, cookies))
                    return true;
                ksum[child] -= cookies[bagId]; //not possible take it from child i
            }
            if(ksum[child]==0)
                return false;
        }
        
        return false;
    }
    
    int solve(int bagId, vector<int>& ksum, vector<int>& cookies)
    {
        int value = 1e9;
        if(bagId == n)
        {
            return *max_element(ksum.begin(), ksum.end());
        }
        //give cookie to first person then second person
        for(int child=0; child<k; child++)
        {
            ksum[child] += cookies[bagId]; // give bag idx to child i
            // if(ksum[child]<value)
            value = min(value, solve(bagId+1, ksum, cookies));
            ksum[child] -= cookies[bagId];
            if(ksum[child]==0) break; // if given vookie  decreases min unfairness level
        }
        return value;
    }
};