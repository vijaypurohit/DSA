/*
https://leetcode.com/problems/number-of-ways-to-reorder-array-to-get-same-bst/
*/

class Solution {
    const int mod = 1e9+7;
    vector<vector<long long>> table; 
public:
    int numOfWays(vector<int>& nums) {
        int n = nums.size();
        // Pascal's Triangle, 0 to n, for coefficient
        table.resize(n+1);
        for(int i=0; i<=n; i++){
            table[i] = vector<long long>(i+1, 1);
            for(int j=1; j<i; j++){// 0 and i is 1
                table[i][j] = (table[i-1][j-1] + table[i-1][j])%mod;
            }
        }
        
        return (dfs(nums) - 1) % mod; // -1 for original nums
    }
    
    long long dfs(vector<int>& nums){
        int n = nums.size();
        if(n < 3) return 1;
        
        vector<int> leftNodes, rightNodes;
        for(int i=1; i<n; i++){
            if(nums[i] < nums[0]) leftNodes.push_back(nums[i]);
            else rightNodes.push_back(nums[i]);
        }
        
        long long leftWays = dfs(leftNodes) % mod;
        long long rightWays = dfs(rightNodes) % mod;
        
        return (((leftWays*rightWays)%mod )*table[n-1][leftNodes.size()] )%mod;
    }
};