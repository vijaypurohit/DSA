/* https://leetcode.com/problems/unique-morse-code-words/
 *
 */
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {

        // morse code mapping
        map<char, string> mc {
                {'a', ".-"},
                {'b', "-..."},
                {'c', "-.-."},
                {'d', "-.."},
                { 'e', "."},
                { 'f', "..-."},
                { 'g', "--."},
                { 'h', "...."},
                { 'i', ".."},
                { 'j', ".---"},
                { 'k', "-.-"},
                { 'l', ".-.."},
                { 'm', "--"},
                { 'n', "-."},
                { 'o', "---"},
                { 'p', ".--."},
                { 'q', "--.-"},
                { 'r', ".-."},
                { 's', "..."},
                { 't', "-"},
                { 'u', "..-"},
                { 'v', "...-"},
                { 'w', ".--"},
                { 'x', "-..-"},
                { 'y', "-.--"},
                { 'z', "--.."}
        };

        set<string> ur; // unique representation;
        string encode;      // morse represntation of the word;

        for(string x: words){
            encode="";
            for(char c: x){
                encode = encode+mc[c];
            }
            ur.insert(encode);
        }

        return ur.size();
    }//uniqueMorseRepresentations
};