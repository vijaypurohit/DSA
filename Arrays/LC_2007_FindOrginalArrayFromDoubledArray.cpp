/*
2007. Find Original Array From Doubled Array
https://leetcode.com/problems/find-original-array-from-doubled-array/
*/

class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        int n = changed.size();
        if(n<=1 || n%2) return {}; 
        vector<int> ans;
        /* 
        multiset<int> hash(changed.begin(), changed.end());
        if(hash.count(0) % 2) return {};  
        for(int i=0; i<n; i+=2) //process half elements
        {
            int x = *hash.begin();
            int d = 2*x;
            // cout<<x<<" "<<*(hash.find(x))<<" "<<(hash.count(d))<<" "<<hash.size()<<" "<<endl;
            if(hash.find(d)==hash.end())
                return {};
            else
            {
                ans.push_back(x); 
                hash.erase(hash.begin());
                hash.erase(hash.find(d));
            } 
        } 
        return ans;
        */ 
        
        /* //899ms
        map<int,int> freq;
        for(int &x: changed)
            freq[x]++;
        
        if(freq[0] % 2) return {};
        
        for(auto &f: freq)
        {
            int x = f.first;
            int d = 2*x;
            if(freq[x]==0) continue;
            
            if(freq.find(d)!=freq.end() and freq[d] >= freq[x])
            {
                int cnt = x ? freq[x] : freq[x]/2;
                while(cnt--)
                {
                    ans.push_back(x);
                    freq[x]--;
                    freq[d]--;
                }
            }
            else
                return {};
        }
        */
        
        unordered_map<int,int> freq;
        for(int &x: changed)
            freq[x]++;
        if(freq.count(0) and freq[0] % 2) return {};
        vector<int> keys;
        for(auto &x: freq)
            keys.push_back(x.first);
        sort(keys.begin(), keys.end());
        
        for(int &k: keys)
        {
            if(freq[k]==0) continue;
            if(freq[k] > freq[2*k]) return {};
            for(int c=0; c<freq[k]; c++, freq[2*k]--)
                ans.push_back(k);
        }
       
        return ans;
    }//
};