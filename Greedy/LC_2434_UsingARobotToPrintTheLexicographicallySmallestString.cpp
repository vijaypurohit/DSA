/*
https://leetcode.com/problems/using-a-robot-to-print-the-lexicographically-smallest-string/
*/
/*
"zza"
"bac"
"bdda"
"abcde"
"edcba"
"bcdabac"
"bydizfve" -> "bdevfziy"
"zazzza" -> "azazzz"
"zzzaza" -> "azazzz"
*/
class Solution {
public:
    string robotWithString(string s) {
        int n = s.length();
        string ans="", t=""; 
        
        /*
        vector<int> freq(26,0); 
        auto low = [&]()->char{
            for(int i=0; i<26; i++)
                if(freq[i] > 0)
                    return i+'a';
            return 'z';
        };
        
        for(char& ch: s)
            freq[ch-'a']++;
        
        for(char& ch: s)
        {
            t.push_back(ch);
            freq[ch-'a']--;
            while(!t.empty() and t.back() <= low())
            {
                ans += t.back();
                t.pop_back();
            }
        }
        return ans;
        */
        // /*
        vector<char> small(n); //small[i] -> smallest char from i to n-1
        small[n-1] = s[n-1];
        for(int i=n-2; i>=0; i--)
        {
            if(s[i] < small[i+1]) // s[i] is smallest
                small[i] = s[i];
            else
                small[i] = small[i+1];
        }
        
        for(int i=0; i<n; i++)
        {
            while(!t.empty() and t.back() <= small[i])
            {
                ans+=t.back(); t.pop_back();
            }
            t.push_back(s[i]);
        }
        
        if(t.size()>0)
        {
            // cout<<"t="<<t<<endl;
            reverse(t.begin(), t.end());
            ans+=t;
        }
        return ans;
        // */
    }
};