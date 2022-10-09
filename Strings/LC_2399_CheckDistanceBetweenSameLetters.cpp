/*
2399. Check Distances Between Same Letters

https://leetcode.com/problems/check-distances-between-same-letters/
*/

class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        int n = s.length();
        // unordered_map<char, int> hash;
        vector<int> hash(26, -1);
        for(int i=0; i<n; i++)
        {
            int idx = s[i]-'a'; 
            if(hash[idx] > -1)
            {
                int d = i - hash[idx] - 1;
                if(d != distance[idx])
                    return false;
            }
            else
            {
                hash[idx] = i;
            }
        }
        return true;
    }
};