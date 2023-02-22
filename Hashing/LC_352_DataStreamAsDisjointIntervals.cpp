/*
*/

/*
Insert elements one by one and return it into group of disjoin intervals
DS - need to maintain sorted order otherwise we need to sort everytime we need to find intervals
Java - TreeSet
Python - SortedList
CPP - STL set (implemented as BST)

How to build intervals - if values are adjacent then build interval else start new one

Approach 2
building interval as we insert element
Java - treemap
python - sortedDict
cpp - STL map
*/
/*
class SummaryRanges {
    set<int> stream;
public:
    SummaryRanges() {
    }
    
    void addNum(int value) {
        stream.insert(value);
    }
    
    vector<vector<int>> getIntervals() {
        if(stream.empty()) 
            return {};
        
        vector<vector<int>> intervals;
        set<int>::iterator itr = stream.begin();
        int left = *itr, right = *itr;
        for(itr++; itr != stream.end(); itr++)
        {
             if(*itr == right + 1)
                 right = *itr;
             else{
                 intervals.push_back({left, right});
                 left = right = *itr;
             }
        }
        intervals.push_back({left, right});
        return intervals;
    }
};
/*
https://leetcode.com/problems/data-stream-as-disjoint-intervals/
*/

(value=1) [2-5]
left=right = 1
leftInterval = stream.begin()
rightInterval != stream.end()
    (1 (+1) == 2)
    right = 5
    [2-5] deleted
[1-5] added

[1-4] (5)
left = right = 5
leftInterval != stream.begin();
    (4(+1) == 5)
    left = 1;
rightInterval == stream.end()
[1-4] --> [1-5] changed

[1-2] (3) [4-5]
leftInterval != stream.begin()
    left = 1
rightInterval != stream.end()
    right = 5
    [4-5] deleted
[1-5] changed
*/

class SummaryRanges {
    map<int, int> stream; // [left=key, right=value] pairs
public:
    SummaryRanges() {
    }
    
    void addNum(int value) {
        int left = value;
        int right = value;
        
        auto leftInterval = stream.upper_bound(value);
        auto rightInterval = leftInterval;
        if(leftInterval != stream.begin())
        { 
            leftInterval--; // [leftInterval] value [upperBound(value)]
            if(value <= leftInterval->second )  //[first value second]
                return; //nothing to change
            if(leftInterval->second + 1 == value) // [first second] (value = second+1)
                left = leftInterval->first; // left is fix
        }
        
        if(rightInterval != stream.end())
        {
            if(value+1 == rightInterval->first) // (value) [first second]
            {
                right = rightInterval->second;
                stream.erase(rightInterval);
            }
        }
        
        stream[left] = right;
    }
    
    vector<vector<int>> getIntervals() {
        vector<vector<int>> intervals;
        for(const auto& x: stream)
            intervals.push_back({x.first, x.second});
        return intervals;
    }
};

/**
 * Your SummaryRanges object will be instantiated and called as such:
 * SummaryRanges* obj = new SummaryRanges();
 * obj->addNum(value);
 * vector<vector<int>> param_2 = obj->getIntervals();
 */