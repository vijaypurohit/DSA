/*
https://leetcode.com/problems/maximum-number-of-ways-to-partition-an-array/
*/
/*
Reference:
https://leetcode.com/problems/maximum-number-of-ways-to-partition-an-array/discuss/1498999/C%2B%2B-O(n)
    
    * if we do not change the any nums[i]
        * count of pivots will be indexes where presum[i]==sufsum[i+1];
    * if we are allowed to change nums[j]
        * increase will be -> d = +k-nums[j] 
        * prefix value will increase from j to n-1
        * suffix value will increase from j to 0
        * for counting, count indexes such that
            ** if i < j (suffix increase)
                 presum[i] - sufsum[i+1] = d
            ** if i >= j (prefix increase)
                 presum[i] - sufsum[i+1] = -1*d
*/
class Solution {
public:
    int waysToPartition(vector<int>& nums, int k) {
        int n = nums.size(); 
        
    // store prefix and suffix sum
        vector<long long> presum(n,0), sufsum(n,0);
        presum[0]=nums[0];  sufsum[n-1]=nums[n-1];
        for(int i=1; i<n; i++)
        {
            presum[i] = presum[i-1] + nums[i];
            sufsum[n-1-i] = sufsum[n-i] + nums[n-1-i];
        }
        
        // store the count of differences in the map if nums[i] changes to k
        unordered_map<long long, int> leftd, rightd;
        //initially store the differences in the hashmap right
        for(int i=0; i<n-1; i++)
            rightd[presum[i]-sufsum[i+1]] += 1;
        
        int ans=0;
        // if no nums[i] is changed such that diff is zero (presum[i]-sufsum[i+1]=0)
        if(rightd.count(0))
            ans = rightd[0];
        
        // if nums[j] is changed, then find count of pivots
        for(int j=0; j<n; j++)
        {
            long long diff = k - nums[j];
            int cur=0;
            if(leftd.count(diff))
                cur += leftd[diff];
            if(rightd.count(-diff))
                cur += rightd[-diff];
            
            //update ans if improvements
            ans = max(ans, cur);
            
            // transfer diff from right to left;
            if(j<n-1)
            {
                long long dd = presum[j] - sufsum[j+1];
                leftd[dd]++;
                if(--rightd[dd]==0) rightd.erase(dd);
            }
        }
        return ans;
    }//
};