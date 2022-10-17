/*
https://leetcode.com/problems/find-a-peak-element-ii/
*/
class Solution {
public:
    int rows, cols;
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        rows = mat.size();
        cols = mat[0].size();
        int leftCol=0, rightCol=cols-1, midCol;
        while(leftCol<=rightCol)
        {
            midCol = (leftCol + rightCol)/2;
            int rIdOfMaxInCol = 0;
            for(int r=0; r<rows; r++)
            {
                if(mat[rIdOfMaxInCol][midCol] < mat[r][midCol])
                    rIdOfMaxInCol = r;
            }
            
            bool leftIsBig = midCol-1>=leftCol and mat[rIdOfMaxInCol][midCol-1] > mat[rIdOfMaxInCol][midCol];
            bool rightIsBig = midCol+1<=rightCol and mat[rIdOfMaxInCol][midCol] < mat[rIdOfMaxInCol][midCol+1];
            if(leftIsBig == false and rightIsBig == false)
                return {rIdOfMaxInCol, midCol};
            else if(rightIsBig)
                leftCol = leftCol+1;
            else
                rightCol = rightCol-1;
            
        }
        return {-1, -1};
    }
};