/*
https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero/
*/

class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans;
        if(n==1) return {0};
        if(n==2) return {-1, 1};
        int k = n/2; 
        for(int i=k; i>=1; i--)
        {
            ans.push_back(i);
            ans.push_back(-i);
        }
        if(n%2) ans.push_back(0);
        return ans;
    }
};