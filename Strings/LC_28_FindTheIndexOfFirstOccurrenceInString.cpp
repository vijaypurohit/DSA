/*
https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
*/
class Solution {
public:
    int strStr(string haystack, string needle) {  
       
        // return haystack.find(needle);   //  Using STL
        
        // return searchSlidingWindow(haystack, needle);
        
        return usingKMP(haystack, needle);
        
        
    }
    
/*
TC: O(n) //text length , SC: O(m)
preprocessing O(m) // pattern length
    In the case of "Matching", or "Mismatch (Empty Previous Border)", we simply increment i, which is O(1).
    In the case of "Mismatch (Non-Empty Previous Border)", we reduce prev to longest_border[prev-1]. In other words, we try to reduce at most as many times as the while loop has executed. There will be at most m−1 such reductions.
    Thus, it will be O(m).

searching O(2n)
We never backtrack/reset the haystack_pointer. We increment it by 1 in Matching or Zero-Matching.
In Partial-Matching, we don't immediately increment and try to reduce to a condition of Matching, or Zero-Matching. For this, we set needle_pointer to longest_border[needle_pointer-1], which always reduces to 0 or matches. The maximum number of rollbacks of needle_pointer is bounded by needle_pointer. For any mismatch, we can only roll back as much as we have advanced up to the mismatch.

Hence O(m+n) and since m>=n therefore O(2.n) which is O(n)
*/
    int usingKMP(const string& haystack, const string& needle)
    {
        int tlen = haystack.size(), plen = needle.size(); //text length (general text), pattern length(that we needs to find)
        if(tlen < plen) return -1; 
        
        //pre processing
        vector<int> lps(plen, 0); // LPS[i] is the length of the longest proper prefix that is also a suffix in the first i characters. lps[0] will be zero. 
        int i=1, lpsLen = 0; // iterating from index 1 as lps[0] will be zero. lpsLen = length of previous longest proper prefix that is also a suffix
        //  For the pattern “AAACAAAAAC”, lps[] is [0, 1, 2, 0, 1, 2, 3, 3, 3, 4]  
        while(i < plen){
            if(needle[i] == needle[lpsLen]) 
                lps[i++] = ++lpsLen;
            else if(lpsLen != 0) 
                lpsLen = lps[lpsLen-1];
            else
                lps[i++] = lpsLen;
        }
        
        //searching
        i=0; int j=0;
        vector<int> ans;
        while(i < tlen)
        {
            if(needle[j] == haystack[i]){ 
                i++; j++; 
                if(j == plen){
                    ans.push_back(i-plen);
                    j = lps[j-1];
                }
            }
            else{
                if(j!=0)
                    j = lps[j-1];
                else 
                    i++;
            }
        }
        
        if(!ans.empty())
            return ans[0];
        
        return -1;
    }
    
    int searchSlidingWindow(string& haystack, string& needle)// Linear Search, Sliding window
    {     
        int nh = haystack.size(), nn = needle.size();
        if(nn>nh) return -1;
        
        for(int i=0; i<nh-nn+1; i++)
        {
            int j=0;
            for(; j<nn; j++){
                if(haystack[i+j] != needle[j])
                    break;
            }
            if(j==nn)
                return i;
        }
        return -1;
    }
};