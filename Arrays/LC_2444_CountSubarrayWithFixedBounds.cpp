/*
https://leetcode.com/problems/count-subarrays-with-fixed-bounds/
*/

class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) { 
        
        return usingTwoPointer(nums, minK, maxK);
    }
    
    long long usingTwoPointer(vector<int>& nums, int minK, int maxK)
    {
        int n = nums.size();
        long long ans=0;
        
        // minPos, maxPos: most recent position of minK and maxK
        // leftBound: most recent value outside the range of [minK, maxK]
        int minPos=-1, maxPos=-1, leftBound=-1;
        
        for(int i=0; i<n; i++)
        {
            // if number is outside the range [minK maxK]
            if(nums[i] < minK or nums[i] > maxK)
                leftBound = i;
            if(nums[i] == minK)
                minPos = i;
            if(nums[i] == maxK)
                maxPos = i;
            
            // leftBound _ _ _ [minPos .....maxPos]
            ans += max(0, min(minPos, maxPos) - leftBound);
        }
        
        
        return ans;
    }
};