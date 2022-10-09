/*
124. Binary Tree Maximum Path Sum
https://leetcode.com/problems/binary-tree-maximum-path-sum/
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
    
    
    int maxPathSum(TreeNode* root) {
        int ans=INT_MIN;
        dfs(root, ans);
        return ans;
    }//end
    
    
    int dfs(TreeNode* root, int &ans)
    {
        if(!root) return 0; 
        int left_sum = dfs(root->left, ans);
        int right_sum = dfs(root->right, ans);
        
        if(left_sum > 0 and right_sum>0)
            ans = max(ans, root->val + left_sum + right_sum);
        else if(left_sum > 0 or right_sum>0)
            ans = max(ans, root->val + max(left_sum,right_sum));
        else
        {
            ans = max(ans, root->val);
            return root->val;
        } 
        // cout<<left_sum<<" "<<right_sum<<" "<<root->val<<endl;
         
        return root->val + max(left_sum,right_sum);
    }
};