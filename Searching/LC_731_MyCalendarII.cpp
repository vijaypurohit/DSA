/*
https://leetcode.com/problems/my-calendar-ii/
*/
/*
Using Vectors (Non-Sorted Order)
bookings -> this is used for storing all the valid booking i.e first and second booking
overlap -> this is used to store all the valid second bookings, storing only overlapping intervals;

first we check whether it is triple booking or not and return false if it so.
if it is not a triple booking , we check if it is second booking or not, if it is second booking then we will add the booking to overlap vector.
*/
class MyCalendarTwo {
public:
    // MyCalendarTwo() {  }
    
    /* // using two vectors
    vector<pair<int,int>> bookings;
    vector<pair<int,int>> overlap;
    
    // [v.fst  v.sec][st en][v.fst  v.sec]
    bool book(int start, int end) 
    {   // if it is a triple booking
        for(auto& o: overlap)
        {   // [v.fst  [st..   v.sec]  ..en]
            // [st..  [v.fst ..en]  v.sec]  if(start < o.second and end > o.first)
            if(!(o.second<=start or end<=o.first))
                return false;
        }
        // if it is a first booking, add sec booking
        for(auto &b: bookings)
        {   
            // add only overlapping interval to overlap vector
            if(!(b.second<=start or end<=b.first))
                overlap.push_back({max(start, b.first), min(end, b.second)});
        }
        bookings.push_back({start, end});
        return true;
    }//
    */
    
    // Using line sweep algo
    map<int, int> hash; // key: time, val: (start +1) (end -1)
     bool book(int start, int end) 
    {   
         hash[start]++;
         hash[end]--;
         int booked = 0;
         for(auto &b: hash)
         {
             booked += b.second;
             if(booked > 2) //redo
             {
                 hash[start]--;
                 hash[end]++; 
                 return false;
             }
         }
        return true;
    }//
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */