/*
https://leetcode.com/problems/kth-distinct-string-in-an-array/
*/
class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> freq;
        for(auto &s: arr)
            freq[s]++;
        // vector<string> distincts;
        // for(auto& s: arr)
        //     if(freq[s]==1)
        //         distincts.push_back(s);
        // if(k-1 >= distincts.size())
        //     return "";
        // return distincts[k-1]; 
        for(auto& s: arr)
            if(freq[s]==1 and --k==0)
                return s; 
        return ""; 
    }
/*
static bool comp(pair<string,int>& a, pair<string,int>& b) {
        return a.second < b.second;
    }
    string kthDistinct(vector<string>& arr, int k) {
        int n = arr.size();
        unordered_map<string, int> last;
        for(int i=0; i<n; i++)
        { 
            if(last.find(arr[i]) == last.end())
                last[arr[i]]=i;
            else 
                last[arr[i]] = -1; 
        }
        
        vector<pair<string, int>> elems(last.begin(), last.end());
        sort(elems.begin(), elems.end(), comp);
        
        for(auto &x: elems)
        {
            if(x.second != -1)
            {
                if(--k==0)
                    return x.first;
            }
        }
        return "";
    }
*/
};
 