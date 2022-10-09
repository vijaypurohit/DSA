/*
https://leetcode.com/problems/find-k-closest-elements/
658. Find K Closest Elements

*/

class Solution {
public:
    int n;
    #define pii pair<int,int> 
    vector<int> findClosestElements_HEAP(vector<int>& arr, int k, int x) 
    { 
        
        priority_queue<pii, vector<pii>, greater<>> pq; //min heap
        vector<int> ans;
        
        for(int i=0; i<n; i++)
            pq.push({abs(arr[i]-x), i});
        
        while(pq.size()>(n-k))
        {
            pii p = pq.top(); pq.pop();
            ans.push_back(arr[p.second]);
        }
        
        sort(ans.begin(), ans.end());
        return ans;
    }
    
    
    vector<int> findClosestElements_BinaryS(vector<int>& arr, int k, int x) 
    { 
       int left = 0;
       int right = n-1; 
        while(right-left >= k)
        { // cout<<left<<" "<<x-arr[left]<<": ";
            if(x-arr[left] <= arr[right]-x) right--;
            else
                left++;
        } 
        return vector<int>(arr.begin()+left, arr.begin()+right+1);        
    }
    
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        n = arr.size();
        // return findClosestElements_HEAP(arr, k, x);
        // return findClosestElements_BinaryS(arr, k, x);
        
       int left = 0;
       int right = n-k, mid;
       
        while(left<right)
        {
            mid = left+(right-left)/2;
            // cout<<mid<<" "<<x-arr[mid]<<": ";
            if(x-arr[mid] > arr[mid+k]-x)
                left=mid+1;
            else
                right=mid;
                
        }
        
        return vector<int>(arr.begin()+left, arr.begin()+left+k);        
    }
};