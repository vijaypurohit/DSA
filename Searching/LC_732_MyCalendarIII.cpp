/*
https://leetcode.com/problems/my-calendar-iii/
*/

class MyCalendarThree {
public:
    // MyCalendarThree() {  }
    
    /* //Looping over entire map
    map<int,int> hash; // use a map as a differential array
    int book(int start, int end) {
        int ans=0, cur=0;
        hash[start]++;
        hash[end]--; //open interval
        for(auto& [_, c]: hash) 
            ans = max(ans, cur+=c); // number of used rooms
        return ans;
    }
    */
    map<int,int> count = {{-1, 0}};  
    int ans=0;
    int book(int start, int end) {
        auto s_it = count.emplace(start, (--count.upper_bound(start))->second).first;
        auto e_it = count.emplace(end, (--count.upper_bound(end))->second).first;
        
        // cout<<"("<<(s_it)->first<<"->"<<(s_it)->second<<")("<<(e_it)->first<<"->"<<(e_it)->second<<")"<<endl;
        for(auto i = s_it; i!=e_it; ++i)
            ans = max(ans, ++(i->second));
        // for(auto &x: count) cout<<x.first<<" "<<x.second<<") ";cout<<endl;
        return ans;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */