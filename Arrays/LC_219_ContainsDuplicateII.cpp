/*
219. Contains Duplicate II
https://leetcode.com/problems/contains-duplicate-ii/
*/

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n =  nums.size();
        /*
        //TLE
        for(int i=0; i<n-1; i++)
        { 
            for(int j = min(n-1, i+k); j>i; j--)
            {
                if(nums[i] == nums[j])
                    return true;
            }
        }
        return false;
        */
        if(k<=0) return false;
        if(k >= n)
            k=n-1;
        
        /*
        int i=0, j=0;
        for( ; j<=k; j++)
        {
            auto [it, ok] = hash.insert(nums[j]);
            if(ok==false)
                return true;
        }
        while(j<n)
        {
            hash.erase(nums[i]);
            auto [it, ok] = hash.insert(nums[j]);
            if(ok==false)
                return true;
            i++;
            j++;
        }
        */
        /*
        unordered_set<int> hash;
        for(int i=0; i<n; i++)
        {
            if(i>k)
                hash.erase(nums[i-k-1]);
            if(hash.insert(nums[i]).second == false)
                return true;
        }
        */
        unordered_map<int, int> hash;
        for(int i=0; i<n; i++)
        { 
            if(hash.find(nums[i]) != hash.end() and (i-hash[nums[i]])<=k)
                return true;
            hash[nums[i]] = i;
        }
        
        return false;
    }
};