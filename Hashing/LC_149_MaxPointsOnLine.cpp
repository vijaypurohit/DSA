/*
https://leetcode.com/problems/minimum-lines-to-represent-a-line-chart/
*/
class hash_pair{
    public:
    template<class T_1,class T_2>
    size_t operator()(const pair<T_1,T_2>& x) const {
        auto hash_x=hash<T_1>()(x.first);
        auto hash_y=hash<T_2>()(x.second);
        if(hash_x!=hash_y)  
            return hash_x ^ hash_y;
        return hash_x;
    }
};
class Solution {
public:
    int n;
    int maxPoints(vector<vector<int>>& points) {
        n = points.size();
        if(n<=2) return n;
        
        // return BruteForce(points);
        // return HashMapDouble(points);
        // return HashMapString(points);
        return HashMapCustomHash(points);   
    }
    
    int HashMapCustomHash(vector<vector<int>>& points)
    {
        int ans=0;
        for(int i=0; i<n-1; i++)
        {
            unordered_map<pair<int,int>,int, hash_pair> lines;
            int x = points[i][0], y = points[i][1]; 
                 
            for(int j=i+1; j<n; j++)
            {
                int nx = points[j][0], ny = points[j][1];
                int dx = nx-x, dy = ny-y;  
                int g = __gcd(dx, dy); 
                lines[make_pair(dx/g, dy/g)]++;
            } 
            for(auto slope: lines)
                ans = max(ans, slope.second); 
        }
        return ans+1;
    }
    
    int HashMapString(vector<vector<int>>& points)
    {
        int ans=0;
        for(int i=0; i<n-1; i++)
        {
            unordered_map<string,int> lines;
            int x = points[i][0], y = points[i][1]; 
                
            // cout<<endl<<"["<<x<<" "<<y<<"],->";
            for(int j=i+1; j<n; j++)
            {
                int nx = points[j][0], ny = points[j][1];
                int dx = nx-x, dy = ny-y;  
                int g = __gcd(dx, dy);
                string slope = to_string(dx/g)+"_"+to_string(dy/g); 
                lines[slope]++;
                // cout<<"["<<nx<<" "<<ny<<"], " <<slope<<") ";
            } 
            for(auto slope: lines)
                ans = max(ans, slope.second); 
        }
        return ans+1;
    }
    
    
    int HashMapDouble(vector<vector<int>>& points)
    {
        int ans=0;
        for(int i=0; i<n-1; i++)
        {
            unordered_map<double,int> lines;
            int x = points[i][0], y = points[i][1]; 
                
            // cout<<endl<<"["<<x<<" "<<y<<"],->";
            for(int j=i+1; j<n; j++)
            {
                int nx = points[j][0], ny = points[j][1];
                int dx = nx-x, dy = ny-y; 
                double slope = 0;
                if(dx!=0)
                    slope = dy*1.0/dx;
                else
                    slope = INT_MIN;
                
                lines[slope]++;
                // cout<<"["<<nx<<" "<<ny<<"], " <<slope<<") ";
            } 
            for(auto slope: lines)
                ans = max(ans, slope.second); 
        }
        return ans+1;
    }
    
    
   // BruteForce Working
    int BruteForce(vector<vector<int>>& points)
    {
        int ans=0; 
        for(int i=0; i<n-2; i++)
        { 
            int x = points[i][0], y = points[i][1]; 
            for(int j=i+1; j<n-1; j++)
            {
                int nx = points[j][0], ny = points[j][1];
                int dx = nx-x, dy = ny-y; 
                int c = dx*ny - dy*nx;
                int count = 2;
                for(int k=j+1; k<n; k++)
                {
                    if(c == dx*points[k][1] - dy*points[k][0])
                        count++;
                }
                ans = max(ans, count);
            } 
        } 
        return ans;
    }
    
};