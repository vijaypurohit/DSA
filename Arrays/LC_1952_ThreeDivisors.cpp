/*
https://leetcode.com/problems/three-divisors/
*/

class Solution {
public:
    //brute force
    bool isThree_1(int n) {
        int d = 2; // 1 and n
        for(int i=2; i<n and d<=3; i++)
            d+= (n%i==0);
        return d==3; // for avoid n==1;
    }
    
    bool isThree(int n) {
    unordered_set<int> p2 = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101 };
    return (int)sqrt(n) * sqrt(n) == n && p2.count(sqrt(n));
        //perfect square and prime
}
};