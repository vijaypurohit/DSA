/*
https://leetcode.com/problems/keyboard-row/
*/

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        /*
        vector<string> ans;
        unordered_map<char, int> hash = {
            {'q', 1}, {'w', 1}, {'e', 1}, {'r', 1}, {'t', 1},  {'y', 1}, {'u', 1}, {'i', 1}, {'o', 1}, {'p', 1},
            {'a', 2}, {'s', 2}, {'d', 2}, {'f', 2}, {'g', 2},  {'h', 2}, {'j', 2}, {'k', 2}, {'l', 2}, 
            {'z', 3}, {'x', 3}, {'c', 3}, {'v', 3}, {'b', 3},  {'n', 3}, {'m', 3},
            {'Q', 1}, {'W', 1}, {'E', 1}, {'R', 1}, {'T', 1},  {'Y', 1}, {'U', 1}, {'I', 1}, {'O', 1}, {'P', 1},
            {'A', 2}, {'S', 2}, {'D', 2}, {'F', 2}, {'G', 2},  {'H', 2}, {'J', 2}, {'K', 2}, {'L', 2}, 
            {'Z', 3}, {'X', 3}, {'C', 3}, {'V', 3}, {'B', 3},  {'N', 3}, {'M', 3} 
            
        };
        // string row1 = "qwertyuiop", row2 = "asdfghjkl", row3="zxcvbnm";
        
        for(string &w: words)
        {
            int idx = hash[w[0]];
            bool inrow=true;
            for(char &ch: w)
            {
                 if(hash[ch] != idx)
                 {
                     inrow = false;
                     break; 
                 }
            }
            if(inrow)
                ans.push_back(w);
        }
        return ans;
        */
        unordered_set<char> row1{'q','w','e','r','t','y','u','i','o','p'};
        unordered_set<char> row2{'a','s','d','f','g','h','j','k','l'};
        unordered_set<char> row3{'z','x','c','v','b','n','m'};
        
        vector<string> ans{};
        
        for(string &word : words){
            int count1{0};
            int count2{0};
            int count3{0};
            int word_len = word.length(); 
            for(char &w : word){
                char c = tolower(w); 
                if(row1.count(c))
                    count1++;
                if(row2.count(c))
                    count2++;
                if(row3.count(c))
                    count3++;
            } 
            if(count1 == word_len || count2 == word_len || count3 == word_len)
                ans.push_back(word);
        }
        
        return ans;
    }//
};