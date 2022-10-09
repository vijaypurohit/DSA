/*
https://leetcode.com/problems/time-based-key-value-store/
*/
class TimeMap {
public:
    // TimeMap() { 
    // }
    
    /*
    unordered_map<string, map<int, string>> hash;
    void set(string key, string value, int timestamp) {
        hash[key][timestamp] = value;
    }
    
    string get(string key, int timestamp) {
        auto it = hash[key].upper_bound(timestamp);
        if(it == hash[key].begin())
            return "";
        return prev(it)->second;
    }
    */
    
    // /* 
    unordered_map<string, vector<pair<int, string>>> hash;
    void set(string key, string value, int timestamp) {
        hash[key].push_back({timestamp, value});
    } 
    string get(string key, int timestamp) {
//         if(hash.find(key) == hash.end())
//             return "";
//         int l=0, r = hash[key].size()-1, idx = r;
        
//         while(l<=r)
//         {
//             int mid = l+(r-l)/2;
//             if(hash[key][mid].first <= timestamp)
//             {
//                 idx = mid;
//                 l = mid+1;
//             }
//             else
//                 r = mid-1;
//         }
//         if(hash[key][idx].first <= timestamp)
//             return hash[key][idx].second;
//         else
//             return "";
        
        auto it = upper_bound(hash[key].begin(), hash[key].end(), timestamp, [&](int t, const pair<int, string>& v) -> bool{
           return t < v.first; 
        });
        if(it == hash[key].begin())
            return "";
        return prev(it)->second;
    }
    // */
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */