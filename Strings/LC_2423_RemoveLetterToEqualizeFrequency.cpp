/*
https://leetcode.com/problems/remove-letter-to-equalize-frequency/
*/

class Solution {
public:
    bool equalFrequency(string word) {
        int n = word.size();
        array<int, 27> freq = {0};
        
        for(int i=0; i<n; i++)   
            freq[word[i]-'a']++;
        
        sort(freq.begin(), freq.end(), greater<int>());
        
        bool success = false;
        for(int i=0; i<27 and freq[i]; i++)
        { 
            freq[i] -= 1;
            success = true;
            int val = 0;
            for(int j=0; j<27; j++)
            {   
                if(freq[j]>0 )
                {
                    if(val == 0) // if val is zero assign it to some freq
                        val = freq[j];
                    else if(val != freq[j]) // compare with everyone
                    {
                        success = false; // no success
                        break;
                    }
                        
                }  
            }
            if(success) return true; // if we were able to find all equal
            freq[i] += 1;
        }
        
        return false; // failed in all
    }
};