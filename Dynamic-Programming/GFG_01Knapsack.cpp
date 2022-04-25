/*
https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1#
0 - 1 Knapsack Problem 
*/
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack1(int W, int wt[], int val[], int n) 
    { 
    // Using array
    //   int dp[n+1][W+1];
    //   for(int i=0; i<=n; i++) dp[i][0] = 0;
    //   for(int i=0; i<=W; i++) dp[0][i] = 0;
    //using Vector
    //  vector<vector<int>> dp(n+1, vector<int>(W+1, 0));
    
    // Using Recursion
      vector<vector<int>> dp(n+1, vector<int>(W+1, -1));
      return knapSackRec( n-1,  W,  dp, wt,  val ) ;
       
       for(int i=1; i<=n; i++)
       {
           for(int w=1; w<=W; w++)
           {
               if(w < wt[i-1]) // if current knapsack capacity is less than item weight we can take.
                   dp[i][w] = dp[i-1][w];
               else
                   dp[i][w] = max(dp[i-1][w] , val[i-1]+dp[i-1][w-wt[i-1]]);
           }
       }
       return dp[n][W];
    }// end 
    
    int knapSack(int W, int wt[], int val[], int n) 
    { 
      int dp[W+1]={0};
    
       for(int i=1; i<=n; i++)
       {
           for(int w=W; w>=0; w--)
           {
               if(w >= wt[i-1]) // current weight of item is less than current knapsack capacity
                   dp[w] = max(dp[w] , val[i-1]+dp[w-wt[i-1]]);
           }
       }
       return dp[W];
    }// end 
    
    int knapSack2(int W, int wt[], int val[], int n) 
    { 
    //   int dp[n+1][W+1] = {0};
    //   for(int i=0; i<=n; i++) dp[i][0] = 0;
    //   for(int i=0; i<=W; i++) dp[0][i] = 0;
       vector<vector<int>> dp(2, vector<int>(W+1, 0));
       int ind=0, ind_=0;
       
       for(int i=1; i<=n; i++)
       {
           for(int w=1; w<=W; w++)
           {
               ind = i%2;
               ind_ = (i-1)%2;
               
               if(w < wt[i-1]) // if current knapsack capacity is less than item weight we can take.
                   dp[ind][w] = dp[ind_][w];
               else
                   dp[ind][w] = max(dp[ind_][w] , val[i-1]+dp[ind_][w-wt[i-1]]);
           }
       }
       return dp[n%2][W];
    }// end 
    
    int knapSackRec(int i,  int W, vector<vector<int>>& dp, int wt[], int val[] ) 
    { 
       if(i<0) 
            return 0;
       
       if(dp[i][W] != -1)
            return dp[i][W];
            
       if(W < wt[i]) // if weight of item greater than knapsack capacity
           dp[i][W] = knapSackRec(i-1, W, dp, wt, val);
       else
           dp[i][W] = max(knapSackRec(i-1, W, dp, wt, val) , val[i]+knapSackRec(i-1, W-wt[i], dp, wt, val));
   
       return dp[i][W];
    }// end 

};

// { Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends