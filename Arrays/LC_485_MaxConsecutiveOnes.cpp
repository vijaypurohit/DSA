/*
https://leetcode.com/problems/max-consecutive-ones/
*/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_len=0, len=0;
        for(int &x: nums)
        {
            if(x==1)
                len++;
            else
            {
                max_len = max(max_len, len);
                len=0;
            }
        }
        max_len = max(max_len, len);
        return max_len;
    }
};