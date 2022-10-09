/*
https://leetcode.com/problems/ransom-note/
*/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) { 
        if(magazine.size() < ransomNote.size()) 
            return false;
        // unordered_map<char,int> freq;
        vector<int> freq(26, 0);
        
        for(char &ch: magazine)
            freq[ch-'a']++;
        for(char &ch: ransomNote)
        {
            if(--freq[ch-'a']<0)
                return false;
        }
        return true;
    }
};