/*
https://leetcode.com/problems/total-appeal-of-a-string/
2262. Total Appeal of A String

https://leetcode.com/problems/total-appeal-of-a-string/discuss/2379420/C%2B%2B-Easy-intuitive-Approach-using-Hashing-and-DP

https://leetcode.com/problems/total-appeal-of-a-string/discuss/1996390/
*/
class Solution {
public:
    
    int n;
    long long appealSum(string s) {
        //aprroach 3
        n = s.length();
        // return doubleLoop26n(s);
        // return singleLoop26NToN(s); 
        return singleLoopN(s);
    }
    
/*
how many substring ending at s[j] contains character a.
They are xxxaxxxxb, xxaxxxxb, xaxxxxb, axxxxb ....,
i + 1 substring ending with character a at s[i],
so we do res += i + 1. 
We repeatly do this for every s[i] and every one of 26 characters.
*/
    long long doubleLoop26n(string &s)
    {
        long long ans=0; 
        vector<int> last(26, 0);
        for(int i=0; i<n; i++)
        {   
            last[s[i]-'a'] = i+1;
            for(int j: last)
                ans += j; 
        }
        return ans;
    }
/*
Don't do a O(26) for loop to accumulate the last,
insteadly ccount the total value of last and update it in O(1)
*/    
    long long singleLoopN(string &s)
    {
        long long ans=0; 
        vector<int> last(26, -1);
        for(int i=0; i<n; i++)
        {   int idx= s[i]-'a';  
            ans += (i-last[idx])*(n-i);
            last[idx] = i;   
        }
        return ans;
    }
    
    long long singleLoop26NToN(string s) { 
        long long cnt=0;
        long total=0;
        vector<int> last(26, 0);
        for(int i=0; i<n; i++)
        {   int idx= s[i]-'a';  
            total = total + (i+1) - last[idx]; // delete earlier value of last[idx] and new value i+1
            last[idx] = i+1; 
            cnt+=total; // sum total appeal of each index 
        }
        return cnt; 
    }
      
};