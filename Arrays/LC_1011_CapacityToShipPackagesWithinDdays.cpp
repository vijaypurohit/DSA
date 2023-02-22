/*
https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/
*/

class Solution {
public:
    int n ;
    int shipWithinDays(vector<int>& weights, int days) {
        n = weights.size();
        
        int low=0,high=0, mid=0; // low = maxLoad, high = summation of all weigths (max possible ship capacity to deliver in one day)
        for(int wt: weights)
        {
            if(wt > low) low = wt;
            high += wt;
        }
        
        int ans = -1;
        while(low <= high)
        {
            mid = low + (high-low)/2; // mid is the possible answer for ship capacity but we have to check
            
            if(isFeasible(mid, weights, days)) {
                 ans = mid;
                 high = mid-1;
            }
            else {
                low = mid+1;
            }
            
        }
        return ans;
    }
    
    bool isFeasible(int shipCapacity, vector<int>& weights, int days)
    {
        int daysNeeded=1, curLoad=0; 
        for(int wt: weights)
        {
            curLoad += wt;
            if(curLoad > shipCapacity)
            {
                daysNeeded++;
                curLoad = wt;
            }
        }
        return daysNeeded <= days;
    }
    
    // bool isFeasible(int shipCapacity, vector<int>& weights, int days)
    // {
    //     int i=0, curLoad=0; 
    //     while(i<n)
    //     {
    //         if(curLoad + weights[i] <= shipCapacity)
    //         {
    //             curLoad += weights[i];
    //             i++;
    //         }
    //         else
    //         {
    //             days--; // used one day
    //             // cout<<shipCapacity<<" -- "<<dayWeight<<" "<<days<<endl;
    //             curLoad=0; 
    //         }
    //     }
    //      // cout<<shipCapacity<<" F "<<dayWeight<<" "<<days<<endl;
    //     return days>=1;
    // }
};