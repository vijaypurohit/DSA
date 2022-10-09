/*
2384. Largest Palindromic Number

https://leetcode.com/problems/largest-palindromic-number/
*/

class Solution {
public:
    string largestPalindromic(string num) {
        int n = num.size();
        int mid = -1;
        vector<int> freq(10, 0);
        for(char &ch: num) freq[ch-'0']++;
        string ans;
        for(int i=9; i>=0; i--)
        {
            if(mid == -1) {
                if(freq[i]%2==1 || (freq[i]>0 and i==0)){
                    freq[i]--;
                    mid=i;
                }
            }
            
            if(i==0 and ans.size()==0) break; // for leading zeroes, if we reach at i==0
            if(freq[i]>=2)
            {
                freq[i] /= 2;
                ans += string(freq[i], i+'0');
            }
        }
        // cout<<mid;
        int i = ans.size()-1;
        if(mid!=-1)
            ans+= mid+'0';
        
        for(; i>=0; i--)
            ans += ans[i];
        
        return ans;
    }
};