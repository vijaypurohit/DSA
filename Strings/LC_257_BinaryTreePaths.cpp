/*
https://leetcode.com/problems/binary-tree-paths/
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
    vector<string> binaryTreePaths(TreeNode* root) {
        solve(root, "");
        return ans;
    }//
    vector<string> ans;
    void solve(TreeNode* root, string path)
    {
        if(!root)  return; 
        path += to_string(root->val);
        if(root->left || root->right)
            path += "->";
        
        if(root->left) solve(root->left, path);
        if(root->right) solve(root->right, path);
        
        if(!root->left and !root->right)
            ans.push_back(path); 
    }
};