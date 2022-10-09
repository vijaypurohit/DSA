/*
1306. Jump Game III
https://leetcode.com/problems/jump-game-iii/
*/

class Solution {
public:
    int n;
    vector<bool> visited;
    bool canReach(vector<int>& arr, int start) {
        n = arr.size();
        
        visited.resize(n, false);
        // return solve(start, arr);
        queue<int> q; q.push(start);
        visited[start] = true;
        
        while(!q.empty())
        {
            int i = q.front(); q.pop();
            if(arr[i]==0) return true;
            
            int left = i-arr[i];
            if(left>=0 and visited[left]==false)
            {
                visited[left]= true;
                q.push(left);
            }
            int right = i+arr[i];
            if(right<n and visited[right]==false)
            {
                visited[right]= true;
                q.push(right);
            }
        }
        return false;
    }//
    
    bool solve(int id, vector<int>& arr)
    {
//         if(id<0 or id>=n or visited[id] == true) return false;
        
//         if(arr.at(id) == 0)
//             return true;
//         visited[id] = true;
        
//         if(solve(id+arr[id], arr) || solve(id-arr[id], arr))
//             return true;
        if(visited[id] == true) return false;
        if(arr.at(id) == 0)
            return true;
        visited[id] = true;
        if(id+arr.at(id)<n and solve(id+arr.at(id), arr))
           return true;
        if(id-arr.at(id)>=0 and solve(id-arr.at(id), arr))
           return true;
           
        return false;
    }
};