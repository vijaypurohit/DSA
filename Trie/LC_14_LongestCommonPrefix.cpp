/*
https://leetcode.com/problems/longest-common-prefix/
*/

class Trie
{
    struct TrieNode{
      TrieNode* children[26];
      bool isEnd; 
      int count=0;
    };
    
    public:
    TrieNode *root;
    Trie(){
        root = new TrieNode();
    }
    
    void insert(string& word)
    {
        TrieNode* ptr = root;
        for(char &ch: word)
        {
            int k = ch-'a';
            if(ptr->children[k]==nullptr)
            {
                ptr->children[k] = new TrieNode();
                ptr->count++;
            }
            ptr = ptr->children[k];
        }
        ptr->isEnd = true;
    }
    
    string searchLongestPrefix(string &word)
    {
        TrieNode* ptr = root;
        string ans="";
        for(char &ch: word)
        {
            int k = ch-'a';
            if(ptr->children[k] and ptr->count==1 and ptr->isEnd == false) 
                ans += ch; 
            else
                return ans;
            ptr = ptr->children[k];
        }
        return ans;
    }
};

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if(n==0) return "";
        if(n==1) return strs[0];
        
        // Using Trie
//         Trie tr;
//         for(int i=1; i<n; i++)
//             tr.insert(strs[i]);
        
//         return tr.searchLongestPrefix(strs[0]);
        int m = strs[0].size();
        for(int c=0; c<m; c++)
        {
            for(int w=1; w<n; w++)
            {
                if(strs[w][c] != strs[0][c])
                    return strs[0].substr(0, c);
            }
        }
        return strs[0];
    }
};