/*
https://practice.geeksforgeeks.org/problems/maximum-sum-of-subarray-less-than-or-equal-to-x4033/1
*/

class Solution{ 
	public:  
	int findMaxSubarraySum(long long arr[], int n, long long k)
	{ 
        int ans=0;
        int sum=0;
        int l=0;
        for(int r=0; r<n; r++)
        {
            sum+=arr[r];
            while(sum>k)
            {
                sum-=arr[l];
                l++;
            }
            if(ans < sum)
                ans = sum;
        }
        
        //TLE
        // set<int> hashset;
        // hashset.insert(0);
        // for(int i=0; i<n; i++)
        // {
        //     sum+=arr[i];
        //     auto it = hashset.lower_bound(sum-k);
        //     if(it != hashset.end())
        //         ans = max(ans, sum - *it);
        //         // cout<<sum<<" "<<*it<<") ";
        //     hashset.insert(sum);
        // }
        return ans;
	}   
};