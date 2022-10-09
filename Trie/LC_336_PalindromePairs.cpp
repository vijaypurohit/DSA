/*
336. Palindrome Pairs
https://leetcode.com/problems/palindrome-pairs/
*/

/*
Number of cases :
Case1: If s1 is a blank string, then for any string that is palindrome s2, s1+s2 and s2+s1 are palindrome.
Case 2: If s2 is the reversing string of s1, then s1+s2 and s2+s1 are palindrome.
Case 3: If s1[0:cut] is palindrome and there exists s2 is the reversing string of s1[cut+1:] , then s2+s1 is palindrome.``
Case 4: Similiar to case3. If s1[cut+1: ] is palindrome and there exists s2 is the reversing string of s1[0:cut] , then s1+s2 is palindrome

****
sabse phele har ek word ko Trie Data structure me reverse way me insert karayenge.
ek trah se ye word ka suffix tree ho gya. and isse ham suffix match kr skte he.
* word ko insert karwane ke baad uska vector ka index, trie ke node index me store kra denge jisse extra mapping nhi krni pde iske liye.
* jab word ko daal rhe he to bich bich me shurat se leke us index tk check krenge ki palindrome he ya nhi, wo word ka prefix palindrome he ya nhi, he to usko wanh store kra denge. word ke last me bhi same empty string ko palindrome maan ke word ka index store krenge.

* ab ek ek krke word ko lenge, and uski length tk trie me search krenge.
** agr word pura search krne ke baad trie me kuch node bachta he to ham indexes check krenge ki kya us node me koi palindrome_prefix_index he, agar he to prefix, suffix match he and suffix ke aage ka part palindrome to hame word mil gya,
                                                <----
cur_word_entire + trie_word_ka_rest_palindrome_prefix + trie_suffix(entire or half)
eg: s + .ll.s
abcd + ..dcba

** agr bich me hi koi dusra word milta hai jiska index different he to check krenge ki apne cur word ki rest of the string palindrome he ya nahi, palindrome hone pe ham use join kr skte he.          ----->
cur_word_prefix + cur_word_rest_is_palindrome + trie_suffix
eg: "".a. + ""
*/

struct TrieNode{
    TrieNode* children[26];
    int index = -1; // index of vector words
    vector<int> palindromeIndexes;
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
    
    void insertReverse(string &word, int idx)
    {
        int k;
        TrieNode* ptr = root;
        for(int i=word.length()-1; i>=0; i--) //inserting in reverse
        {
            if(isPalindrome(0, i, word)) //checking if prefix is palindrome or not
                ptr->palindromeIndexes.push_back(idx); 
            k = word[i]-'a';
            if(ptr->children[k] == nullptr)
                ptr->children[k] = new TrieNode();
            ptr=ptr->children[k];
        }
        ptr->index = idx;
        ptr->palindromeIndexes.push_back(idx);// word[idx] perfix is empty string
    }
    
    bool isPalindrome(int i, int j, string& w) 
    {
        while(i<j){
            if(w[i++] != w[j--]) 
                return false;
        }
        return true;
    } 
};

class Solution {
public:
    int n;
    vector<vector<int>> palindromePairs_(vector<string>& words) {
        n = words.size();
        Trie tr;
        
        for(int i=0; i<n; i++)
            tr.insertReverse(words[i], i); //
        
        vector<vector<int>> ans;
        for(int i=0; i<n; i++)
        {
            string w = words[i];
            int len = w.size();
            TrieNode* ptr = tr.getRoot();
            
            for(int j=0; j<len and ptr; j++)
            {
                // found the end of another word, which is different from original and rest of string of original word is palindrome. then we can attach this new word to end of our orginal word
                if(ptr->index != -1 and ptr->index != i and tr.isPalindrome(j,len-1,w))
                    ans.push_back({i, ptr->index});
                ptr = ptr->children[w[j]-'a'];
            }
            if(ptr == nullptr) continue;
            for(int j: ptr->palindromeIndexes)
            { 
                // w word is exhausted in matching above. now if a word whose prefix is palindrome after matching its suffix with w then this is also valid pair.
                if(i!=j)
                    ans.push_back({i,j});
            }
        }
        
        return ans;
    }//end
    
    /*
    vector<vector<int>> palindromePairs(vector<string>& words) 
    {  
        // return usingBruteForce(words);
            return usingHashMap(words);
    }
    
    vector<vector<int>> usingHashMap(vector<string>& words) 
    {
        int n = words.size();
        vector<vector<int>> ans;
        
        unordered_map<string, int> wordMap;
        for (int i = 0; i < n; i++) {
            wordMap[words[i]] = i;
        }
        
        for (int i = 0; i < n; i++) {
            string word = words[i]; 
            string reversedWord = word; 
            reverse(reversedWord.begin(), reversedWord.end());
            // check if the reversed word exists in the hashmap.
            if (wordMap.find(reversedWord) != wordMap.end() && wordMap[reversedWord] != i) {
                ans.push_back({i, wordMap[reversedWord]});
            }
            
            // check if the  word is a palindrome and empty string exists.
            if (isPalindrome(word)) {
                string emptyString = "";
                if (wordMap.find(emptyString) != wordMap.end() && wordMap[emptyString] != i) {
                    ans.push_back({i, wordMap[emptyString]});
                    ans.push_back({wordMap[emptyString], i});
                }
            }
            // check if remaining part of the word is a palindrome and if the reversed word exists in the hashmap.
            for (int j = 1; j < word.size(); j++) {
                string left = word.substr(0, j);
                string right = word.substr(j);
                string reversedLeft = left;
                string reversedRight = right;
                reverse(reversedLeft.begin(), reversedLeft.end());
                reverse(reversedRight.begin(), reversedRight.end());
                if (isPalindrome(left) && wordMap.find(reversedRight) != wordMap.end()) {
                    ans.push_back({wordMap[reversedRight], i});
                }
                if (isPalindrome(right) && wordMap.find(reversedLeft) != wordMap.end()) {
                    ans.push_back({i, wordMap[reversedLeft]});
                }
            }
            
        }//for i
        return ans;
    }
    
    vector<vector<int>> usingBruteForce(vector<string>& words) 
    {
        int n = words.size();
        vector<vector<int>> ans;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j) 
                    continue;
                
                string word = words[i] + words[j];
                if (isPalindrome( word)) {
                    ans.push_back({i, j});
                }
            }
        }
        return ans;
    }
    
    bool isPalindrome( string& word) { 
         int i=0;
         int j = word.size()-1;
        while (i < j) {
            if (word[i++] != word[j--]) {
                return false;
            } 
        }
        return true;
    }
    */
}; 

















