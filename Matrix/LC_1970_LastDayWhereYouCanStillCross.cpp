/*
https://leetcode.com/problems/last-day-where-you-can-still-cross/
*/
class DSU{
    int n;
    vector<int> parent, rank;
    // vector<int> size;
public:
    DSU(int sz) {
        n = sz;
        parent.resize(n, 0);
        rank.resize(n, 0); //union by rank
        // size.resize(n, 1); //union by size
        for(int i=0; i<n; i++) parent[i] = i;
    } 
    
    int find_set(int x) {
        if(parent[x] == x) return x; //return parent
        return parent[x] = find_set(parent[x]); // travel upwards, path compression
    }
    
    bool union_set(int x, int y)
    {
        int px = find_set(x);
        int py = find_set(y);
        if(px == py) return true;
        if(rank[px] > rank[py])
            swap(px, py);
        parent[px] = py;
        
        if(rank[px] == rank[py])
            rank[py]++;
        // size[py] += size[px]; //union by size
        return false;
    }
};


class Solution {
public:
    vector<pair<int,int>> dirs = {{0,1}, {0,-1}, {1,0}, {-1,0}}; 
    int latestDayToCross(int row, int col, vector<vector<int>>& cells) {
        DSU dsu(row*col+2); // top and bottom
        vector<vector<int>> grid(row, vector<int>(col, 0)); // zero all water
       
        for(int i=cells.size() - 1; i>=0; i--){ //delete ony by one water
            int r = cells[i][0] - 1, c = cells[i][1] - 1;
            int index = r*col + c + 1;
            grid[r][c] = 1; // land now, 
            
            for( auto [x,y]: dirs){
                x = x+r; y = y+c;
                int newidx = x*col+y+1;
                if(x>=0 and y>=0 and x<row and y<col and grid[x][y] == 1){
                    dsu.union_set(index, newidx);
                }
            }//
            if(r==0) dsu.union_set(0, index);
            if(r==row-1)dsu.union_set(row*col+1, index);
            if(dsu.find_set(0) == dsu.find_set(row*col+1))
                return i;
        }//
        return -1;
    }//
};