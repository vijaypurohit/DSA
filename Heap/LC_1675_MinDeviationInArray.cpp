/*
https://leetcode.com/problems/minimize-deviation-in-array/
*/

/*
Intuition 1: we can divide even numbers multiple times - till we get an odd number, but we can only double odd numbers once. 
            After that, it will become an even number.
Intuition 2: Even numbers never increase.

Flip: 
we can double all odd numbers first, so we can  forget of the second operation. 
Now, we only need to decrease the largest number - while it's even, which results a very simple solution.

Solution:
Double odd numbers and put all numbers into a max heap. Track the smallest number. 
Track the minimum difference between the top of the heap and the smallest number. While the top of the heap is even, remove it, divide, and put back to the heap.

Why are we stopping when we see an odd number as max? 
We can reduce the deviation by either reducing the max or increasing the min.
When we have an odd number at top top we can not reduce the max any further.

What about if we increase the min?
If it is even we can't do that.
If it is odd => It was even at some point(We started with all evens) => 2*(current min) > current_max
And the minimum possible difference for 2*(current min) has already been accounted for.(It could not have decreased further as we are only decreasing numbers i.e. dividing by 2)
So here we can safely stop.

Time Complexity: O(nlog(m)log(n))
Space Complexity: O(n)

If the maximum element is m, the number of candidates in its range is at most log(m), which happens when it is a power of 2. There are n elements, for a maximum of nlog(m) candidates. At each step, a new element is inserted into the priority queue with a time complexity of O(log(n)).

*/
class Solution {
public:
    int minimumDeviation1(vector<int>& nums) {
        int n = nums.size();
        int min_n=INT_MAX;
        priority_queue<int> pq; // max heap
        
        for(int x: nums)
        {
            x = (x&1) ? x*2 : x; // multiply with 2 on ODD
            pq.push(x); // push all even numbers into heap
            min_n = min(min_n, x);
        }
        int ans = INT_MAX;
        while(pq.top() % 2 == 0 ) //now decerease only largest number, while it is even
        {
            int x = pq.top(); pq.pop();
            ans = min(ans, x - min_n); // pick top element and calculate the max difference possible
            min_n = min(min_n, x/2);
            pq.push(x/2);
            // cout<<"x:"<<x<<" "<<min_n<<", "<<ans<<endl;
        }
        return min(ans, pq.top() - min_n);
    }//
    
    int minimumDeviation(vector<int>& nums) {
        int n = nums.size();
        int min_n=INT_MAX; 
        
        for(int &x: nums)
        {
            x = (x&1) ? x*2 : x; // multiply with 2 on ODD 
            min_n = min(min_n, x);
        }
        make_heap(nums.begin(), nums.end());
        int ans = INT_MAX;
        while(nums[0] % 2 == 0 ) //now decerease only largest number, while it is even
        {
            int x = nums[0]; pop_heap(begin(nums), end(nums));
            ans = min(ans, x - min_n); // pick top element and calculate the max difference possible
            min_n = min(min_n, x/2);
            nums.back()/=2;
            push_heap(begin(nums), end(nums));
            // cout<<"x:"<<x<<" "<<min_n<<", "<<ans<<endl;
        }
        return min(ans, nums[0] - min_n);
    }//
};