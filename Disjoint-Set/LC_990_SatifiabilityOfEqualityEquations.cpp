/*
https://leetcode.com/problems/satisfiability-of-equality-equations/
*/
/*
sort operands b,a -> a,b
== : a->b
!= : a<-b
check if cycle or not (DFS) => O(n*2)
or
union-find: connect nodes with equality 
check if nodes with inequalities are in diff sets
*/
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

class Solution { 
public:
    bool equationsPossible(vector<string>& equations) {
        int n = equations.size();
        DSU ds(26);
        ds.init_set();
        sort(equations.begin(), equations.end(), [&](string &x, string &y){ return x[1] > y[1];});
        for(string &s: equations)
        {
            int a = s[0]-'a', b = s[3]-'a'; 
            if(s[1] == '=')
            {
                 ds.union_set(a, b); // if both variables are equal then union it.
            } 
            else{  // if there is unequality, then check their union if already same then return false
                if(ds.find_set(a) == ds.find_set(b))
                    return false;
            } 
        }
        // for(string &s: equations)
        // {
        //     int a = s[0]-'a', b = s[3]-'a'; 
        //     if(s[1] == '!')
        //     {  // if there is unequality, then check their union if already same then return false
        //         if(ds.find_set(a) == ds.find_set(b))
        //             return false;
        //     } 
        // }
        return true;
    }//
};