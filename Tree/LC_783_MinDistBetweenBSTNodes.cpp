/*
https://leetcode.com/problems/minimum-distance-between-bst-nodes/
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
    vector<int> nodes;
    
    void inorderTraversal(TreeNode* root)
    {
        if(!root) return;
        inorderTraversal(root->left);
        // nodes.push_back(root->val);
        if(prev)
            minDist = min(minDist, root->val - prev->val);
        prev = root;
        inorderTraversal(root->right);
    }
    
    int minDist = INT_MAX;
    TreeNode* prev;
    int minDiffInBST(TreeNode* root) {
        inorderTraversal(root);
        return minDist;
    }
    
//      int minDiffInBST(TreeNode* root) {
//         inorderTraversal(root);
//         int minDist = INT_MAX;
        
//         for(int i=1; i<nodes.size(); i++)
//             minDist = min(minDist, nodes[i]-nodes[i-1]);
        
//         return minDist;
//     }
};