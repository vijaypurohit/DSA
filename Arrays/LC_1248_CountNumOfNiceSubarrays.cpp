/*
https://leetcode.com/problems/count-number-of-nice-subarrays/
*/

class Solution {
public:
    // Same As Binary Suarray With Sum LC:930
    int UsingOneZeroLogic(vector<int>& nums, int k) 
    {
        int n = nums.size();
        // for(int &x: nums)
        // {
        //     if(x&1) x=1;
        //     else x=0;
        // }
        unordered_map<int, int> hash;
        hash[0]=1;
        int sum = 0, ans=0;
        for(int &x: nums)
        {
            if(x&1) x=1;
            else x=0;
            
            sum+=x;
            if(hash.find(sum-k) != hash.end())
                ans += hash[sum-k];
            hash[sum]++;
        }
        return ans;
    }//end
    
     int UsingTwoPointer(vector<int>& nums, int k) 
    {
        int n = nums.size();   
        int ans = 0, odd=0, l=0, count=0;
        for(int r=0; r<n; r++)
        {
            // if(nums[r]%2)
            // {
            //     odd++;
            //     if(odd>=k)
            //     {
            //         count=1;
            //         while(nums[l++]%2 == 0)//even
            //             count++;
            //         ans += count;
            //     }
            // }
            // else if(odd>=k)
            //     ans += count;
            if(nums[r]%2)
            {
                odd++;
                count=0;
            }
            while(k == odd)
            {
                count++;
                if(nums[l++] & 1)
                    odd -= 1;
            }
            ans+=count;
        }
        return ans;
    }//end
    
    int numberOfSubarrays(vector<int>& nums, int k) 
    { 
        // return UsingOneZeroLogic(nums, k);
        return UsingTwoPointer(nums, k);
    }//end
};