/*
https://leetcode.com/problems/missing-number/
https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1
*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        /*
        // ********* using sum of n numbers ***********
        int sum_of_n = (n*(n+1))/2;
        int sum_of_arr = accumulate(nums.begin(), nums.end(), 0);
        return sum_of_n - sum_of_arr;
        */
        /*
        // ********* using xor ***********
        */
        int xor_sum=n;
        for(int i=0; i<n; i++)
        {
            xor_sum ^= i;
            xor_sum ^= nums[i]; 
        } 
        return xor_sum;
    }
};