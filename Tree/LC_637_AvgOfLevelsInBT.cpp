/*
https://leetcode.com/problems/average-of-levels-in-binary-tree/
637. Average of Levels in Binary Tree

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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        
        queue<TreeNode*> q; q.push(root);
        
        while(!q.empty())
        {
            int sz = q.size();
            double val = 0; 
            for(int i=0; i<sz; i++)
            {
                TreeNode* node = q.front(); q.pop();
                val += node->val;
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
            }
            ans.push_back(val/sz);
        }
        
        return ans;
    }
};