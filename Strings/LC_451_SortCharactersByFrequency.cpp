/*
https://leetcode.com/problems/sort-characters-by-frequency/
*/

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;
        for(char& ch: s)
            freq[ch]++;
        vector<pair<char,int>> sorted;
        for(auto &x: freq)
            sorted.push_back(x);
        sort(sorted.begin(), sorted.end(), [&](auto &x, auto &y){
            return x.second > y.second;
        });
        
        string ans;
        for(auto &x: sorted)
        {
            ans += string(x.second, x.first);
        }
        return ans;
    }
};