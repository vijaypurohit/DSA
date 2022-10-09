/*
763. Partition Labels

https://leetcode.com/problems/partition-labels/
*/

class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n = s.length();
       unordered_map<char, int> last;
        for(int i=0; i<n; i++)
            last[s[i]]=i;
        vector<int> ans;
        int prev=-1, mx=0;
        for(int i=0; i<n; i++)
        {
            mx = max(mx, last[s[i]]);
            if(i==mx)
            {
                ans.push_back(mx-prev);
                prev = mx;
            }
        }
        
        return ans;
    }//
};