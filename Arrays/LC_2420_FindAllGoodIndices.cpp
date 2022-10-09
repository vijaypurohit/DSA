/*
https://leetcode.com/problems/find-all-good-indices/
*/

static const auto io_sync_off = [](){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return nullptr;
}();
class Solution {
public:
    vector<int> goodIndices(vector<int>& nums, int k) {
        int n = nums.size();
        /*
        vector<int> left(n, 0), right(n, 0);
        for(int i=1; i<n; i++)
        {
            if(nums[i-1] >= nums[i])
                left[i] = left[i-1]+1;
            if(nums[i-1] <= nums[i])
                right[i] = right[i-1]+1; 
        }
        // for(int i=0; i<n; i++) cout<<left[i]<<" "; cout<<endl;
        //  for(int i=0; i<n; i++)  cout<<right[i]<<" "; cout<<endl;
        
        vector<int> ans; 
        for(int i=k; i<n-k; i++)
        {
            if(((left[i-1] - left[i-k])==k-1)and ((right[i+k] - right[i+1])==k-1))
                ans.push_back(i);
        } 
        return ans;
        */
        vector<int> dec(n, 1), inc(n, 1);
        for(int i=1; i<n; i++)
        {
            if(nums[i-1] >= nums[i])
                dec[i] = dec[i-1]+1;
            if(nums[i-1] <= nums[i])
                inc[i] = inc[i-1]+1; 
        }
        // for(int i=0; i<n; i++) cout<<dec[i]<<" "; cout<<endl;
        // for(int i=0; i<n; i++)  cout<<inc[i]<<" "; cout<<endl;
        vector<int> ans;  
        for(int i=k; i<n-k; i++)
        {
            if(dec[i-1]>=k and inc[i+k]>=k)
                ans.push_back(i);
        } 
        return ans;
    }
};