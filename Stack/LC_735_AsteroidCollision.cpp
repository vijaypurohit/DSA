/*
https://leetcode.com/problems/asteroid-collision/
*/

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n = asteroids.size();
        vector<int> ans;
        ans.push_back(asteroids[0]);
        int l, r; 
        for(int i=1; i<n; i++)
        { 
            r = asteroids[i];
            bool isRight = (!ans.empty() and ans.back()>0);
            bool isLeft = (asteroids[i]<0);
            
            if(isLeft and isRight)
            {
                if(ans.back() == abs(r))
                     ans.pop_back();
                else if(ans.back() < abs(r))
                {
                    ans.pop_back();
                    // ans.push_back(r);
                    i--;
                }
            }  
            else
                ans.push_back(r);
        }
        
        return ans;
    }
};