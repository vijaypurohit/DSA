/*
https://leetcode.com/problems/find-good-days-to-rob-the-bank/
2100. Find Good Days to Rob the Bank
*/
class Solution {
public:
    vector<int> goodDaysToRobBank(vector<int>& security, int time) { 
        int n = security.size();
        vector<int> ans;  
        if(time==0){
            for(int i=0; i<n; i++) ans.push_back(i);
            return ans;
        }
        vector<int> dec(n, 0), inc(n, 0);
        for(int i=1; i<n; i++)
        {
            if(security[i-1] >= security[i])
                dec[i] = dec[i-1]+1; // if dec series then asc order of num
            if(security[i-1] <= security[i])
                inc[i] = inc[i-1]+1; // if inc series then asc order of num
        }
        // for(int i=0; i<n; i++) cout<<dec[i]<<" "; cout<<endl;
        // for(int i=0; i<n; i++)  cout<<inc[i]<<" "; cout<<endl;
        for(int i=time; i<n-time; i++)
        {
            if((dec[i]-dec[i-time])>=time and (inc[i+time]-inc[i])>=time) // in range all are inc or dec 
                ans.push_back(i);
        } 
        return ans;
    }
};