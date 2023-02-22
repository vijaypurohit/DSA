/*
https://leetcode.com/problems/naming-a-company/
*/

class Solution {
public:
    long long distinctNames(vector<string>& ideas) {
        unordered_set<string> initGroup[26];
        for(auto &idea: ideas)
            initGroup[idea[0]-'a'].insert(idea.substr(1));
        
        long long ans=0;
        for(int i=0; i<=24; i++)
        {
            for(int j=i+1; j<=25; j++)
            {
                int mutualSuffix = 0;
                for(auto &s: initGroup[i])
                {
                    if(initGroup[j].count(s))
                        mutualSuffix++;
                }
                ans +=  (initGroup[i].size() - mutualSuffix) * (initGroup[j].size() - mutualSuffix);
            } 
        }
        return 2LL * ans;
    }//end
};