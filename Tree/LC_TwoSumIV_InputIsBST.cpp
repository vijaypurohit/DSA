/*
https://leetcode.com/problems/two-sum-iv-input-is-a-bst/
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
    int target;
    unordered_set<int> hash;
    bool findTarget(TreeNode* root, int k) {
        // target = k;
        // return solve(root);
        if(!root) return false;
        if(hash.count(k-root->val))
            return true;
        hash.insert(root->val);
        return findTarget(root->left, k) || findTarget(root->right, k);
    }
    
    bool solve(TreeNode* root)
    {
        if(!root) return false;
        
        if(hash.find(target-root->val) != hash.end())
            return true;
        else
            hash.insert(root->val);
        
        if(root->left and solve(root->left))
            return true;
        if(root->right and solve(root->right))
            return true;
        return false;
    }
};