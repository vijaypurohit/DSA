/*
https://leetcode.com/problems/minimum-cost-to-hire-k-workers/
857. Minimum Cost to Hire K Workers

*/

/*
https://leetcode.com/problems/minimum-cost-to-hire-k-workers/
*/
/*
Rule 1. group me sabhi worker to unki quality ke hisab se pese diye jaye (total m se). 
wage[i] : wage[j] = quality[i] : quality[j]
wage[i] : quality[i] = wage[j] : quality[j]
Rule 2: kam se kam wo jo maang rhe he wo pura wage diya jaye. jyda bhi chlega.

agar group me sabki quality same he to min wage wale ko include kro

agar ham kisi worker ko pkad lete he jiska price per quality p/q = ratio hai.
uska ham minimum wage satisfy karte hai. to usse niche or equal ratio wale to apne aap satisfy ho hi jayenge.
(q/tot_q)*Tot_wage = min_wage
tot_wage/tot_q = min_wage/q
tot_wage = (min_wage/q)*tot_q
tot_wage = ratio_i * tot_q_of_group
*/
class Solution {
public:
    double mincostToHireWorkers(vector<int>& quality, vector<int>& wage, int k) {
        int n = quality.size();
        vector<pair<double, int>> workers(n);
        for(int i=0; i<n; i++)
            workers[i] = {(double)wage[i]/quality[i], quality[i]}; //price per unit of quality, ek unit quality ki price kitni hai
        sort(workers.begin(), workers.end());
        
         // for(auto &[r, q]: workers) cout<<"["<<r<<","<<q<<"] ";cout<<endl;
        
        priority_queue<int> pq; //maxheap
        int sumq=0;
        double ans=DBL_MAX;
        for(auto &[ratio, q]: workers)
        {
            sumq += q;
            pq.push(q);
            if(pq.size()>k)
            {
                sumq -= pq.top(); 
                pq.pop();
            }
            // cout<<"["<<ratio<<","<<q<<"] quality="<<sumq<<" cost="<<sumq*ratio<<endl;
            if(pq.size()==k)
                ans = min(ans, sumq*ratio);
        }
        return ans;
    }
};