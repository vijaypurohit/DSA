/*
https://leetcode.com/problems/water-bottles/
*/
class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        //recursive
        if(numBottles < numExchange)
            return numBottles;
        else
        {
            return numExchange + numWaterBottles( numBottles-numExchange+1, numExchange);
        }
        
        //iterative
        int ans = numBottles;
        while(numBottles >= numExchange)
        {
            int remainedFullBottle = numBottles % numExchange;
            int newFullBottle = numBottles / numExchange;
            ans += newFullBottle;
            numBottles = remainedFullBottle+newFullBottle;
        }
        return ans;
    }
};