/*
https://leetcode.com/problems/longest-substring-with-at-least-k-repeating-characters/
*/

class Solution {
public:
    int n, k;
    int longestSubstring(string s, int k) {
        n = s.length();
        // if length of string is 0 or it is less than k then there will no longest substring 
        if(n==0 or k > n)
            return 0;
        //k ==1 means that all the characters will be unique so we will return entire length.
        if(k <= 1) return n;
        this->k = k;
        // return using_bruteForce(s);
        // return divideAConq(0, n, s);
         return slidingwnd(s);
    }
    
    int slidingwnd(string &s)
    { 
        vector<int> freq(26,0);
        int maxUniq = unordered_set<char>(s.begin(), s.end()).size();
        int ans=0;
        for(int curUniq=1; curUniq<=maxUniq; curUniq++)
        {   // for each uniq char
            vector<int> freq(26, 0);
            int l=0, r=0, idx=0, uniq=0, uniqAtleastK=0;
            while(r < n)
            {   //expand the wnd
                if(uniq <= curUniq)
                {
                    idx = s[r]-'a';
                    if(freq[idx]==0) uniq++;
                    freq[idx]++;
                    if(freq[idx]==k) uniqAtleastK++;
                    r++;
                }
                else{
                    idx = s[l]-'a';
                    if(freq[idx]==k) uniqAtleastK--;
                    freq[idx]--;
                    if(freq[idx]==0) uniq--;
                    l++;
                }
                if(uniq == curUniq and uniq == uniqAtleastK)
                    ans = max(ans, r-l);
            }// while r
        }//for cur
        return ans;
    } 
    
    
    int divideAConq(int start, int end, const string &s)
    { 
        if(end < k) return 0; // if end itself less than k, we will never be able to find k char
        vector<int> freq(26,0); //  to store count of characters
        for(int i=start; i<end; i++)
            freq[s[i]-'a']++;
//         int ans=0;
//         for(int i=start; i<end; )
//         {
//             while(i<end and freq[s[i] - 'a'] < k)i++;
//             if(i==end)break;
            
//             int j=i;
//             while(j<end and freq[s[j]-'a'] >= k) ++j;
//             if(i==start and j==end)return end-start;
//             ans = max(ans, divideAConq(i, j, s));
//             i=j;
//         }     
//         return ans;
        for(int mid = start; mid<end; mid++)
        {
            if(freq[s[mid]-'a'] >= k) continue;
            int midnxt = mid+1; // first breakpoint mid, second breakpoint midnxt
            while(midnxt<end and freq[s[midnxt]-'a'] < k) midnxt++;
            return max(divideAConq(start, mid, s), divideAConq(midnxt, end, s));
        }
        return (end-start);
    }
    
    // optimized bruteforce,  The idea is that if a locally longest substr is found, there's no need to check substrs overlapping it.
    int using_bruteForce(string &s)
    {
        int ans=0;
        for(int i=0; i+k<=n; )
        {
            vector<int> freq(26,0);
            int mask=0, last = i;
            for(int j=i; j<n; j++)
            {
                int idx = s[j]-'a';
                freq[idx]++;
                // if(isValid(s, i, j, freq))
                //     ans = max(ans, j-i+1);
                if(freq[idx] < k) // using bitmasking for maintaining >=k
                    mask |= (1<<idx);
                else
                    mask &= (~(1<<idx));
                if(mask == 0)
                {    
                    ans = max(ans, j-i+1);
                    last= j;
                }
            } 
            i = last + 1;
        }
        return ans;
    }
    
    bool isValid(string &s, int &i, int &j,  vector<int>& freq)
    {
        int cntLetters=0, cntLettersAtleastK=0;
        for(int i=0; i<26; i++)
        {
            if(freq[i] > 0)cntLetters++;
            if(freq[i] >= k)cntLettersAtleastK++;
        }
        return cntLetters == cntLettersAtleastK;
    }
    
    
    
};