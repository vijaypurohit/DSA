/*
814. Binary Tree Pruning
https://leetcode.com/problems/binary-tree-pruning/
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
    TreeNode* pruneTree(TreeNode* root) {
        
        // int sum=recursion(root);
        // if(sum==0)
        //     return nullptr;
        // else
        //     return root;
        
        if(!root) return nullptr;
        root->left = pruneTree(root->left);
        root->right = pruneTree(root->right);
        if(root->left == nullptr and root->right == nullptr and root->val == 0)
            return nullptr;
        return root;
    }//
     
    
    int recursion(TreeNode* root)
    {
        if(!root) return 0;
        int left=0, right=0;
        if(root->left)
        {
            left = recursion(root->left);
            if(left == 0) root->left = nullptr;
        }
        if(root->right)
        {
            right = recursion(root->right);
            if(right==0) root->right = nullptr;
        }
        
        int sum = left+right+root->val;
        if(sum==0) 
            return 0; 
        return sum;
        
    }
};