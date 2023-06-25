/*
https://leetcode.com/problems/snapshot-array/
*/

class SnapshotArray {
public:
    int snap_id=0;
    vector<vector<pair<int,int>>> arr;
    SnapshotArray(int length) {
        snap_id = 0;
        arr.resize(length);
        // for(int i=0; i<length; i++){ arr[i].push_back({0,0}); }
    }
    
    void set(int index, int val) {
        if(arr[index].empty() or arr[index].back().first != snap_id)
             arr[index].push_back({snap_id, val});
        else
            arr[index].back().second = val;
    }
    
    int snap() {
        return snap_id++;
    }
    
    int get(int index, int snap_id) {
        auto it = upper_bound(arr[index].begin(), arr[index].end(), make_pair(snap_id, INT_MAX));
        // return prev(it)->second;
        return it == arr[index].begin() ? 0 : prev(it)->second;
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */