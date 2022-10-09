/*
https://leetcode.com/problems/find-the-original-array-of-prefix-xor/
*/
class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int n = pref.size();
        // vector<int> ans(n);
        // ans[0] = pref[0];
        // for(int i=1; i<n; i++)
        // {
        //     ans[i] = pref[i]^pref[i-1];
        // }
        // return ans;
        for(int i=n-1; i>=1; i--)
        {
            pref[i] = pref[i]^pref[i-1];
        }
        return pref;
    }
};