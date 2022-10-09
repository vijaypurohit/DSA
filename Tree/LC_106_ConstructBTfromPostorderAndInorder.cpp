/*
106. Construct Binary Tree from Inorder and Postorder Traversal 
https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/
https://practice.geeksforgeeks.org/problems/tree-from-postorder-and-inorder/1
*/

class Solution {
public:
    unordered_map<int,int> hash;
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) { 
        int n = postorder.size();
        int pid = n-1;
        for(int i = 0; i<n; i++)
            hash[inorder[i]] = i;
        return construct(0, n-1, inorder, postorder, pid);
    }//end buildTree
     
    TreeNode* construct(int s, int e, vector<int>& inorder, vector<int>& postorder, int &pid)
    {
        if(s>e) return nullptr;
        
        TreeNode* root = new TreeNode(postorder[pid]);
        // int mid=0;
        // for(mid=s; mid<=e; mid++)
        //     if(inorder[mid]==root->val)
        //         break;
        int mid = hash[postorder[pid]];
        pid--;
        
        root->right = construct(mid+1, e, inorder, postorder, pid);
        root->left = construct(s, mid-1, inorder, postorder, pid);
        return root;
    }
    
};



//GFG----------------------------------------------------
int p;
Node* bt(int in[],int post[], int s, int e)
{
    if(s>e) return nullptr;
    
    Node* root = new Node(post[p--]);
    
    int idx = 0;
    for(idx=s; idx<=e; idx++){
        if(in[idx] == root->data)
            break;
    }
    // cout<<idx<<". "<<root->data<<endl;
    root->right = bt(in, post, idx+1, e); 
    root->left = bt(in, post, s, idx-1);
    return root;
}
    
//Function to return a tree created from postorder and inoreder traversals.
Node *buildTree(int in[], int post[], int n) {
    if(n==0)
        return nullptr;
    // p=n-1;
    // return bt(in, post, 0, n-1);
    
    Node* root = new Node(post[n-1]);
        
    int idx = 0;
    for(; idx<n; idx++)
    {
        if(in[idx] == root->data)
            break;
        
    }
    // cout<<idx<<". "<<root->data<<endl;
    root->left = buildTree(in, post, idx);
    root->right = buildTree(in+idx+1, post+idx, n-idx-1); 
    return root;
}