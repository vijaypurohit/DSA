/*
https://leetcode.com/problems/sort-the-people/
*/

/*
struct cmp{
  public:
  bool operator()(pair<string, int> &a, pair<string, int>& b)
    {
        return a.second < b.second;
    }
}; 
class Solution { 
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        priority_queue<pair<string, int>, vector<pair<string, int>>, cmp> people;
        int n = names.size();
        for(int i=0; i<n; i++)
        {
            people.push({names[i], heights[i]});
        }
        
        vector<string> ans;
        while(!people.empty())
        {
            auto [n, h] = people.top(); people.pop();
            ans.push_back(n);
        }
        return ans;
    }
};
*/
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();
        vector<string> ans(n);
        vector<int> idx(n, 0);
        iota(idx.begin(), idx.end(), 0);
        sort(idx.begin(), idx.end(), [&](int &i, int &j){
           return heights[i] > heights[j]; 
        });
        for(int i=0; i<n; i++)
            ans[i] = names[idx[i]];
        return ans;
    }
};