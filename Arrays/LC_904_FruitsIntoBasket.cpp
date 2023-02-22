/*
https://leetcode.com/problems/fruit-into-baskets/

this question equals: Given an array of integers, find the longest subarray that contains at most 2 unique integers. 
(We will call such subarray a valid subarray for convenience)

*/

class Solution {
public:
    int n;
    int totalFruit(vector<int>& fruits) {
        n = fruits.size();
        return slidingWindow(fruits);
    }
   
/*
TC: O(n)
2*n steps for left and right, addition deletion in hashmap is O(n)
SC: O(1)
*/    
    int slidingWindow(vector<int>& fruits)
    {
        unordered_map<int,int> baskets; // to store freq of each type of fruits
        int l=0,r=0;
        int ans=0;
        
        while(r < n)
        {
            baskets[fruits[r]]++; //add into basket
            
            // if invalid window then remove from left
            while(baskets.size() > 2) // num of basket is more than 2
            { 
                if(--baskets[fruits[l]] == 0)
                    baskets.erase(fruits[l]);
                l++;
            }
            
            //update ans = max of old ans OR cur window len
            ans = max(ans, r-l+1);
            r++; //next item
        }
        
        return ans;
    }
    
};