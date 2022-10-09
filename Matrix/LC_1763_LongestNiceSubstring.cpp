/*
1763. Longest Nice Substring

https://leetcode.com/problems/longest-nice-substring/
*/

class Solution {
public:
    string brtueForce(string s) {
       int n= s.length();
        string ans="";  
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++) // for each substring
            {
                string t = s.substr(i, j-i+1); 
                vector<int> ufreq(26, 0), lfreq(26, 0);
                bool flag = true;
                 for(char &ch: t) // calculate its freq of char
                {
                    if(isupper(ch))
                        ufreq[ch-'A']++;
                     else
                         lfreq[ch-'a']++;
                }
                for(char &ch: t) // check if it is valid nice string
                { 
                    int ind = ch - (isupper(ch)? 'A': 'a'); 
                    if(ufreq[ind]<1 or lfreq[ind]<1)
                    {
                        flag = false;
                         break;
                    }   
                }
                if(flag and ans.length()<t.length()){
                    ans = t;
                }
            }
        } 
        return ans;
    }//
    
    string divideConquer(string s){
        int len = s.length();
        unordered_set<char> hashset(s.begin(), s.end());
        for(int i=0; i<len; i++)
        {
            // if corresponding upper or lower character not present we know it will  never be present in our answer substring
            if(hashset.find(toupper(s[i]))==hashset.end() || hashset.find(tolower(s[i]))==hashset.end())
            {
                string prev = divideConquer(s.substr(0, i));
                string next = divideConquer(s.substr(i+1));
                return prev.size()>=next.size() ? prev: next;
            }
        }
        return s;
    }
    
    string bitmanipulation(string s){
        int maxlen =0; int start=0;
        int lower, upper;
        for(int i=0; i<n; i++)
        {
            lower = upper = 0;
            for(int j=i; j<n; j++)
            {
                if(s[j]>='a')
                    lower |= (1<<(s[j]-'a'));
                else
                    upper |= (1<<(s[j]-'A'));
                if((lower ^ upper) == 0)
                {
                    if(maxlen < (j-i+1))
                    {
                        start=i;
                        maxlen = j-i+1;
                    }
                }
            }
        }
        if(maxlen == 0) return "";
        return s.substr(start, maxlen);
    }
    
    int n;
     string longestNiceSubstring(string s) {
        n= s.length();
         if(n<=1) return ""; 
         // return brtueForce(s);
         return divideConquer(s);
     }
};