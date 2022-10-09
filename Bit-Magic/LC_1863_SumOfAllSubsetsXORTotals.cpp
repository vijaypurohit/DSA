/*
https://leetcode.com/problems/sum-of-all-subset-xor-totals/
*/
class Solution {
public:
    int n;
    int subsetXORSum(vector<int>& nums) {
        n= nums.size();
        if(n==1) return nums[0];
        // return solve(0, 0, nums); // recursive bruteforce
        
        //As long as the i-th bit is set in any number of an array, that bit will be set exactly 2^(n-1) times in the subsets of the array.
        return accumulate(begin(nums), end(nums), 0, bit_or<int>()) << (n - 1);
        
        //iterative brute force
        int totalSubsets = 1<<n;
        int ans=0;
        for(int subset=1; subset<totalSubsets; ++subset)
        {
            int xorval=0;
            for(int i=0; i<n; i++)
            {
                if(subset & (1<<i)) //mask & 1 whether to inc cur element or not
                    xorval ^= nums[i];
            }
            ans += xorval;
        }
        return ans;
    }
    
    int solve(int idx, int xorval, vector<int>& nums)
    {
        if(idx == n)
            return xorval;
        
        int inc = solve(idx+1, xorval ^ nums[idx], nums);
        int exc = solve(idx+1, xorval, nums);
        return inc+exc;
    }
};