/*
https://leetcode.com/problems/kth-missing-positive-number/
*/

class Solution {
public:

    /*
    Keeping count of missing positive integers
    */
    int init(vector<int>& arr, int k) {
        int n = arr.size();
        
        int x = 1; // first number
        int cnt = 0; // cnt of missing positive integers
        
        for(int i=0; i<n; i++)
        {
            cnt += arr[i]-x;
            x = arr[i]+1;
            if(cnt >= k) // if cnt is more than required
                return arr[i]-(cnt-k)-1;
        }
        // number missing is more than present in array
        return arr[n-1]+(k-cnt);
    }

/*
Using Binary Search
We need to find place, of k-th missing positive number, so, let us create virtual list (virtual, because we will not compute it full, but only elements we need):

B = [2 (- 1), 3 (- 2), 4 (- 3), 7 (- 4), 11 (- 5), 12 (- 6)] = [1, 1, 1, 3, 6, 6].
What this list represents is how many missing numbers we have for each index: 
for first number we have missing number [1], for next two iterations also, when we add 7, we have 3 missing numbers: [1, 5, 6], when we add 11, we have 6 missing numbers: [1, 5, 6, 8, 9, 10]. 

How we evalaute values of list B? Very easy, it is just A[i] - i - 1

What we need to find now in array B: first element, which is GREATER or EQUAL than k. In our example, we have [1, 1, 1, 3, 6, 6]. 
We will find it with binary search: this element have index end = 4. Finally, we need to go back to original data, we have

arr = [2, 3, 4, 7, 11, 12]
B = [1, 1, 1, 3, 6, 6]

So, what we now know that our answer is between numbers 7 and 11 and it is equal to arr[end] - (B[end] - k + 1), where the second part is how many steps we need to make backward. 
Using B[end] = arr[end] - end - 1, 
we have end + k, we need to return.
*/
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int low = 0, high = n-1;
        while(low <= high)
        {
            int mid = low + (high - low)/2;
            if(arr[mid] - (mid+1) < k)
                low = mid+1;
            else
                high = mid-1;
        }
        
        return (high+1) + k ;
    }
};