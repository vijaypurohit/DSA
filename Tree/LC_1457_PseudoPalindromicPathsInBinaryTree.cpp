/*
1457. Pseudo-Palindromic Paths in a Binary Tree
https://leetcode.com/problems/pseudo-palindromic-paths-in-a-binary-tree/
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
    int pseudoPalindromicPaths (TreeNode* root) {
        // int ans=0;
        // vector<int> freq(10, 0);
        // solve(root, freq, ans);
        // return ans;
        
        return rec(root);
        
    }//
    
    int rec(TreeNode* root, int count=0)
    {
        if(!root) return 0;
        count ^= 1<<(root->val-1);
        int res = rec(root->left, count) + rec(root->right, count);
        if(root->left == nullptr and root->right == nullptr and (count & (count-1)) == 0)
            res++;
        return res;
            
    }
    
    void solve(TreeNode* root, vector<int>& freq, int& ans)
    {
        if(!root) return;
        freq[root->val]++;
         
        solve(root->left, freq, ans);
        solve(root->right, freq, ans);
        
        if(root->left==nullptr and root->right == nullptr)
        {
            int oddFreq=0;
            for(int i=1; i<=9; i++)
            {
                if(freq[i]%2 == 1)
                    oddFreq++; 
            }
            if(oddFreq<=1) ans++;   
        }
        
        freq[root->val]--;
    }
};