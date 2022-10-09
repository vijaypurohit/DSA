/*
https://leetcode.com/problems/add-one-row-to-tree/
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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth == 1) 
            return (new TreeNode(val, root, nullptr));
        
        TreeNode* ptr;
        queue<TreeNode*> q; q.push(root);
        
        while(!q.empty())
        {
            int size = q.size();
            depth--;
            while(size--)
            {
                ptr = q.front(); q.pop();
                if(depth == 1)
                {
                    TreeNode* newleft = new TreeNode(val, ptr->left, nullptr);
                    TreeNode* newright = new TreeNode(val, nullptr, ptr->right);
                    ptr->left = newleft;
                    ptr->right = newright; 
                }
                else
                {
                    if(ptr->left) q.push(ptr->left);
                    if(ptr->right) q.push(ptr->right);
                }
            }
            if(depth == 1) break;
        }
        return root;
    }
};