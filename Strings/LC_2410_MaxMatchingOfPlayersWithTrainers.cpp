/*
https://leetcode.com/problems/maximum-matching-of-players-with-trainers/
*/

class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        int np = players.size();
        int nt = trainers.size();
        int ans=0;
        /*
        sort(players.begin(), players.end());
        priority_queue<int, vector<int>, greater<>> pq(trainers.begin(), trainers.end());
        int i=0;
        while(!pq.empty())
        {
            int p = pq.top(); pq.pop();
            if(players[i] <= p)
            {
                ans++;
                i++;
            }
            if(i==np)break;
        }
        
        return ans;
        */
        
        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());
        int j=0, i=0;
        while(i<np and j<nt)
        {
            if(players[i] <= trainers[j]){
                ans++;
                i++;
                j++;
            }
            else if(players[i] > trainers[j])
                j++;
        }
        return ans;
    }
};