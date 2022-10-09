/*
https://leetcode.com/problems/minimum-money-required-before-transactions/
*/
/*
Find the worst arrangement of transactions
https://leetcode.com/problems/minimum-money-required-before-transactions/discuss/2588034/JavaC%2B%2BPython-Easy-and-Coincise
https://leetcode.com/problems/minimum-money-required-before-transactions/discuss/2591571/Dip-Explained-with-Pictures-oror-C%2B%2B-Code-oror-Easy-to-Understand
*/
class Solution {
public:
    typedef long long ll;
    long long minimumMoney(vector<vector<int>>& transactions) {
        ll loss = 0;
        int mxCashback=0, mxCost=0, mxofTwo=0;
        for(const auto &t: transactions)
        {
            int cost = t[0], cashback = t[1];
            /*
            if(cost>=cashback)
            {
                loss += cost-cashback;
                mxCashback = max(mxCashback, cashback);
            }
            else //if(cost<cashback)
            {
                mxCost = max(mxCost, cost);
            }
            */
            loss += max(0, (cost-cashback));
            mxofTwo = max(mxofTwo, min(cashback, cost)); // it will pick whatever is min according to above condition
        }
        // max will reduce the amount of money needed
        // return loss + max(mxCashback, mxCost);
        return loss + mxofTwo;

    }
    
    long long minimumMoney_(vector<vector<int>>& transactions) {
        ll ans=0, curMoney=0;
        sort(begin(transactions), end(transactions),
            [&](vector<int>& a, vector<int>& b){
             int opt1 = min(-a[0], -a[0]+a[1]-b[0]); //a-->b
            int opt2 = min(-b[0], -b[0]+b[1]-a[0]); //b-->a
            if(opt1 == opt2)return a[0]>b[0];
            return opt1<opt2;
        });
        
        for(auto & t: transactions)
        {
            int cost = t[0], cashback = t[1];
            curMoney -= cost;
            ans = min(ans, curMoney);
            curMoney += cashback;
        }
        return abs(ans);
    }
    
};