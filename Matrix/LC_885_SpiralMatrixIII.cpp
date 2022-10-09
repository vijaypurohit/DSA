/*
885. Spiral Matrix III
https://leetcode.com/problems/spiral-matrix-iii/

Ref:
https://leetcode.com/submissions/detail/780524490/
*/


class Solution {
public:
    // east, 
    vector<pair<int,int>> dirs = {{0,1},{1,0},{0,-1},{-1,0}};
    vector<vector<int>> spiralMatrixIII_step1(int rows, int cols, int rStart, int cStart) {
        int i=rStart, j = cStart;
        int total = rows*cols;
        vector<vector<int>> ans ={{i,j}};
        total--;
        int len=0; // length of the steps  1, 1, 2, 2, 3, 3, 
        int d=0; // direction
        
        while(total)
        {
            // in each direction, calculate step size then run till that step size in that direction
            
            if(d==0 or d==2) // if direction is east or west increase len
                len++;
            
            for(int k=0; k<len; k++)
            {
                i += dirs[d].first;
                j += dirs[d].second;
                if(i<0 or j<0 or i>= rows or j>= cols ) continue;
                ans.push_back({i, j});
                total--;
            }
            d = (d+1)%4;
        }
        return ans;
    }
    
    vector<vector<int>> spiralMatrixIII_step2(int rows, int cols, int rStart, int cStart) {
        int r=rStart, c = cStart;
        int total = rows*cols;
        vector<vector<int>> ans ={{r,c}};
        
        int dx = 0, dy = 1, tmp;
        
        for(int n=0; ans.size()<total; n++)
        {
            int step_size = n/2+1;
            for(int step=0; step<step_size; step++)
            {
                r+=dx;
                c+=dy;
                if(r>=0 and c>=0 and r<rows and c<cols)
                    ans.push_back({r,c});
            }
            tmp = dx, dx = dy, dy = -tmp;
        }
        
        return ans;
    }
    
     vector<vector<int>> spiralMatrixIII (int rows, int cols, int rStart, int cStart) {
        // return spiralMatrixIII_step1(int rows, int cols, int rStart, int cStart);
        // return spiralMatrixIII_step2(int rows, int cols, int rStart, int cStart);
 
         int total = rows*cols;
        vector<vector<int>> ans;
        
        int left=cStart, right=cStart+1;
        int top=rStart, bottom=rStart;
        
        int i, j; 
        int direction=0;
        
        auto rangeCheck = [&] (int& i, int& j) {
            if( i<0 or j<0 or i>=rows or j>=cols)
                return false;
            return true;
        };
        
        while(total)
        {
            if(direction==0)
            {
                for(i=top, j=left; j<=right; j++){
                    if(rangeCheck(i, j))
                    {
                        total--;
                        ans.push_back({i, j});
                    } 
                }
                top--;
                bottom++;
                direction = 1;
            }
            else if(direction==1)
            {
                for(i=top+2, j=right; i<=bottom; i++)
                {
                    if(rangeCheck(i, j))
                    {
                        total--;
                        ans.push_back({i, j});
                    }
                }
                right++;
                left--;
                direction = 2;
            }
            else if(direction==2)
            {
               for(i=bottom, j=right-2; j>=left; j--){
                    if(rangeCheck(i, j))
                    {
                        total--;
                        ans.push_back({i, j});
                    }
                }
                direction=3;
            }
            else 
            {
               for(i=bottom-1, j = left; i>top; i--)
                {
                    if(rangeCheck(i, j))
                    {
                        total--;
                        ans.push_back({i, j});
                    }
                }
                direction =0;
            } 
        }
        
        return ans;
    }
};