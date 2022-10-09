class DSU{
    int n;
    vector<int> parent, rank;
    // vector<int> size;
public:
    DSU(int sz)
    {
        n = sz;
        parent.resize(n, 0);
        rank.resize(n, 0); //union by rank
        // size.resize(n, 1); //union by size
    }
    
    void init_set()
    {
        for(int i=0; i<n; i++)
            parent[i] = i;
    }
    
    int find_set(int x)
    {
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
