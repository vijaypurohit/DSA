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
/*
https://leetcode.com/problems/find-duplicate-subtrees/
*/

/*
 Approach 1
Let n denote the number of nodes.
Time complexity: O(n^2)
    The string representation of each subtree can have a length up to O(n). Creating each representation therefore costs up to O(n)  and we find string     representations for all O(n) subtrees during the traversal.
SC: O(n^2)
    We store all string representations in the hash map. There are O(n) subtrees, and each subtree representation has the length of O(n).
    
 Approach 2
 Time complexity: O(n)
 We traverse the tree with n nodes and, for each subtree, find a triplet and an ID. We perform operations with the hash maps tripletToID and cnt. Since an ID is an integer and a triplet has a length of 3 (O(1)), these operations take O(1) time for each of the n nodes.
 SC: O(n)
*/
class Solution {
public:
    vector<TreeNode*> ans;
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        // // Approach 1
        // tree2str(root); // 2nd way of serialising the tree to string. // serilise right subtree only if present
        // // serialize(root); // one way of serialising
        // // for(auto x: hash) cout<<x.first<<"\t-->\t"<<x.second<<endl; 
        // return ans;
        
        //Approach 2
        
        unordered_map<string,int> tripletToId;
        unordered_map<int,int> cnt;
        function<int(TreeNode*)> efficientSerialise = [&cnt, &tripletToId, &efficientSerialise, this](TreeNode* node) -> int{
            if(!node)
                return 0;
            string s = to_string(efficientSerialise(node->left)) + "," + to_string(node->val) + "," + to_string(efficientSerialise(node->right)) ;
            
            if(tripletToId.count(s) == 0)
                tripletToId[s] = tripletToId.size()+1;
            
            int id = tripletToId[s];
            cnt[id]++;
            if(cnt[id]==2) // duplicate detected
                ans.push_back(node);
            return id;
        };
        efficientSerialise(root);
        // for(auto x: tripletToId) cout<<x.first<<"\t-->\t"<<x.second<<endl; 
        // for(auto x: cnt) cout<<x.first<<"\t-->\t"<<x.second<<endl;  
        return ans;
    }
     
    unordered_map<string, int> hash;
    string tree2str(TreeNode* node)
    {
        if(!node) return "";
        string s = to_string(node->val); 
        
        s += "(" + tree2str(node->left) + ")";
    
        if(node->right) 
           s += "(" + tree2str(node->right) + ")";
         
        hash[s]++;
        if(hash[s]==2) // duplicate detected
            ans.push_back(node);
        return s;
    }
    
    string serialize(TreeNode* node)
    {
        if(!node)
            return "";
        string s = "("+ serialize(node->left) + to_string(node->val) + serialize(node->right) +")";
        hash[s]++;
        if(hash[s]==2)
            ans.push_back(node);
        return s;
    }
    
   
};