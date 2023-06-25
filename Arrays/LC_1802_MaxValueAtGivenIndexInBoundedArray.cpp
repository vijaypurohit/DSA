/*
https://leetcode.com/problems/maximum-value-at-a-given-index-in-a-bounded-array/
*/
/*
0.1.2..............idx.............(n-3).(n-2).(n-1)
1 1 1 2 3    mid-1 mid  mid-1   3  2  1    1     1
mid-idx            mid                   mid-(n-1-idx)

*/
class Solution {
public:
    int maxValue(int n, int index, int maxSum) {
        int low=1, high=maxSum, ans = -1;
        while(low<=high){
            int mid = low + (high-low)/2; //(low + high + 1)
            // cout<<endl<<low<<" "<<high<<" "<<mid<<" ";
            if(getSum(mid, n, index) <= maxSum){
                ans = mid;
                low = mid+1;
            }
            else
                high = mid-1;
        }
        return ans;
    }//
    
    long getSum(int mid, int n, int idx){
        long sum=0;
        // on idx left
        if(mid > idx){//there are idx+1 numbers in ap
            sum += (long)(mid + mid-idx)*(idx+1)/2; //airthmetic progression
        }else{
            sum += (long)(mid + 1)*mid/2 + idx-mid+1;
        }
        
        // on idx right
        if(mid >= n-idx){
            sum += (long)(mid + mid-n+1+idx)*(n-idx)/2;
        }else{
            sum += (long)(mid+1)*mid/2 + n-idx-mid;
        }
        
        // cout<<sum-mid;
        return sum - mid; //mid counted twice
    }
};