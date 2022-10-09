/*
151. Reverse Words in a String
https://leetcode.com/problems/reverse-words-in-a-string/
https://www.lintcode.com/problem/53
https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1
*/

class Solution {
public:
    //extra space
    string reverseWords_1(string s) {
        int n = s.length();
        string ans="";
        int l=0;
        for(int r=0; r<n; r++)
        {
            while(r<n and s[r]==' ') 
                r++; 
            l=r;
            string cur;
            while(r<n and s[r] != ' ')
            {
                cur+=s[r];
                r++;
            }
           
            if(cur.length() == 0 )continue;
            
            if(ans.length()!=0)
                ans= cur + ' ' + ans;
            else
                ans= cur;
        } 
        return ans;
    }
    
    //inplace
     string reverseWords(string s) {
        int n = s.length();
        int l=0, r=0, i=0;
        while(i<n)
        {
            while(i<n and s[i]!=' ') 
                s[r++] = s[i++];
            
            if(l<r)
            {
                reverse(s.begin()+l, s.begin()+r);
                if(r==n) break;
                s[r++] = ' ';
                l=r;
            }
            ++i; // i==n or s[i] =' ';
        } 
         if(r>0 and s[r-1]==' ')--r; 
         s.resize(r);
        reverse(s.begin(), s.end());   
        return s;
    }
};