/*
129. Sum Root to Leaf Numbers

https://leetcode.com/problems/sum-root-to-leaf-numbers/
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
    
    int sumNumbers(TreeNode* root) { 
        int ans=0;
        dfs(root, 0, ans);
        return ans;
    }//end
    
    void dfs(TreeNode* root, int csum, int& ans)
    {
        if(!root) return;
        csum = csum*10 + root->val; 
        if(!root->left and !root->right)
        {
            ans+=csum;
            return;
        }
        
        if(root->left) dfs(root->left, csum, ans);
        if(root->right) dfs(root->right, csum, ans); 
    }
};