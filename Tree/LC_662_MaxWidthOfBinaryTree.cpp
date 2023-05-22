/*
https://leetcode.com/problems/maximum-width-of-binary-tree/
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
    int widthOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        
        int ans=0;
        queue<pair<TreeNode*, unsigned int>> q; q.emplace(root, 0); // {node, node index}
        
        while(!q.empty()){
            unsigned int sz = q.size();
            unsigned int leftIdx=q.front().second, rightIdx=q.back().second; 
            ans = max(ans, (int)(rightIdx - leftIdx+1));
            
            while(sz--){ 
                auto [node, oldidx] = q.front(); q.pop(); 
                unsigned int newidx = oldidx - leftIdx;  // to prevent signed overflow, reseting index at each level
                
                if(node->left) q.emplace(node->left, 2*newidx+1);
                if(node->right) q.emplace(node->right, 2*newidx+2);
            }
        }
        return ans;
    }
};