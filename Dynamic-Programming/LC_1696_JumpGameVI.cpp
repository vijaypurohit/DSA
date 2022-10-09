/*
1696. Jump Game VI

https://leetcode.com/problems/jump-game-vi/
*/

class Solution {
public:
    int n;
    int maxResult(vector<int>& nums, int k) {
        n = nums.size();
        // this->k = k;
        if(n==1) return nums[0];
        
        deque<pair<int,int>> dq; // dp,index pair
        dq.push_back({nums[0], 0});
        int cur_val = 0;
        
        for(int i=1; i<n; i++)
        {
            if(dq.front().second +k < i )
                dq.pop_front();
            
            cur_val = dq.front().first + nums[i];
            
            while(!dq.empty() and dq.back().first <= cur_val)
                dq.pop_back();
            
            dq.push_back({cur_val, i});
            // cout<<i<<"-> "<<cur_val<<" ->";
            // for(auto x: dq)
            //     cout<<"("<<x.second<<" "<<x.first<<") "; cout<<endl;
        }
        
        return cur_val;
        
        /*
        deque<int> dq{0}; // deque is used to store the indices of nums 
        // dq.push(0);
        vector<int> dp(n, 0);
        dp[0] = nums[0];
        for(int i=1; i<n; i++)
        {
            if(i > dq.front() + k) // if at i-th index, element in front of queue goes out of window 
                dq.pop_front();
            dp[i] = nums[i]+dp[dq.front()]; // pick element from front of queue as it is maximum
            
            while(!dq.empty() and dp[dq.back()]<= dp[i])
                dq.pop_back();
            
            dq.push_back(i);
            
            // cout<<i<<"-> "<<dp[i]<<" -> ";cout<<"\t"; 
            // for(auto x: dq) cout<<x<<" "<<nums[x]<<") ";cout<<"\t"; 
            // for(auto x: dp) cout<<x<<" ";cout<<endl; 
        }
        return dp[n-1];
        */
    }
};