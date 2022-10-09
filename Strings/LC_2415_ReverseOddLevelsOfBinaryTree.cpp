/*
https://leetcode.com/problems/reverse-odd-levels-of-binary-tree/
https://practice.geeksforgeeks.org/problems/reverse-alternate-levels-of-a-perfect-binary-tree/1
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
    TreeNode* reverseOddLevels(TreeNode* root) {
        
        /*
        dfs(root->left, root->right, 1);
        return root;
        */
        /*
        bfs(root);
        return root;
        */
        
        int level = 0;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty())
        {
            int sz = q.size();
            deque<TreeNode*> dq;
            while(sz--)
            {
                TreeNode* node = q.front(); q.pop();
                
                if(node->left)
                {
                    q.push(node->left);
                    if(level%2==0) dq.push_back(node->left);
                }
                if(node->right)
                {
                    q.push(node->right);
                    if(level%2==0) dq.push_back(node->right);
                }
            }
            level++;
            if(level%2 and dq.empty()==false)//odd
            {
                while(!dq.empty())
                { 
                    TreeNode* f = dq.front(); dq.pop_front();
                    TreeNode* b = dq.back(); dq.pop_back();
                    swap(f->val, b->val);
                }
            }
        }
        
        return root;
    }
    
    void bfs(TreeNode* root)
    {
        vector<TreeNode*> q{root};
        for(int level=0; q.empty()==false; level++)
        {
            vector<TreeNode*> temp;
            for(TreeNode* node: q){
                if(node->left) //perfect tree one check
                {
                    temp.push_back(node->left);
                    temp.push_back(node->right);
                }
            }
            swap(q, temp);
            if(level % 2) continue;
            for(int i=0, j= q.size()-1; i<j; i++, j--)
                swap(q[i]->val, q[j]->val);
        }
    }
    
    void dfs(TreeNode* root1, TreeNode* root2, int level)
    {
        if(!root1 or !root2)
            return;
        
        if(level%2 == 1)
        {
            swap(root1->val, root2->val);
        }
            
        dfs(root1->left, root2->right, level+1);
        dfs(root1->right, root2->left, level+1);
    }
};