/*
https://leetcode.com/problems/my-calendar-i/
*/

/*
https://i.imgur.com/4INcpaw.jpg
There are many possible combinations in which a range [s1,e1] can intersect with [s2, e2]. Instead of thinking about all those ways, let's just think about the cases where the ranges won't intersect. There are only two possible cases -
[s1, e1] : Range of new slot to be booked
[s2, e2] : Range of previously booked slots

1. s2 >= e1
   
           s1           e1                              OR                  s1          e1
           |------------|                                                   |------------|
                        |------------|                                                         |------------|
			            s2           e2                                                       s2           e2
    
	
	
2. s1 >= e2	   

                       s1           e1                  OR                                     s1          e1
                        |------------|                                                        |------------|
           |------------|                                                   |------------|
          s2           e2                                                  s2           e2

Note: I have considered the first depiction in case-1 and case-2 as intersections because we are given right-open interval range.
So we consider two ranges as non-intersecting even if one has the same start as end of the other.

No intersection will occur if either of the above cases is satisfied	  
So, we will just check the above conditions against all the previous bookings and if any of them don't satisfy either of these condition, then an intersection exists and we return false. Otherwise, just insert the new booking slot and return true
*/
class MyCalendar {
public:
    /*
    vector<pair<int,int>> vec;
    // MyCalendar() {
    // }
    bool book(int start, int end) {
        for(int i=0; i<vec.size(); i++) {
            // case 2 or case 1 [v.fst  v.sec][st en][v.fst  v.sec]
            if(!(vec[i].second<=start or end<=vec[i].first))
                return false;
        }
        vec.push_back({start, end});
        return true;
    }
    */
    
    // Approach 2 is to maintain the sorted order in order to search the required slot (either by 2 ways)
    map<int,int> mp;
    set<pair<int,int>> bookings;
    MyCalendar() {
       
    }
    
    bool book(int start, int end) {
        // auto next = mp.upper_bound(start);
        // if(next != mp.begin() and start < prev(next)->second) return false;
        // if(next != mp.end() and end > next->first) return false;  
        // mp.insert({start, end});
        // return true;
        
        // [prev(slot).fst  prev(slot).sec][st en][slot.fst  slot.sec]
        auto slot = bookings.lower_bound({start, end}); //equal or just upper value
        // cout<<"("<<start<<" "<<end<<") "; cout<<"("<<slot->first<<" "<<slot->second<<") "<<int(slot!=s.begin())<<" "<<int(slot!=s.end())<<endl;
        if(slot != bookings.end() && !(end <= slot->first))
            return false;  
        if(slot != begin(bookings) && !(prev(slot)->second <= start)) 
            return false;  
        bookings.insert({start, end});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */