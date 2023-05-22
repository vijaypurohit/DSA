/*
https://leetcode.com/problems/longest-zigzag-path-in-a-binary-tree/
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int ans=0;
    int longestZigZag(TreeNode* root) {
        dfs(root, true, 0);
        dfs(root, false, 0);
        return ans;
    }
    
    void dfs(TreeNode* node, bool goLeft, int steps){
        if(node == nullptr){
            return;
        }
        
        ans = max(ans, steps);
        if(goLeft){
            dfs(node->left, false, steps+1); // left me gye then right me jao
            dfs(node->right, true, 1); // left me na jake right me jaa rhe to nai shurat, left me jana hai fhir
        }else{ 
            dfs(node->right, true, steps+1);
            dfs(node->left, false, 1);
        }
    }
};