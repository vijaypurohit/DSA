/*
https://leetcode.com/problems/most-frequent-even-element/
*/

class Solution {
public:
    /*
    int mostFrequentEven(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> freq;
        for(int x: nums)
        {
            if(x%2==0)
                freq[x]++;
        }
        int ans=-1;
        int mx=-1;
        for(auto x: freq)
        {
            // cout<<x.first<<" "<<x.second<<") ";
            if(x.second>mx)
            {
                mx = x.second;
                ans = x.first;
            }
            else if(x.second==mx and ans > x.first)
                ans = x.first;
        } 
        return ans; 
    }
        */ 
    //Using HashMap
    int mostFrequentEven_HashMap(vector<int>& nums) { 
        
        unordered_map<int,int> freq;
        int max_cnt=0, ans = -1;
        for(int x: nums)
        {
            if(x%2 == 0)
            {
                int cnt = ++freq[x];
                if(cnt >= max_cnt)
                { // if equal freq then minimum else current element
                    ans = cnt==max_cnt ? min(ans, x) : x; 
                    max_cnt = cnt;
                }
            }
        }
        return ans; 
    }
    
    //Using Sort
     int mostFrequentEven(vector<int>& nums) { 
        // return mostFrequentEven_HashMap(nums); 
        auto even_end = remove_if(begin(nums), end(nums), [](int x){return x%2;});
        if(begin(nums)==even_end) return -1; // if no even element present
        sort(begin(nums), even_end);
         
        int max_cnt=0, ans = *begin(nums); 
        int cnt=1;
        
         for(auto it = begin(nums)+1; it!=even_end; it++)
         {
             if(*prev(it) == *it)
             {
                 cnt++;
                 if(cnt > max_cnt)
                 {
                     ans = *it;
                     max_cnt = cnt;
                 }
             }
             else 
                 cnt=1;
         }
         
        return ans; 
    }
};