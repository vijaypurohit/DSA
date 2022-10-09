/*
https://leetcode.com/problems/3sum/
15. 3Sum

*/
class Solution {
public:
    vector<vector<int>> threeSum_TwoPointer(vector<int>& nums) {
         
        int l=0, r=0, sum=0;
        for(int i=0; i<n-2; i++)
        {
            if(nums[i] > 0) break; // we can't make it zero
            
            if(i>0 && nums[i]==nums[i-1]) continue; //do not consider same element which is already taken previously;
            
            l = i+1;
            r = n-1;
            while(l<r)
            {
                sum=nums[i] + nums[l] + nums[r];
                if(sum == 0)
                {
                    ans.push_back({nums[i] , nums[l] , nums[r]});
                    // l++;
                    int curr_left = nums[l];
                    int curr_right = nums[r];
                    while(l<r && nums[l]==curr_left) l++;
                    while(l<r && nums[r]==curr_right) r--;
                    
                }    
                else if(sum<0)
                    l++;
                else
                    r--;
            }
        }
    
        return ans;
    }
     
     vector<vector<int>> threeSum_hash(vector<int>& nums) 
     { 
        unordered_map<int,int> hash;    
        
        for(int i=0; i<n; i++)
            hash[nums[i]] = i; // last index of i after sorting
    
        int x=0, comp=0;
        for(int i=0; i<n-2; i++)
        {
            x = nums[i];
            if(x>0) break;
            
           for(int j=i+1; j<n; j++)
           {
               comp = -1*(x + nums[j]);
               if(hash.count(comp) && hash.find(comp)->second > j)
               {
                   ans.push_back({x, nums[j], comp});
               }
               j = hash.find(nums[j])->second;
           }
            i = hash.find(x)->second; // last index of element x
        } 
        return ans;
    }
    
    int n;
    vector<vector<int>> ans; 
    vector<vector<int>> threeSum(vector<int>& nums) {
        n = nums.size();
        // if(n<3) return ans; // base case 1 
        sort(nums.begin(), nums.end());
        // if first number itself is greater than zero, then sum would never be zero
        if(nums[0]>0) return ans; //base case 2;
        
        // return threeSum_hash(nums);
        // return threeSum_TwoPointer(nums);
        
        int x=0, comp=0;
        for(int i=0; i<n-2; i++)
        {
            x = nums[i];
            if(x>0) break;
            if(i>0 && nums[i]==nums[i-1]) continue;
            
            unordered_map<int,int> seen; 
           for(int j=i+1; j<n; j++)
           {
               comp = -1*(x + nums[j]);
               if(seen.count(comp))
               {
                   ans.push_back({x, nums[j], comp});
                   j++;
                   while(j<n && nums[j]==nums[j-1]) j++;
                   j--;
               }
               else
               {
                   seen.insert({nums[j], comp});
               }
           }
        } 
        return ans;
    }
};