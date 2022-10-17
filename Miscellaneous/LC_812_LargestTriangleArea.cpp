/*
https://leetcode.com/problems/largest-triangle-area/
*/

class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        //Brute Force Area of Triangle 1/2 (vec(AB)*vec(AC))
        size_t n = points.size();
        double ans=0;
        for(size_t i=0; i<n-2; i++)
        {
            for(size_t j=i+1; j<n-1; j++)
            {
                for(size_t k=j+1; k<n; k++)
                { 
                    // ans = max(ans, using_determinants(points[i], points[j], points[k]));
                    // ans = max(ans, using_heronsForumula(points[i], points[j], points[k]));
                    ans = max(ans, using_crossproduct(points[i], points[j], points[k]));
                }
            }
        }
        return ans;
    }//
     
    //S = abs((x2 - x1)(y3 - y1) - (x3 - x1)(y2 - y1))/2.
    double using_crossproduct(vector<int>& a, vector<int>& b, vector<int>& c)
    {
        int x1 = a[0], y1 = a[1];
        int x2 = b[0], y2 = b[1];
        int x3 = c[0], y3 = c[1]; 
        double v_x  = x2-x1, v_y = y2-y1;
        double t_x  = x3-x1, t_y = y3-y1;  
        double area = abs(v_x*t_y - t_x*v_y)/2.0;
        return area;
    }
    
    //1/2(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))
    double using_heronsForumula(vector<int>& a, vector<int>& b, vector<int>& c)
    {
        int x1 = a[0], y1 = a[1];
        int x2 = b[0], y2 = b[1];
        int x3 = c[0], y3 = c[1]; 
        double d1  = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
        double d2  = sqrt((x1-x3)*(x1-x3) + (y1-y3)*(y1-y3));
        double d3  = sqrt((x2-x3)*(x2-x3) + (y2-y3)*(y2-y3));
        double s = (d1+d2+d3)/2;
        double area = sqrt(s*(s-d1)*(s-d2)*(s-d3));
        return area;
    }
    
    double using_determinants(vector<int>& a, vector<int>& b, vector<int>& c)
    {
        int x1 = a[0], y1 = a[1];
        int x2 = b[0], y2 = b[1];
        int x3 = c[0], y3 = c[1]; 
        double area = (0.5)*abs((x1*(y2-y3) - x2*(y1-y3) + x3*(y1-y2)));
        return area;
    }
                                  
                                  
};