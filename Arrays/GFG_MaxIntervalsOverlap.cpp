/*
Maximum Intervals Overlap
https://practice.geeksforgeeks.org/problems/maximum-intervals-overlap5708/1
*/

class Solution{
	
	public:
	vector<int> findMaxGuests(int Entry[], int Exit[], int n)
	{
	    int mx_exit = *max_element(Exit, Exit+n);
	   vector<int> prefix(mx_exit+2, 0);
	   for(int i=0; i<n; i++)
	   {
	       prefix[Entry[i]] += 1;
	       prefix[Exit[i]+1] -= 1;
	   }
	   
	   int guests=0;
	   int time_id=0;
	   for(int i=1; i<mx_exit; i++)
	   {
	       prefix[i] += prefix[i-1];
	       //cout<<prefix[i]<<" ";
	       if(prefix[i]>guests)
	        {
	            guests = prefix[i];
	            time_id = i;
	        }
	   }
	    
	   return {guests, time_id};
	}

};