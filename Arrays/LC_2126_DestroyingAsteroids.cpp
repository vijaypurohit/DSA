/*
https://leetcode.com/problems/destroying-asteroids/
*/

class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(begin(asteroids), end(asteroids));
        int n = asteroids.size();
        for(int i=0; i<n; i++)
        {
            if(mass > 100000) return true;
            if(mass>=asteroids[i])
                mass += asteroids[i];
            else
                return false;
        }
        return true;
    }
};