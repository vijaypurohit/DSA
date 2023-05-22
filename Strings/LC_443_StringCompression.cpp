/*
https://leetcode.com/problems/string-compression
*/

class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int ansLen=0;
        
        int i=0;
        while(i<n)
        {
            int grpLen = 1;
            while(i+grpLen<n and chars[i] == chars[i+grpLen]) // fix i and move grpLen
                grpLen++;
            
            chars[ansLen++] = chars[i]; // save the first unique character in original array to save space
            
            if(grpLen > 1){ // if group size is more than 1
                for(char &ch: to_string(grpLen))
                    chars[ansLen++] = ch;
            }
            
            i += grpLen; // shift to next unique char
        }
        
        return ansLen;
        
    }
};