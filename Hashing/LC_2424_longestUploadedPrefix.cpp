/*
https://leetcode.com/problems/longest-uploaded-prefix/
*/

class LUPrefix {
public:
    set<int> hash;
    int maxans=0;
    vector<bool> v; int i=0;
    LUPrefix(int n) { 
        v.resize(n+1, false);
    }
    
    void upload(int video) {
        // hash.insert(video);
        v[video-1]=1;
    }
    
    int longest() {
        // while(hash.count(maxans+1))maxans++;
        // return maxans;
        while(v[i]==1)i++;
        return i;
    }
};

/**
 * Your LUPrefix object will be instantiated and called as such:
 * LUPrefix* obj = new LUPrefix(n);
 * obj->upload(video);
 * int param_2 = obj->longest();
 */