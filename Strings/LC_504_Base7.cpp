/*
https://leetcode.com/problems/base-7/
*/

class Solution {
public:
    string convertToBase7(int num) {
        if(num < 0)
            return "-"+convertToBase7(-num);
        if(num <=6) 
            return to_string(num);
        // return convertToBase7(num/7) + to_string(num%7);
        int temp=num;
        string ans;
        while(temp)
        {
            ans = to_string(temp%7) + ans;
            temp=temp/7;
        }
        // reverse(ans.begin(), ans.end());
        return ans;
    }
};