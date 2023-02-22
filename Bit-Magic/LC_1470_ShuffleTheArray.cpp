/*
https://leetcode.com/problems/shuffle-the-array/
1470. Shuffle the Array

*/

class Solution {
public:
    vector<int> init(vector<int>& nums, int n) {
        int size=2*n;
        vector<int> ans(size);
        
        for(int i=0; i<n; i++)
            ans[2*i] = nums[i]; // 0,1,2 stored in 0,2,4
        for(int i=n; i<size; i++) //3,4,5 stored in 1,3,5
            ans[2*(i-n)+1] = nums[i];
        return ans;
    }
    
     vector<int> shuffle_(vector<int>& nums, int n) { 
        vector<int> ans(2*n);
        
        for(int i=0; i<n; i++)
        {
            ans[2*i] = nums[i];  
            ans[2*(i)+1] = nums[n+i];
        } 
        return ans;
    }
    
    vector<int> shuffle(vector<int>& nums, int n) { 
        //store each y_i with respective x_i
        for(int i=n; i<2*n; i++)
        {
            int secNum = nums[i]<<10;
            nums[i-n] |= secNum;
        }
        
        int allOnes = pow(2,10)-1;
        
        for(int i=n-1; i>=0; i--)
        {
            int secNum = nums[i]>>10;
            int firstNum = nums[i] & allOnes;
            nums[2*i] = firstNum;  
            nums[2*(i)+1] = secNum;
        }
        return nums;
    }
};