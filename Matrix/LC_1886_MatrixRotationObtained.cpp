/*
1886. Determine Whether Matrix Can Be Obtained By Rotation

https://leetcode.com/problems/determine-whether-matrix-can-be-obtained-by-rotation/
*/
class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        if(mat ==  target)
            return true; // rotation by 0 deg or 360 deg
        
        int n = mat.size();
        // rotation by 90, 180, 270
        int rot = 3;
        while(rot--)
        {
            // tranpose then reverse
            for(int i=0; i<n ; i++)
            {
                for(int j=0; j<i; j++)
                    swap(mat[i][j], mat[j][i]);
            }
            for(int i=0; i<n; i++)
                reverse(mat[i].begin(), mat[i].end());
            
            if(mat == target) return true;
        }
        
        return false;
    }
};