/* 
 https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1
*/

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, int s)
    {
        int fsum = 0; //finding sum
        int start = 0, end=0;
        
        while(end<n || start<n){
            
            if(fsum == s){
                return {start+1,end}; // end increment is included whenever element is added.
            }
            else if(fsum > s){
                fsum -= arr[start];
                start++;
            }
            else{
                fsum += arr[end];
                end++;
            }
        }
        return {-1};
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends
