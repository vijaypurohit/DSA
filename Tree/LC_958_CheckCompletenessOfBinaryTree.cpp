/*
https://leetcode.com/problems/check-completeness-of-a-binary-tree/
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
    bool isCompleteTree(TreeNode* root) {
        if(!root)
            return true;
        
        queue<TreeNode*> q;
        q.push(root);
        
        bool nullSeen = false;
        
        while(!q.empty()){ 
            auto node = q.front(); q.pop(); 
            if(nullSeen and node)
                return false;

            if(!node){
                nullSeen = true; 
                continue;
            }

            q.push(node->left);
            q.push(node->right); 
        }
        return true;
    }
};