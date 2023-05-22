/*
https://leetcode.com/problems/minimum-time-to-complete-trips/
*/
class Solution {
public:
    int n, totalTrips;
    long long minimumTime(vector<int>& time, int totalTrips) {
        n = time.size();
        this->totalTrips = totalTrips;
         
        long long low=1, high = 1e14, mid=0;
        while(low <= high)
        {
            mid = low + (high-low)/2;
            if(isFeasible(mid, time)) 
                high = mid-1; 
            else 
                low = mid+1; 
        }
        return high+1;
    }
    
    // How many trips we can complete within this givenTime
    bool isFeasible(long long& givenTime, vector<int>& arr){
        long long completedTrips = 0; 
        for(int i=0; i<n; i++){ 
            completedTrips += givenTime/arr[i]; 
            if(completedTrips >= totalTrips) 
                return true; 
        }
        return completedTrips >= totalTrips;
    }
};