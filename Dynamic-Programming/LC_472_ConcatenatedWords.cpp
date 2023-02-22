/*
https://leetcode.com/problems/concatenated-words/
*/

struct TrieNode
{
    TrieNode *children[26];
    bool isEnd;
};

class Trie
{
public:
    TrieNode *root;
    Trie()
    {
        root = new TrieNode();
    }
    
    void insert(string &word)
    {
        TrieNode *ptr = root;
        for(int i=0; i<word.length(); i++)
        {
            int k = word[i]-'a';
            if(!ptr->children[k])
                ptr->children[k] = new TrieNode();
            ptr = ptr->children[k];
        }
        ptr->isEnd = true;
    }
/*
catsdofcats

cat prefixCnt = 1
   ->s(not found) return false;
   +s   prefixCnt = 2
     dog (isEnd true)
        cat
           ->s not found
            +s found return (true AND prefixCnt >= 2 true)
     
*/    
    bool dfs(int idx, string &word, TrieNode* ptr, int prefixCnt)
    {
        if(ptr == nullptr) // we can't go further in a trie as word doesn't exit
            return false;
        
        if(idx == word.length())
            return (ptr->isEnd and prefixCnt >= 2);
        
        int k = word[idx]-'a';
        TrieNode *next = ptr->children[k];
        
        if(ptr->isEnd and dfs(idx, word, root, prefixCnt+1)) // c(0) a(1) t(2) now cat isEnd=true and idx = 3
            return true; 
        return dfs(idx+1, word, next, prefixCnt);
    }
    
};

class Solution {
public:


    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) { 
        // return byDP(words);
        // return byDFS(words);
        
        //using trie
        return byTrie(words);
    }
/*
TC = O(M^3 * N), N = total strings, M len of longest string
Kind of word Break logic
*/    
    vector<string> byDP(vector<string>& words) {
        vector<string> ans;
        unordered_set<string> dict(words.begin(), words.end());
        
        for(const string &w: words)
        {
            int len = w.size();
            vector<bool> dp(len+1, false);
            dp[0]= true;
            for(int i=1; i<=len; i++)
            {
                for(int j = (i==len?1:0); j<i and !dp[i]; j++) //dp[i] is necessary else it will make it false again, j=0 true , j=1 false again
                {
                    dp[i] = (dp[j] and dict.count(w.substr(j, i-j)) );
                    // cout<<i<<","<<j<<")";for(int x: dp) cout<<x<<" ";cout<<endl;
                }
            }
            if(dp[len]==true)
                ans.push_back(w);
        }
        return ans;
    }
    
/*
DFS
*/    
    vector<string> byDFS(vector<string>& words) {
        vector<string> ans; 
        unordered_set<string> dict(words.begin(), words.end()); 
        for(string& w: words)
        {
            vector<bool> visited(w.size(), false);
            if(dfsSearch(0, w, visited, dict))
                ans.push_back(w); 
        }
        return ans;
    }
    
    bool dfsSearch(int idx, string& w, vector<bool> &visited, unordered_set<string> &dict)
    {
        int len = w.size();
        if(idx == len)
            return true;
        if(visited[idx])
            return false;
        visited[idx] = true;
        for(int j=len-(idx==0 ? 1 : 0); j>idx; j--)
        {
            if(dict.count(w.substr(idx, j-idx)) and dfsSearch(j, w, visited, dict))
                return true;
        }
        return false;
    }
    
/*
TRIE
*/
    vector<string> byTrie(vector<string>& words) {
        vector<string> ans;
        Trie tr;
        
        //if you are not sorting and insert all words first then giving TLE
        sort(words.begin(), words.end(), [](const string& w1, const string& w2) {
            return w1.size() < w2.size();
        });
        
        for(string& w: words)
        {
            if(tr.dfs(0, w, tr.root, 1))
                ans.push_back(w);
            else
                tr.insert(w);
        }
        
        return ans;
    }
    
};
