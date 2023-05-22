/*
https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/
*/

class Solution {
public:
    double average(vector<int>& salary) {
        int sum = 0, mn = INT_MAX, mx = INT_MIN;
        for(const int& sal: salary){
            sum += sal;
            mn = min(sal, mn);
            mx = max(sal, mx);
        }
        
        return (1.0*sum - mx - mn)/(salary.size() - 2);
    }
};