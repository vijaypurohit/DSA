/*
https://leetcode.com/problems/zigzag-conversion/
*/

class Solution {
public:
    int n;
    string convert(string s, int numRows) {
        if(numRows == 1)
            return s;
        n = s.size(); // num of characters
        // return usingMatrix(s, numRows);
        return usingTraversal(s, numRows);
    }
    
    string usingTraversal(string &s, int numRows)
    {
        string ans="";
        int charsInSection = 2*(numRows - 1);
        
        for(int curRow=0; curRow<numRows; ++curRow)
        {
            int idx = curRow;
            
            while(idx < n)
            {
                ans += s[idx];
                //if CurRow is not first or last row then add one more char
                if(curRow != 0 and curRow != numRows-1)
                {
                    int charsInBetween = charsInSection - 2*curRow;
                    int secIdx = idx + charsInBetween;
                    if(secIdx < n) //otherwise space
                        ans+=s[secIdx];
                }
                idx += charsInSection;
            } 
        } 
        return ans;
    }
    
    string usingMatrix(string &s, int numRows)
    {
        //find dim of matrix 
        int sections = ceil( n / (2*numRows - 2.0)); // numChar / chars in one section(one col + zig dig)
        int numCols = sections*(numRows-1); //each section has numRows-1 cols
        vector<vector<char>> matrix(numRows, vector<char>(numCols, ' '));
        
        int curRow = 0, curCol = 0;
        int curSidx=0;
        
        // store into matrix
        while(curSidx<n)
        {
            //move down
            while(curRow < numRows and curSidx < n)
            {
                matrix[curRow][curCol] = s[curSidx];
                curSidx++; curRow++;
            }
            curCol++; //shift right
            curRow -=2;
            //move up
            while(curRow>0  and  curSidx<n)
            {
                matrix[curRow][curCol] = s[curSidx];
                curRow--; curCol++; curSidx++;
            }
        }
        
        // construct ans
        string ans="";
        for(auto& row: matrix) {
            for(auto &ch: row)
                if(ch != ' ')
                    ans+=ch;
        }
        return ans;
    }
};