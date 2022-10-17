/*
https://leetcode.com/problems/insert-delete-getrandom-o1-duplicates-allowed
*/

/*
class RandomizedCollection {
    vector<pair<int,int>> nums;
    unordered_map<int,vector<int>> loc;
public:
    // RandomizedCollection() {  }
    
    bool insert(int val) {
        bool retval = (loc.find(val) == loc.end());
        // two way mapping, in loc array we store index of nums where val is
        // in nums second we store index of val where its index is stored in loc[val] vector
        loc[val].push_back(nums.size());
        nums.push_back({val, loc[val].size()-1});
        
        return retval;//true if not present
    }
    
    bool remove(int val) {
        if(loc.find(val) == loc.end())
            return false;
        // replace val with last, for that we go to val position and replace with last. now remove last element to dec size
        // now we remove one count of val, so we remove it from map, if map of val get empty then delete that entire entry
        // we need to change the loc of last element also to its new updated value
        auto last = nums.back(); 
        // last.first is last element val and last.second is the index of array element where its nums position is inserted.  so we replace that index value with current val nums position index. 
        // loc[last_val][last_vec_idx_of_nums] = idx_val_in_nums
        loc[last.first][last.second] = loc[val].back(); // replace loc of last element with the index we are going to replace. 
        nums[loc[val].back()] = last; // replace val which is at index=loc[val].back() with last;
        nums.pop_back();
        loc[val].pop_back();
        if(loc[val].empty())
            loc.erase(val);
         
        return true;
    }
    
    int getRandom() {
        return nums[rand()%nums.size()].first;
    }
};
*/class RandomizedCollection {
    vector<int> nums;
    unordered_map<int, unordered_set<int>> loc;
public:
    // RandomizedCollection() {  }
    
    bool insert(int val) {
       bool retval = (loc.find(val) == loc.end()); 
        loc[val].insert(nums.size());
        nums.push_back(val); 
        return retval;//true if not present
    }
    
    bool remove(int val) {
         if(loc.find(val) == loc.end())
            return false;
        
        int idx = *(loc[val].begin());
        loc[val].erase(idx); // erase val idx from the loc, if we put this stmt at last then with val==nums.back() it can remove two indexes.
        
        // for(int x: nums) cout<<x<<" "; cout<<"| val="<<val<<" idx="<<idx<<" | ";
        nums[idx] = nums.back(); // replace val value with back
        loc[nums.back()].insert(idx); //insert new idx of nums.back(), if it is same as n-1 (back element) then no effect of insertion
        loc[nums.back()].erase(nums.size()-1); // remove old idx of nums.back()
        
        nums.pop_back();
        if(loc[val].empty())
            loc.erase(val);
        // for(auto x: loc){cout<<"["<<x.first<<"->"; for(auto y: x.second)cout<<y<<" ";};cout<<endl;
        return true;
    }
    
    int getRandom() {
        return nums[rand()%nums.size()];
    }
};

/**
 * Your RandomizedCollection object will be instantiated and called as such:
 * RandomizedCollection* obj = new RandomizedCollection();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */