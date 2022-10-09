/*
1337. The K Weakest Rows in a Matrix
https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/
*/

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int m = mat.size();
        int n = mat[0].size();
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;
        for(int i=0; i<m; i++)
        {
            // int cnt=0;
            // for(int j=0; j<n; j++)
            // {
            //     if(mat[i][j]==1)
            //         cnt++;
            // }
            int cnt = lower_bound(mat[i].rbegin(), mat[i].rend(), 1) - mat[i].rbegin();
            cnt = n-cnt;
            // cout<<i<<" "<<cnt<<endl;
            pq.push({cnt, i});
        }
        
        vector<int> ans;
        while(k--)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }//
};