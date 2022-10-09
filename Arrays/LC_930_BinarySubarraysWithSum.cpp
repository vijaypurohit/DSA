/*
930. Binary Subarrays With Sum
https://leetcode.com/problems/binary-subarrays-with-sum/
*/

class Solution {
public:
    int UsingPrefixSum(vector<int>& nums, int goal) {
        int n = nums.size();
        int cnt=0;
        int prefix=0;
        unordered_map<int,int> hash;
        hash[0]=1;
        for(int &x: nums)
        {
            prefix+=x;
            if(hash.count(prefix-goal))
                cnt+=hash[prefix-goal];
            hash[prefix]++;
        }
        return cnt;
    }//end
    
    int func(vector<int>& nums, int x) 
    {   // num of subarrays with sum <= x
        if(x<0) return 0;
        int n = nums.size();
        int ans=0;
        int sum=0, l=0;
        for(int r=0; r<n; r++)
        { 
            sum +=nums[r];
            while(sum>x and l<=r)
            {
                sum -= nums[l];
                l++;
            }
            ans += r-l +1; // include r, then r-1, r-2 ... r-l therefore num of subarrays is length
        }
        return ans;
    }//end
    
    int numSubarraysWithSum(vector<int>& nums, int goal) {
       // return UsingPrefixSum(nums, goal);
       
        return func(nums, goal) - func(nums, goal-1); //atmost sum
    }//end
};