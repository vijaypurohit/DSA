/*
4. Median of Two Sorted Arrays

https://leetcode.com/problems/median-of-two-sorted-arrays/
*/

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        double ans;
        
        /*// Using Extra Array and SORT
        vector<int> nums3 = nums1;
        nums3.insert(nums3.end(), nums2.begin(), nums2.end());
        sort(nums3.begin(), nums3.end());
        int k = nums3.size();
        if(k%2)
            ans = (nums3[k/2]);
        else
            ans = (nums3[k/2]+nums3[k/2 - 1])/2.0;
        */
        
        /* //Using Extra Array and Merge Sort, break at median size
        int sz = m+n;
        bool odd = sz % 2;
        int midsz = sz/2 + int(odd==false);
        vector<int> nums3(sz);
        int i=0, j=0, k=0;
        
        while(i<m and j<n)
        {
            if(nums1[i]<=nums2[j]) 
                nums3[k++] = nums1[i++]; 
            else 
                nums3[k++] = nums2[j++]; 
            // cout<<nums3[k-1]<<"k ";
            if(k-1>=midsz)break;
        }
        
        while(i<m){
            nums3[k++] = nums1[i++];
            if(k-1>=midsz)break;
            // cout<<nums3[k-1]<<"i ";
        }
        
        while(j<n){
            nums3[k++] = nums2[j++];
            if(k-1>=midsz)break;
            // cout<<nums3[k-1]<<"j ";
        }
        
        if(odd) ans = (nums3[sz/2]);
        else ans = (nums3[sz/2]+nums3[sz/2 - 1])/2.0;
        
        return ans;
        */
        
        /* // Using Two Var, merge Sort, break midway
        int sz = m+n;
        bool odd = sz % 2;
        int midsz = sz/2;
        int m1 = -1, m2 = -1;
        int i=0, j=0, k=0;
        
        for(int k=0; k<= midsz; k++)
        {
            m2 = m1;
            if(i<m and j<n)
            { 
                if(nums1[i]<=nums2[j]) 
                    m1 = nums1[i++];
                else 
                    m1 = nums2[j++];
            } 
            else if(i<m){
                m1 = nums1[i++];
            } 
            else {
                m1 = nums2[j++];
            }
        } 
        if(odd) ans = m1;
        else ans = (m1+m2)/2.0;
        
        return ans;
        */
        
        //first chota hona chaiye
        if(m>n) return findMedianSortedArrays(nums2, nums1); 
        
        int sz = m+n;
        bool odd = sz % 2;
        int midsz = (sz+1)/2;
        
        int l = 0, h = m; // binary search on cuts 
        int cut1, cut2;
        while(l<=h)
        {
            cut1 = l + (h-l)/2;
            cut2 = midsz - cut1; //
            
            int left1 = (cut1==0)? INT_MIN : nums1[cut1-1];
            int left2 = (cut2==0)? INT_MIN : nums2[cut2-1];
            
            int right1 = (cut1==m)? INT_MAX : nums1[cut1];
            int right2 = (cut2==n)? INT_MAX : nums2[cut2];
            // myprint({cut1,cut2, left1, left2, right1, right2});
            if(left1 <= right2 and left2<= right1)
            {
                if(odd)
                    return max(left1, left2);
                else
                    return (max(left1, left2) + min(right1, right2))/2.0;
            }
            else if (left1 > right2)
                h = cut1-1;
            else
                l = cut1 + 1;
        }
        return 0.0;
        
    }//end
    
    void myprint(vector<int> p)
    {
        for(int &x: p)
            cout<<x<<" ";cout<<endl;
    }
};