/*
https://leetcode.com/problems/sum-of-prefix-scores-of-strings/
*/

struct TrieNode{
    TrieNode* children[26];
    int count = 0; // index of vector words
    bool isEnd;
};
    
class Trie
{
   TrieNode* root;
public:
    Trie(){
        root = new TrieNode();
    }
    TrieNode* getRoot()
    {
        return root;
    }
    
    void insert(string &word)
    {
        TrieNode *ptr = root;
        for(char &ch: word)
        {
            int k = ch-'a';
            if(!ptr->children[k])
                ptr->children[k] = new TrieNode();
            ptr = ptr->children[k];
            ptr->count++;
        }
        ptr->isEnd = true;
    }
    
    int count(string &word)
    {
        int sum=0;
        TrieNode *ptr = root;
        for(char &ch: word)
        {
            int k = ch-'a';
            if(!ptr->children[k])
                ptr->children[k] = new TrieNode();
            ptr = ptr->children[k]; 
            sum+=ptr->count;
        }
        return sum;
    }
     
};
class Solution {
public:
    vector<int> sumPrefixScores(vector<string>& words) {
        int n = words.size();
        vector<int> ans(n, 0);
        Trie tr;
        for(string &w: words)
            tr.insert(w);
        
        for(int i=0; i<n; i++)
        {
            ans[i] = tr.count(words[i]);
        }
        
        return ans;
    }
};