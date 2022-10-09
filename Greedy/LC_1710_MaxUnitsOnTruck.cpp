/*
https://leetcode.com/problems/maximum-units-on-a-truck/
*/
class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int ans=0;
        sort(begin(boxTypes), end(boxTypes), [&](const auto &a, const auto &b){
            return a[1]>b[1];
        });
        for(auto &box: boxTypes)
        {
            int cnt = min(truckSize, box[0]);
            ans += cnt*box[1];
            truckSize -= cnt;
            if(cnt==0)break;
            // cout<<"("<<box[0]<<","<<box[1]<<") c="<<cnt<<" ts="<<truckSize<<endl;
        }
        return ans;
    }
};