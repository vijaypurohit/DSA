/*
https://leetcode.com/problems/buddy-strings/
*/

class Solution {
public:
    bool buddyStrings(string s, string goal) {
        int ns = s.length();
        int ng = goal.length();
        if(ns != ng) return false;
        
        // if equal string then we need to find atleast one duplicate char in order to swap the char
        if(s == goal)
        {
            vector<int> count(26, 0);
            for(char &ch: s)
            {
                if(++count[ch-'a'] > 1) return true; // some swappable char
            }
            return false; // if no swappable char
        } // s == goal
        
        int first = -1, second = -1;
        for(int i=0; i<ns; i++)
        {
            if(s[i] != goal[i])
            {
                if(first == -1)
                    first = i;
                else if(second ==-1)
                    second = i;
                else 
                    return false; // more than one pair to swap
            }
        }
        
        if(second == -1)
            return false;
        
       return (s[first] == goal[second] and goal[first] == s[second]);
    }
};