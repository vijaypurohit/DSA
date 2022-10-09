/*
https://leetcode.com/problems/sort-array-by-increasing-frequency/
*/
class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int &x: nums)
            freq[x]++;
        sort(begin(nums), end(nums), [&](int &x, int &y){
           return freq[x]==freq[y] ? x>y : freq[x] < freq[y]; 
        });
        return nums;
    }
};