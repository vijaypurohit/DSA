/*
https://leetcode.com/problems/bitwise-ors-of-subarrays/
898. Bitwise ORs of Subarrays
*/ 
/*
(5 bit) numbers: [4, 5, 10, 2, 16, 4, 5, 2, 1, 3]
In binary: [00100, 00101, 01010, 00010, 10000, 00100, 00101, 00010, 00001, 00011].
The last number in the list is 00011
[00011] ==> 00011
[00001, 00011] ==>  00011
[00010, 00001, 00011]  ==>  00011
[00101, 00010, 00001, 00011] ==>  00111
[00100, 00101, 00010, 00001, 00011] ==>  00111
[10000, 00100, 00101, 00010, 00001, 00011] ==> 10111
[00010, 10000, 00100, 00101, 00010, 00001, 00011] ==> 10111
[01010, 00010, 10000, 00100, 00101, 00010, 00001, 00011] ==> 11111
[00101, 01010, 00010, 10000, 00100, 00101, 00010, 00001, 00011] ==> 11111
[00100, 00101, 01010, 00010, 10000, 00100, 00101, 00010, 00001, 00011] ==> 11111
----
lot of these are the same. 
Once a bit appears in a particular position, it's impossible for it to disappear! 
What this means, is that we only need to OR the last number with previous ones that are actually unique. 
This is proportional to the number of bits in the largest number rather than n. That is, it's a lot smaller!
So, for each number in the array, we start with a set containing just that number (because that's what we'd get OR'ing it with itself). We then add all the possibilities we can get by OR'ing the number with results that include the previous number.

Complexity is O(kN), where k is a constant depends on the bitwise length of input numbers. (32 in this problem)
*/
class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        /*
        unordered_set<int> ans, cur, prev;
        for(int &x: arr)
        {
            cur = {x}; // currently set contains its own number
            for(int p: prev) //prev se element lo and cur ele ke sath OR krke cur set banao
                cur.insert(p|x);
            for(int c: cur) //cur se ans set me dalo
                ans.insert(c);
            prev = cur;
        }
        
        return ans.size();
        */
        
        vector<int> ans;
        int l=0, r=0;
        for(int &x: arr)
        {
            ans.push_back(x);
            for(int i=l; i<r; i++)
            {
                if(ans.back() != (ans[i]|x))
                    ans.push_back(ans[i]|x);
            }
            l = r;
            r = ans.size();
        }
        return unordered_set(ans.begin(), ans.end()).size();
    }
};