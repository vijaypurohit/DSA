/*
https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/
*/
/*
Now just think after sorting we need to increase the elements at the left side of the array and decrease the elements at the right side of the array. So lets take the first nums[0] and last element nums[n-1], the element to whom they should be made equal be centre. Hence nums[0] <= centre <= nums[n-1]. If we take any other value as centre then total steps needed will be more Now if we continue doing the same step for 2nd, 3rd ... ith element we get a general relation nums[i] <= centre <= nums[n-1-i].This ends at the central element of the array if n is odd i.e. nums[n/2] and if n is even it end at the condition nums[n/2 -1] <= centre <= nums[n/2]. So centre will be mid value in case of n is odd and can be any value between the two middle values if n is even.

Note : Steps for each number to reach another number is simple their absolute difference because in each step we can decrease or increase the value by 1.

First Approach :
In this approach we just find the median after sorting the array which is nums[n/2] and add the absolute difference of the elements in the array with the median.

Second Approach :
If we notice carefully the median is always inside the range of nums[i] ans nums[n-1-i] elements. Now for any value x in the range the total steps needed to reach x for both the numbers is (x - nums[i]) + (nums[n-1-i] - x) = nums[n-1-i] - nums[i]

Third Approach :
There is a function with syntax nth_element (RandomAccessIterator first, RandomAccessIterator nth, RandomAccessIterator last);
The function of this is that it rearranges the array in such a way such that the element at the nth position is the one which should be at that position if we sort the list from the first to last iterator. It uses the quick select method for this.
In this problem we don't need full array sorted we just need the median which is the n/2 th element in the sorted array. 
*/
class Solution {
public:
    int n;
    int minMoves2(vector<int>& nums) {
        n = nums.size();
        int steps=0;
        //sort(nums.begin(), nums.end());
        //Approach 1:
        // int median = nums[n/2];
        // for(int &x: nums)
        //     steps += abs(median - x);
        // return steps;
        
        //Apprach 2:
        // for(int i=0; i<n/2; i++)
        //     steps += nums[n-1-i] - nums[i];
        // return steps;
        
        //Apprach 3:
        nth_element(nums.begin(), nums.begin()+(n/2), nums.end());
        int median = nums[n/2];
        for(int &x: nums)
            steps += abs(median - x);
        return steps;
    }
};