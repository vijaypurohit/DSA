/*
https://leetcode.com/problems/subarray-sums-divisible-by-k/

Similar Problems
523. Continuous Subarray Sum 
974. Subarray Sums Divisible by K 
*/

class Solution {
public:
    int n;
    int subarraysDivByK(vector<int>& nums, int k) {
        n = nums.size(); 
        return byPrefix(nums, k); 
    }

/*
find pairs (i, j) where i<j and (ps[j]-ps[i]) %k =0, prefix sum
    ==> ps[j] % k = ps[i] % k , Divendened = divisor * q + rem
    ==> B*k + R1 = A*k + R0
    ==> (B-A)*k + R1-R0 = 0
    ==> (B-A)*k is divisible by k, (R1-R0) is divisible then we have found the pair that is (R1-R0) = C*k
R1 and R0 values will be between 0 to k-1
R1 = C*k + R0
R1 = R0 (only values for C would be 0 because R0 value is also between 0 to k-1) C cannot be greater than 0 otherwise RHS would be greater than k which is not possible
*/

    int byPrefix(vector<int>& nums, int k)
    {
        int ans = 0, prefixMod = 0;
        
        vector<int> modGroups(k); //hashtable to store count of 
        modGroups[0]=1;
        for(int &x: nums)
        {
            prefixMod = (prefixMod + x%k + k) % k; // +k for negative number, %k for avoiding negative num eg: [7,4,-10], 5
            ans += modGroups[prefixMod]; // count if we have seen prefix Mod already
            modGroups[prefixMod]++; // add the current result;
        }
        return ans;
    }
    
/*
TLE
*/    
    int TLE(vector<int>& nums, int k) {
        n = nums.size();
        int ans = 0; 
        for(int i=0; i<n; i++)
        {
            int sum =  nums[i];
            if(sum % k == 0) ans++; 
            for(int j=i+1; j<n; j++)
            {
                sum+=nums[j];
                if(sum % k == 0) ans++;
            }
        } 
        return ans;
    }
};