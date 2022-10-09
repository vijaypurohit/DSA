/*
https://leetcode.com/problems/binary-tree-inorder-traversal/
94. Binary Tree Inorder Traversal

https://practice.geeksforgeeks.org/problems/inorder-traversal-iterative/0/#
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

vector<int> ans1;

void inorder (TreeNode* root)
{
    if(!root) return;
    inorder(root->left);
    ans1.push_back(root->val);
    inorder(root->right);
}

class Solution {
public:
    /*
    vector<int> inorderTraversal_IterativeStack(TreeNode* root) {
        if(root==nullptr)
            return {};
            
        stack<TreeNode*> st;
        vector<int> ans;
        TreeNode* cur = root;
        
        while(cur || !st.empty())
        {
            while(cur)
            {
                st.push(cur);
                cur = cur->left;
            }
            cur = st.top(); st.pop();
            ans.push_back(cur->val);
            cur = cur->right;
        }
        
        return ans;
    }
    
    vector<int> inorderTraversal_modifiedStack(TreeNode* root) {
        stack<TreeNode*> st;
        vector<int> ans;
        st.push(root);
        
        while(!st.empty())
        {
            TreeNode* t = st.top();   
            if(t->left)
            {    
                st.push(t->left);
                t->left=nullptr;
                continue;
            } 
            ans.push_back(t->val);
            st.pop(); 
            if(t->right)
            {
                st.push(t->right);
                t->right = nullptr;
                // continue;
            } 
        } 
        return ans;
    }
    */
    vector<int> morrisTraversal_Inorder(TreeNode* root)
    {
        vector<int> ans;
        TreeNode* cur = root;
        TreeNode* pre;
        while(cur)
        {
            if(cur->left == nullptr)
            {
                ans.push_back(cur->val);
                cur=cur->right;
            }
            else // has left sub-tree
            {
                pre = cur->left;
                while(pre->right != nullptr and pre->right != cur)
                    pre = pre->right;
                /* non-modification
                if(pre->right == nullptr){
                    pre->right = cur;
                    cur=cur->left;
                }
                else{
                    pre->right = nullptr;
                    ans.push_back(cur->val);
                    cur = cur->right;
                }
                */
                //   modification
                pre->right = cur;
                cur = cur->left;
                pre->right->left = nullptr; //avoid infinte loop
            }
        }
        return ans;
    }
    vector<int> inorderTraversal(TreeNode* root) {
        if(!root)
            return {}; 
       //  ans1.clear(); inorder(root); return ans1; // recursive stack
        // return inorderTraversal_IterativeStack(root);
        // return inorderTraversal_modifiedStack(root);
        return morrisTraversal_Inorder(root);
    }
};