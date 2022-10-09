/*
https://leetcode.com/problems/contains-duplicate/
*/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        
        /*
        unordered_set<int> hash(nums.begin(), nums.end());
        return n > hash.size();
        */
        
        /*
        unordered_set<int> hash;
        for(int &x: nums)
        {
            // if(hash.count(x))
            //     return true;
            //  hash.insert(x);
            auto [it, ok] =  hash.insert(x);
            if(ok==false)
                return true;
        }
        return false;
        */
        
        // /*
        sort(nums.begin(), nums.end());
        for(int i=1; i<n; i++)
        {
            if(nums[i]==nums[i-1])
                return true;
        }
        return false;
        // */
    }
};