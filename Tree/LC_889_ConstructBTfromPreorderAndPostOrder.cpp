/*
889. Construct Binary Tree from Preorder and Postorder Traversal

https://leetcode.com/problems/construct-binary-tree-from-preorder-and-postorder-traversal/
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
/*
(1) First element of preorder is root of the tree
(2) Find the left subtree for this Node
Hint : the second element in preorder of that Root Node always be left node of root. This (second element of preorder) node is lying after all the elements of left subtree in postorder vector ( because of it's arrangement in postorder)
(3) Now we have to find the right subtree for this node
Hint : all the element of right side of the left element (which we use to make left subtree) in postorder make the right subtree.

preid for preorder array traversal making as root node
left child = value at preid+1;
right child = postorder_index_of(value at pre_id) - 1;
*/
    unordered_map<int,int> hash;
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) { 
        int n = postorder.size();
        int preid = 0;
        for(int i = 0; i<n; i++)
            hash[postorder[i]] = i;
        return construct(0, n-1, preorder, postorder, preid);
    }
    
    TreeNode* construct(int post_s, int post_e, vector<int>& preorder, vector<int>& postorder, int &preid)
    {
        if(post_s > post_e) return nullptr;
        // cout<<post_s<<" "<<post_e<<" "<<preid<<endl;
        TreeNode* root = new TreeNode(preorder[preid++]); 
        if(post_s == post_e) return  root;  // single node
 
        int left_idx = hash[preorder[preid]]; // postorder telling how many on left side
        
        root->left = construct(post_s, left_idx, preorder, postorder, preid);
        root->right = construct(left_idx+1, post_e-1, preorder, postorder, preid);
        return root;
    }
};