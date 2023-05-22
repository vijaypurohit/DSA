/*
https://leetcode.com/problems/ipo/
*/

/*
 If we choose a project other than the most profitable one, our capital increases by a value less than the maximum possible, and fewer new options become available. It means we should greedily choose the maximum profit every time.
*/

class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n = profits.size();
        vector<pair<int,int>> projects;
        
        for(int i=0; i<n; i++)
            projects.emplace_back(capital[i], profits[i]);
        sort(projects.begin(), projects.end());
        
        priority_queue<int> q;
        int ptr=0;
        for(int i=0; i<k; i++)
        {
            while(ptr<n and projects[ptr].first <= w) // if capital required is less than budget, use their profit for decision
                q.push(projects[ptr++].second);
            if(q.empty())
                break;
            w += q.top(); // add the profit to capital;
            q.pop();
        }
        return w;
    }
};