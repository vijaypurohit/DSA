/*
https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/
*/

class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.length();
        int ans = 0;
        /* //TLE
        for(int i=0; i<=n-3; i++)
        {
            for(int j=i+2; j<n; j++)
            {
                string sub = s.substr(i, j-i+1);
                // cout<<sub<<endl;
                if(sub.find("a")!= string::npos and sub.find("b")!= string::npos and sub.find("c")!= string::npos)
                    ans++;
            }
        }
        */
        
        vector<int> hash(3, 0);
        int uniq=0, l=0, r=0;
        while(r<=n-1)
        {
            int idx = s[r]-'a';
            if(++hash[idx] == 1) uniq++;
            
            while(uniq==3)
            {
                ans += (n-r);
                if(--hash[s[l]-'a'] == 0)
                    uniq--;
                l++;
            }
            r++;
        }
        
        return ans;
        
        //Using BS
        vector<int> aHash, bHash, cHash;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='a') aHash.push_back(i);
            else if(s[i] == 'b') bHash.push_back(i);
            else if(s[i] == 'c') cHash.push_back(i);
        }
        
        for(int i=0; i<n; i++)
        {
            auto aj = lower_bound(aHash.begin(), aHash.end(), i);   
            auto bj = lower_bound(bHash.begin(), bHash.end(), i);   
            auto cj = lower_bound(cHash.begin(), cHash.end(), i);   
            if(aj == aHash.end() or bj == bHash.end() or cj == cHash.end())
                continue;
            int end = max({*aj, *bj, *cj});
            ans = ans + (n-end);
        }
        return ans;
    }
};