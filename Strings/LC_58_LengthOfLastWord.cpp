/*
https://leetcode.com/problems/length-of-last-word/
58. Length of Last Word

*/

class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();
        int len=0;
        // bool flag = false;
        // for(int i=n-1; i>=0; i--)
        // {
        //     if(s[i]==' ')
        //     {
        //         if(flag == false) continue;
        //         else break;
        //     }
        //     else{
        //         flag = true;
        //         len++;
        //     }
        // }
        // return len;
        int j=n-1;
        while(j>=0 and s[j]==' ')
            j--;
        while(j>=0 and s[j] != ' ')
        {
            len++;
            j--;
        }
        return len;
    }
};