/*
https://leetcode.com/problems/minimize-maximum-of-array/
*/
/* 
In short -> try minimizing the maximum value

Let's start with another version of the problem: 
let's say we have operations that allow us to move values both forward and backward. Then, we have full control over the values, and we can apply a greedy approach of evenly distributing the values across the array. The answer would be the average rounded up. This is similar to trapping rainwater in a basin and calculating the height of the water.

Now back to the original problem, we can still try minimizing the maximum value with a greedy approach using integer division, but we have to solve the problem from the front(left) to the back(right).

for eg: 3,7,1,3
if moving in both directions allowed ans = 4 (4,4,3,3 ceil(14/3))
if moving in forward only (prefix sum is never decreasing)
3       i=0 -> ans=3  psum=3  ceil(3/1)=3
3 7     i=1 -> ans=5  psum=10  ceil(10/2)=5
3 7 1   i=2 -> ans=5  psum=11  ceil(11/3=4 we cannot move values forward
3 7 1 3 i=3 -> ans=5  psum=17  ceil(17/4)=5
 
*/
class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
        int n = nums.size();
        long long ans = 0, prefixsum=0;
        
        for(int i=0; i<n; i++){
            prefixsum += nums[i];
            ans = max(ans, (prefixsum+i)/(i+1));
            // cout<<prefixsum<<" "<<ans<<endl;
        }
        return ans;
    }
};