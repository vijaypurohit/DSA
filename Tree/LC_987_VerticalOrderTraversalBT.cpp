/*
https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/
https://practice.geeksforgeeks.org/problems/print-a-binary-tree-in-vertical-order/1#
Vertical Traversal of Binary Tree 
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
    vector<vector<int>> verticalTraversal(TreeNode* root) { 
        // return verticalBFS1(root);
        // return verticalBFS2(root);
        return verticalDFS2(root);
    }//
    
    void dfsTraversal (TreeNode* root, int x, int y, map<int, map<int, multiset<int>>>& order)
    {
        if(!root) return;
        order[x][y].insert(root->val);  
        if(root->left)
            dfsTraversal(root->left, x-1, y+1, order); 
        if(root->right)
            dfsTraversal(root->right, x+1, y+1, order); 
    }
    
    vector<vector<int>> verticalDFS2(TreeNode* root)
    {
        map<int, map<int, multiset<int>>> order;
        dfsTraversal(root, 0, 0, order); 
        vector<vector<int>> ans;  
        for(auto &p: order)
        {
            vector<int> col;
            for(auto &q: p.second)
                col.insert(col.end(), q.second.begin(), q.second.end());
            ans.push_back(col);
        }
        
        return ans;
    }
    
    vector<vector<int>> verticalBFS2(TreeNode* root) {
        map<int, map<int, multiset<int>>> order;
         
        queue<pair<TreeNode*, pair<int,int>>> q;
        q.push({root, {0,0}});
        
        while(!q.empty())
        { 
            TreeNode* node = q.front().first;
            auto [x, y] = q.front().second; q.pop();
            order[x][y].insert(node->val);  

            if(node->left)
                q.push({node->left, {x-1, y+1}});
            if(node->right)
                q.push({node->right, {x+1, y+1}});
        }
         
        vector<vector<int>> ans;  
        for(auto &p: order)
        {
            vector<int> col;
            for(auto &q: p.second)
                col.insert(col.end(), q.second.begin(), q.second.end());
            ans.push_back(col);
        }
        
        return ans;
    }//
    
    vector<vector<int>> verticalBFS1(TreeNode* root) {
        vector<vector<int>> ans; 
        unordered_map<int, vector<pair<int,int>>> order;
        
        int mn=0, coldist=0, rowdist=0, sz=0;
        TreeNode* node;
        queue<pair<TreeNode*, int>> q;
        q.push({root, 0});
        
        while(!q.empty())
        {
            sz = q.size();
            while(sz--)
            {
                node = q.front().first;
                coldist = q.front().second; q.pop();

                if(node->left)
                    q.push({node->left, coldist-1});
                if(node->right)
                    q.push({node->right, coldist+1});
                order[coldist].push_back({rowdist, node->val});
                mn = min(mn, coldist); 
            }
            rowdist++;
        }
        
        int order_size = order.size();
        for(int i=mn; i<order_size+mn; i++)
        {
            sort(order[i].begin(), order[i].end());
            vector<int> temp;
            for(int j=0; j<order[i].size(); j++)
                temp.push_back(order[i][j].second);
            ans.push_back(temp);
        }
        
        return ans;
    }//
    
};