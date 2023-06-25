/*
https://leetcode.com/problems/minimum-cost-to-make-array-equal/
*/

/*

*/
class Solution {
public:
    vector<pair<int,int>> numsAndCost;
    int n;
    long long minCost(vector<int>& nums, vector<int>& cost) {
        n = nums.size();  
        // return usingPrefixSum(nums, cost);
        return usingBinarySearch(nums, cost);
    }
    
    //a linear combination (with non-negative coefficients) of convex functions is convex.
    long long usingBinarySearch(vector<int>& nums, vector<int>& cost) { 
        long long ans = getCost(nums, cost, nums[0]);
        auto mnmx = minmax_element(nums.begin(), nums.end());
        int left = *mnmx.first, right = *mnmx.second;
        
        while(left<right){
            int mid = (left+right)/2;
            long long cost1 = getCost(nums, cost, mid);
            long long cost2 = getCost(nums, cost, mid+1);
            ans = min(cost1, cost2);
            if(cost1 > cost2)
                left = mid+1;
            else
                right = mid;
        }
        
        return ans;
    }//
    
    long long getCost(vector<int>& nums, vector<int>& cost, int base){
        long long totalCost = 0;
        for(int i=0; i<n; i++){
            totalCost += (long long)cost[i] * abs(nums[i] - base);
        }
        return totalCost;
    }
    
    long long usingPrefixSum(vector<int>& nums, vector<int>& cost) { 
        numsAndCost.resize(n);
        for(int i=0; i<n; i++){
            numsAndCost[i].first = nums[i]; numsAndCost[i].second = cost[i];
        }
        sort(numsAndCost.begin(), numsAndCost.end());
        
        //prefix sum array of the costs
        vector<long> prefixCost(n); prefixCost[0] = numsAndCost[0].second;
        for(int i=1; i<n; i++)
            prefixCost[i] = numsAndCost[i].second + prefixCost[i-1];
        
        //nums[0] as a base
        long long totalCost = 0;
        for(int i=1; i<n; i++){
            totalCost += (long long)numsAndCost[i].second*(numsAndCost[i].first - numsAndCost[0].first);
        }
        
        long long ans = totalCost;
        
        // nums[i] from i = 1, 2 and so on
        
        for(int i=1; i<n; i++){
            int gap = numsAndCost[i].first - numsAndCost[i-1].first;
            totalCost += prefixCost[i-1]*gap;
            totalCost -= (prefixCost[n-1] - prefixCost[i-1])*gap; //suffix
            ans = min(ans, totalCost);
        }
        
        return ans;
    }
};