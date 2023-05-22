/*
https://leetcode.com/problems/construct-quad-tree/
*/
/*
// Definition for a QuadTree node.
class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;
    
    Node() {
        val = false;
        isLeaf = false;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = _topLeft;
        topRight = _topRight;
        bottomLeft = _bottomLeft;
        bottomRight = _bottomRight;
    }
};
*/

/*
TC: O(N^2.logN)
After every level of recursion the original length of matrix get reduced to half, this implies that the size of matrix will reduced down to one after 
logN iterations. At each of these logN iterations, we will have some number of recursive calls for the current matrix size.

node ---> four childrens [VAL, isLeaf]
VAL ---> isLeaf(True) --> 1 (all 1s in grid)
                      --> 0 (all 0s in grid)
    ---> isLeaf (false) --> can be 1 or 0
isLeaf ---> true (if cur grid has same value)
*/

class Solution {
public: 
    Node* construct(vector<vector<int>>& grid) { 
        // return solve(0,0, grid, grid.size()); // in base condition check all values are same or not
        return solveOptimised(0,0, grid, grid.size());// first iterate and then check.
    }
    
    Node* solveOptimised(int x, int y, vector<vector<int>>& grid, int length)
    {
        if(length == 1)
            return new Node(grid[x][y], true);
         
        int newlen = length/2;
        Node *topLeft = solve(x, y, grid, newlen);
        Node *topRight = solve(x, y + newlen, grid, newlen);
        Node *bottomLeft = solve(x+newlen, y, grid, newlen);
        Node *bottomRight = solve(x+newlen, y + newlen, grid, newlen);
        
        if(topLeft->isLeaf and topRight->isLeaf and bottomLeft->isLeaf and bottomRight->isLeaf and
          topLeft->val == topRight->val and bottomLeft->val == bottomRight->val and
          topRight->val == bottomLeft->val)
            return new Node(topLeft->val, true);
        
        return new Node(false, false, topLeft, topRight, bottomLeft, bottomRight);
    }
    
    Node* solve(int x, int y, vector<vector<int>>& grid, int length)
    {
        if(sameValue(x, y, grid, length))
            return new Node(grid[x][y], true);
        
        Node *newNode = new Node(false, false); // val, isLeaf
        int newlen = length/2;
        newNode->topLeft = solve(x, y, grid, newlen);
        newNode->topRight = solve(x, y + newlen, grid, newlen);
        newNode->bottomLeft = solve(x+newlen, y, grid, newlen);
        newNode->bottomRight = solve(x+newlen, y + newlen, grid, newlen);
        return newNode;
    }
    
    bool sameValue(int x, int y, vector<vector<int>>& grid, int length)
    { 
        for(int i = x; i< (x+length); i++) {
            for(int j=y; j< (y+length); j++) {
                if(grid[x][y] != grid[i][j])
                    return false;
            }
        }
        return true;
    }
};