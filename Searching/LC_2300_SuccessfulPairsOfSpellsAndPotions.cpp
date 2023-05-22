/*
https://leetcode.com/problems/successful-pairs-of-spells-and-potions/
*/


class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        // return init(spells,potions,success);
        int n = spells.size(), m = potions.size(); vector<int> ans(n,0);
        sort(potions.begin(), potions.end());
        
        // if we know the minimum potion, in the potions array, whose product with a given spell is more than or equal to success, then all the potions which are greater than minPotion will also form successful pairs with it.
        
        for(int si=0; si<n; si++){
            long long minPotion = ceil((1.0*success)/spells[si]);
            
            if(minPotion > potions[m-1]){
                ans[si] = 0;
                continue;
            }
            
            int idx = lower_bound(potions.begin(), potions.end(), minPotion) - potions.begin(); 
            ans[si] = m-idx;
            
        }
    
        return ans;
    }
    
    // done by myself
    vector<int> init(vector<int>& spells, vector<int>& potions, long long success) {
        int n = spells.size(), m = potions.size(); vector<int> ans(n,0);
        sort(potions.begin(), potions.end());
        
        for(int si=0; si<n; si++){
            long long cur_spell = spells[si];
            
            int low=0, high=m, mid;
            while(low<high){
                mid = low+(high-low)/2;
                if(success <= cur_spell*potions[mid])
                    high=mid;
                else
                    low = mid+1;
            }
            
            ans[si] = m-high;
            
        }
        return ans;
    }
};