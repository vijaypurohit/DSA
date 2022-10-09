/*
https://leetcode.com/problems/optimal-partition-of-string/
*/
class Solution {
public:
    int n;
    int usingSet(string s) { 
        set<char> hash;
        int ans=1;
        for(char &ch: s)
        {
            if(hash.find(ch) != hash.end())
            {
                ans++;
                hash.clear();
            }
            hash.insert(ch);
        }
        
        return ans;
    }
    
    int usingBitMasking(string s) { 
        int mask=0;
        int ans=1;
        for(char &ch: s)
        {
            int index = ch-'a';
            if(mask & (1<<index)) 
            {
                ans++;
                mask=0;
            }
            mask |= (1<<index);
        }
        
        return ans;
    }
    
    int partitionString(string s) {
        n = s.length();
        // return solve(0,s);
        // return usingSet(s);
        return usingBitMasking(s);
    }
    
    /*
    int solve(int idx, string& s)
    {
        if(idx==n)
        {
            return 1;
        } 
         
        int count=n;
        vector<int> freq(26,1); 
        bool brk=false; int i=idx;
        for( ; i<n; i++)
        {
            if(--freq[s[i]-'a']<0 ) {
                // cout<<i<<" ";
                count = min(count, 1+solve(i, s));
                brk= true;
                break;
            }
        }
        if(brk==false and i==n)
        {
            count = min(count, 1);
        }
        
        return count;
    }
    */
};