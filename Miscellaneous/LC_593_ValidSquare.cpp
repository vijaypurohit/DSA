/*
593. Valid Square

https://leetcode.com/problems/valid-square/
*/

class Solution {
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        int d1 = getDistance(p1, p2);
        int d2 = getDistance(p1, p3);
        int d3 = getDistance(p1, p4);
        int d4 = getDistance(p2, p3);
        int d5 = getDistance(p2, p4);
        int d6 = getDistance(p3, p4);
        
        // dist 0 , 1, 2, 3, 4, 5
//         vector<int> dist = {d1, d2, d3, d4, d5, d6};
//         sort(dist.begin(), dist.end());
        
//         for(int x: dist)
//             cout<<x<<" ";cout<<endl;
        
//         if(dist[0] != 0 and dist[0]==dist[1] and dist[1] == dist[2] and dist[2] == dist[3]  and dist[4] == dist[5])
//             return true;
        
        unordered_set<int> s({d1, d2, d3, d4, d5, d6});
        
        if(s.count(0)==0 and s.size()<=2)
            return true;
        return false;
    }
    
    int getDistance(vector<int>& p, vector<int>& q)
    {
        int x = p[0]-q[0];
        int y = p[1]-q[1];
        return (x*x + y*y);
    }
};