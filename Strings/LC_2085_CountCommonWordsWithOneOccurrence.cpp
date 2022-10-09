/*
https://leetcode.com/problems/count-common-words-with-one-occurrence/
*/
class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string, int> freq;
        for(string& w: words1)
            freq[w]++;
        for(string& w: words2)
        {
            if(freq[w] <= 1)
                --freq[w];
        }
        return count_if(begin(freq), end(freq), [&](const auto &x){
            return x.second==0;
        });
    }
};