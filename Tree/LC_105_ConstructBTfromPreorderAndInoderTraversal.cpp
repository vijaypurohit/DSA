/*
105. Construct Binary Tree from Preorder and Inorder Traversal
https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/
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
    unordered_map<int,int> hash;
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
         int n = preorder.size();
        int pid = 0;
        for(int i = 0; i<n; i++)
            hash[inorder[i]] = i;
        return construct(0, n-1, inorder, preorder, pid);
    }//
    
    TreeNode* construct(int s, int e, vector<int>& inorder, vector<int>& preorder, int &pid)
    {
        if(s>e) return nullptr;
        
        TreeNode* root = new TreeNode(preorder[pid]);
        // int mid=0;
        // for(mid=s; mid<=e; mid++)
        //     if(inorder[mid]==root->val)
        //         break;
        int mid = hash[preorder[pid]];
        pid++;
        
        root->left = construct(s, mid-1, inorder, preorder, pid);
        root->right = construct(mid+1, e, inorder, preorder, pid);
        return root;
    }
};


//GFG -------------------------------------------
Node* buildTree(int in[],int pre[], int n)
    {
        if(n==0)
            return nullptr;
        // return bt(in, pre, 0, n-1);
        
        Node* root = new Node(pre[0]);
        
        int idx = 0;
        for(; idx<n; idx++)
        {
            if(in[idx] == root->data)
                break;
            
        }
        // cout<<idx<<". "<<root->data<<endl;
        root->left = buildTree(in, pre+1, idx);
        root->right = buildTree(in+idx+1, pre+1+idx, n-idx-1); 
        return root;
    }
    int p=0;
    Node* bt(int in[],int pre[], int s, int e)
    {
        if(s>e)
            return nullptr;
        
        Node* root = new Node(pre[p++]);
        
        int idx = 0;
        for(idx=s; idx<=e; idx++)
        {
            if(in[idx] == root->data)
                break;
            
        }
        // cout<<idx<<". "<<root->data<<endl;
        root->left = bt(in, pre, s, idx-1);
        root->right = bt(in, pre, idx+1, e); 
        return root;
    }
};