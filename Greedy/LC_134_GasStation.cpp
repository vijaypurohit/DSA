/*
https://leetcode.com/problems/gas-station/
*/
class Solution {
public:
    int n;
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        n = gas.size();
        // return bruteforce(gas, cost);
        
        int fuel=0;
        int total_fuel=0;
        int start=0;
        for(int i=0; i<n; i++)
        {
            total_fuel += gas[i] - cost[i];
            fuel += gas[i] - cost[i];
            if(fuel < 0)
            {
                fuel = 0;
                start = i+1;
            }
        }
        // at some index k ( before k=(total_fuel-fuel) after k=(fuel) )
        return (total_fuel < 0) ? -1 : start;
    }
    
    int bruteforce(vector<int>& gas, vector<int>& cost)
    {
        for(int start=0; start<n; start++) // if we start at i'th station
        {
            int fuel=0; // current fuel
            int stopCnt=0; // stations covered
            int i=start; // start from station i'th loop var
            while(stopCnt<n)
            {
                fuel += gas[i%n] - cost[i%n]; // add gas of cur station and cost for traveling next station
                // now you are at next station
                if(fuel < 0) break;
                i++;
                stopCnt++;
            }
            if(stopCnt==n and fuel>=0) return start;
        }
        return -1;
    }
};