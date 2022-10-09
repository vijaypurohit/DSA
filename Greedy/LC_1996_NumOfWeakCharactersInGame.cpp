/*
1996. The Number of Weak Characters in the Game
https://leetcode.com/problems/the-number-of-weak-characters-in-the-game/
*/
class Solution {
public:
    /* ordering matters
      sort attack in desc order.
      reason: so that we can start from beginning with max defense and calculate the ans and max defense simultaneously.
      for same attack: sort defense in asc order
      reason: so that we will not pick it as max defense would be less.
    */
    int n;
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        n = properties.size();
        // return usingSort(properties); 
        return usingHashMap(properties); 

            
    }
    
    int usingHashMap(vector<vector<int>>& p)
    {
        int ans=0; // number of weak characters
        int maxDefense = 0; //1 <= md <= 10^5
        
        map<int, vector<int>, greater<int>> order;
        
        for(auto &x: p)
            order[x[0]].push_back(x[1]);
        
        for(auto &x: order) { 
           
            ans += count_if(x.second.begin(), x.second.end(), [&](int curDefense){
                return curDefense<maxDefense;
            });
            maxDefense = max(maxDefense, *max_element(x.second.begin(), x.second.end()));
        }
        return ans;
    }
    
    /*
        7 4, 7 5, 7 6 --> maxdefense: 4->5->6
        6 5, 6 4, 6 3, --> maxdefense:  6
        5 7, 5, 6 --> maxdefense:  7
        4 3 --> maxdefense:  7
    */
    static bool comp(vector<int>& a, vector<int>& b)
    {
        if(a[0]==b[0]) return a[1] < b[1]; // defense in asc order
        return a[0] > b[0]; // attack in desc order
    }
    int usingSort(vector<vector<int>>& p)
    {
        int ans=0; // number of weak characters
        int maxDefense = 0; //1 <= md <= 10^5
        
        sort(p.begin(), p.end(), comp);
        
        for(auto &x: p)
        { //x[1] -> defense of properties[i]
            ans += (x[1] < maxDefense);
            maxDefense = max(maxDefense, x[1]);
        }
        return ans;
    }
};