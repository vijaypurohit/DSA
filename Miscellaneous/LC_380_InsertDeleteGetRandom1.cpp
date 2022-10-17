/*
https://leetcode.com/problems/insert-delete-getrandom-o1/
*/

class RandomizedSet {
    vector<int> nums;
    unordered_map<int, int> loc;
public:
    // RandomizedSet() {  }
    
    bool insert(int val) {
        if(loc.find(val) != loc.end()) // already present
            return false;
        nums.push_back(val); //insert
        loc[val] = nums.size()-1;
        return true;
    }
    
    bool remove(int val) {
        if(loc.find(val) == loc.end()) // not present
            return false;
        nums[loc[val]] = nums.back(); //replace val with arr end
        loc[nums.back()] = loc[val]; // change loc of arr end
        nums.pop_back();
        loc.erase(val);
        return true;
    }
    
    int getRandom() {
        return nums[rand()%nums.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */