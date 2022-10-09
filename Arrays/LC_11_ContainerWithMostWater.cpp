/*
11. Container With Most Water
https://leetcode.com/problems/container-with-most-water/
*/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int ans=0;
        int area=0, ht=0, width;
        /*//TLE
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                ht = min(height[i], height[j]);
                area = max(area, ht*(j-i));
            }
            ans = max(area, ans);
        }
        */
        int l=0;
        int r=n-1;
        
        while(l<r)
        {
            width = r-l;
            if(height[l] < height[r])
            {
                ht = height[l];
                l++;
            }
            else
            {
                ht = height[r];
                r--;
            }
            area = ht*width;
            // cout<<l<<" "<<r<<" "<<area<<endl;
            ans = max(ans, area);
        }
        
        return ans;
    }//end maxArea
};