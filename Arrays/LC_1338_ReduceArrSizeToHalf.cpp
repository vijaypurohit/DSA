/*
1338. Reduce Array Size to The Half
https://leetcode.com/problems/reduce-array-size-to-the-half/
*/
class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n = arr.size();
        int n_half = n/2;
        unordered_map<int,int> freq;
        for(int &x: arr)
            freq[x]++;
        
        int set_size=0;
        int new_arr_size=0;
        /* // using vector sort
        vector<pair<int,int>> sortedFreq;
        for(auto &x: freq)
            sortedFreq.push_back({x.second, x.first});
        sort(sortedFreq.begin(), sortedFreq.end(), greater<>());
        
        for(auto &x: sortedFreq)
        {
            set_size++;
            // cout<<x.second<<" "<<x.first<<") ";
            new_arr_size += x.first;
            if(new_arr_size >= n_half)
                break;
        }
        */
        
        priority_queue<pair<int,int>> pq;
        for(auto &x: freq)
            pq.push({x.second, x.first});
        
        while(new_arr_size<n_half)
        {
            set_size++;
            new_arr_size += pq.top().first; pq.pop();
        }
        
        return set_size;
    }//end
};