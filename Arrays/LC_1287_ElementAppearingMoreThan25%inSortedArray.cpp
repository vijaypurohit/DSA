/*
https://leetcode.com/problems/element-appearing-more-than-25-in-sorted-array/
*/
class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        int n4 = n/4; 
        /*
        for(int i=0; i<n; )
        {
            int cnt=1, j=i+1;
            for( ; j<n and arr[j]==arr[i]; j++)
                cnt++;
            if(cnt > n4) return arr[i];
            i = j;
        }
        return -1;
        */
        
        /*
        unordered_map<int,int> freq;
        for(int &x: arr)
        {
            if(++freq[x] > n4) return x;
        }
        return -1;
        */
        
        int idx1 = n / 4;
        int idx2 = n/2; //n
        int idx3 = 3*n/4 ;
        for(int i: {idx1, idx2}) // starting with these index
        { 
            //calculate its lower bound index where it exist
            int pos = lower_bound(begin(arr), end(arr), arr[i]) - arr.begin();
            if(arr[pos] == arr[pos+idx1])
                return arr[i];
            
        }
        return arr[idx3];
    }
};