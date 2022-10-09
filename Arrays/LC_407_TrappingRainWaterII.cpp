/*
https://leetcode.com/problems/trapping-rain-water-ii/
407. Trapping Rain Water II
*/

class Solution {
public:
    int m, n;
    typedef pair<int, int> pi;
    typedef pair<int, pi> ppi;
    vector<pi> dirs = {{0, 1}, {0,-1}, {1, 0}, {-1, 0}};
    int trapRainWater(vector<vector<int>>& heightMap) {
        m = heightMap.size();
        n = heightMap[0].size();
        int ans=0;
        
        priority_queue<ppi, vector<ppi>, greater<>> pq;
        vector<vector<bool>> visited(m, vector<bool>(n, 0));
        
        //push all boundary values to pq;
        for(int r=0; r<m; r++)
        {
            pq.push({heightMap[r][0], {r, 0}});// first col
            pq.push({heightMap[r][n-1], {r, n-1}}); // last col
            visited[r][0] = true;
            visited[r][n-1] = true;
        }
        for(int c=1; c<n-1; c++)
        {
            pq.push({heightMap[0][c], {0, c}}); // first row
            pq.push({heightMap[m-1][c], {m-1, c}}); //last row
            visited[0][c] = true;
            visited[m-1][c] = true;
        }
        
        // now pop-out min-height cell and try to push boundary towards inside by adding near by cells
        int ht, i, j;
        int maxHeight=0;
        while(!pq.empty())
        {
            ht = pq.top().first;
            i = pq.top().second.first;
            j = pq.top().second.second; pq.pop();
            maxHeight = max(maxHeight, ht);
            for(auto [x,y] : dirs)
            {
                x = x+i;
                y = y+j;
                if(x<0 or y<0 or x>=m or y>=n or visited[x][y]) continue;
                pq.push({heightMap[x][y], {x, y}});
                visited[x][y] = true;
                if(heightMap[x][y] < maxHeight)
                    ans += maxHeight - heightMap[x][y];
            }
        }
        
        return ans;
    }//
};