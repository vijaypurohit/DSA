/*
https://leetcode.com/problems/continuous-subarray-sum/
*/
class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        if(n<=1) return false;
        if(n==2) { return (nums[0]+nums[1])%k==0;}
        /*//TLE
        for(int i=0; i<n-1; i++)
        {
            int sum = nums[i];
            for(int j=i+1; j<n; j++)
            {
                sum+=nums[j];
                if(sum%k==0)
                    return true;
            }
        }
        return false;
        */
        
       
        /*
        (nums[l] + ... + nums[r])%k => (pref[r+1] - pref[l])%k => (pref[r+1])%k = (pref[l])%k;
        l<r inequality ensures that subarray size is at least two
        */
        // {sum%k, idx}
        // unordered_map<int,int> hash = {{0, 0}};
        // int sum=0;
        // for(int i=0; i<n; i++)
        // {
        //     sum += nums[i];
        //     // remainder first time
        //     if(hash.find(sum%k) == hash.end())
        //         hash[sum%k] = i+1;
        //     else if(hash[sum%k] < i) //atleast two element
        //         return true; 
        // }
        // return false;
        
         vector<int> presum(n+1, 0); //pref[0] allows us to consider subarrays starting at the beginning of the entire array
        for(int i=0; i<n; i++)
            presum[i+1] = presum[i]+nums[i];
        unordered_set<int> hash;
        for(int i=2; i<=n; i++)
        {
            int rem1 = presum[i-2]%k;
            hash.insert(rem1);
            int rem2 = presum[i]%k;
            if(hash.count(rem2))
                return true;
        }
        return false;
    }
};