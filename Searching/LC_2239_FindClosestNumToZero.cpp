/*
https://leetcode.com/problems/find-closest-number-to-zero/
*/

#define pii pair<int,int> 
struct comp{
  bool operator()(pii &a, pii & b)
  {
      if(a.first == b.first)
          return a.second < b.second;
      return a.first > b.first;
  }
};

class Solution {
public:
    int n;
    int findClosestNumber_HEAP(vector<int>& arr, int k, int x) 
    {  
        priority_queue<pii, vector<pii>, comp> pq; //min heap
        int ans;
        
        for(int i=0; i<n; i++)
            pq.push({abs(arr[i]-x), arr[i]});
        
        pii p = pq.top(); pq.pop();
        ans=p.second;
         
        return ans;
    }
    
    int findClosestNumber(vector<int>& nums) {
        n = nums.size();
        // return findClosestNumber_HEAP(nums, 1, 0);
        
        return *min_element(begin(nums), end(nums), [&](int &a, int& b){
           return abs(a) < abs(b) || (abs(a) == abs(b) && a>b); 
        });
        
        int ans = INT_MAX;
        for(int &x: nums)
        {
            if(abs(x) < abs(ans))
            {
                ans = x;
            }
            else if(abs(x) == abs(ans))
                ans = max(ans, x);
        }
        return ans;
    }
    
};