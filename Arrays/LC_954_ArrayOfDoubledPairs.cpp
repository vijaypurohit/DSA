/*
https://leetcode.com/problems/array-of-doubled-pairs/
954. Array of Doubled Pairs
*/

class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        int n = arr.size();
        // if(n<=1 || n%2) return {}; 
        vector<int> ans;
        
        /* //200
        map<int,int> freq;
        for(int &x: arr)
            freq[x]++;
        
        if(freq.count(0) and freq[0] % 2) return {};
        
        for(auto &f: freq)
        {
            int x = f.first;
            int d = 2*x;
            if(freq[x]==0) continue;
            if(x >= 0) // 2 3 4 6
            {
                if(freq[x] > freq[d])
                    return false;
                freq[d] -= freq[x];
            }
            else //if(x <  0) -8 -8 -4 -4 | -4 -4 -2 -2
            {
                if(x%2 != 0)return false; // odd negative number
                if(freq[x] > freq[x/2]) // we won't be able to pair up least negative num
                    return false;
                freq[x/2] -= freq[x];
            }
        }
        return true;
        */
        
        unordered_map<int,int> freq;
        for(int &x: arr)
            freq[x]++;
        if(freq.count(0) and freq[0] % 2) return {};
        
        vector<int> keys;
        for(auto &x: freq)
            keys.push_back(x.first);
        sort(keys.begin(), keys.end(), 
             [&](int i, int j)
             {return abs(i)<abs(j);}
            );
        
        for(int &k: keys)
        {  // cout<<k<<" "<<freq[2*k]<<endl;
            if(freq[k] > freq[2*k]) 
                return false;
            freq[2*k] -= freq[k];
        } 
        return true;
    }
};