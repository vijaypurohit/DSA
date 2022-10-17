/*
https://leetcode.com/problems/largest-number/
*/

class Solution {
public:
    int n;
    string largestNumber(vector<int>& nums) {
        n = nums.size();
        vector<string> arr;
        for(int &x: nums)
            arr.push_back(to_string(x));
        sort(begin(arr), end(arr), [&](const string& s1, const string& s2){
           return s1+s2 > s2+s1; 
        });
        
        string ans;
        for(auto &s: arr)
            ans +=s;
        // while(ans[0]=='0' and ans.length()>1)
        //     ans.erase(0,1);
        if(ans[0]=='0') return "0";
        return ans;
    }
};