/*
https://leetcode.com/problems/the-skyline-problem/
*/
class Solution {
public:
    int n;
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
        n=buildings.size();
        
        
        return usingLineSweep(buildings);
    }//
    
    vector<vector<int>> usingLineSweep(vector<vector<int>>& buildings)
    {
        //step 1:
        vector<pair<int,int>> points;
        points.reserve(2*n);// [x,y] two points for every building
        for(const auto& b: buildings)
        {
            const int l = b[0], r = b[1], h = b[2];
            points.emplace_back(l, -h); // for same point if height is bigger, that will come first in sorting
            points.emplace_back(r, h); 
        }
        sort(begin(points), end(points));
        // for(const auto& p: points) cout<<"("<<p.first<<" "<<p.second<<") "; cout<<endl;
        
        //step 2:
        vector<vector<int>> ans;
        multiset<int> heights = {0}; 
        int max_curHeight_sofar = 0;
        for(const auto& [p, h]: points)
        {
            if(h<0)
                heights.insert(-h); // new building height insert it;
            else // building height ends here
                heights.erase(heights.find(h));
            
            const int cur_height = *(heights.rbegin()); // cur max height
            if(cur_height != max_curHeight_sofar) // if height doesnt change
            {
                ans.emplace_back(vector<int>{p, cur_height});
                max_curHeight_sofar = cur_height;
            }
        } 
        return ans;
    }//
};