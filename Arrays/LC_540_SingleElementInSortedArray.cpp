/*
https://leetcode.com/problems/single-element-in-a-sorted-array/
*/
class Solution {
public:
    int init(vector<int>& nums) {
        int n = nums.size();  
        int low = 0, high = n-1;
        
        while(low <= high)
        {
            int mid = low+(high-low)/2;
            // if every num is double then pairing is (0,1) (2,3) (4,5) (6,7) 
            
            if(mid==0 or mid==n-1)
                return nums[mid];
            
            // if mid is the ans 1,1, 2(mid), 3, 3
            if(nums[mid] != nums[mid-1] and nums[mid] != nums[mid+1])
                return nums[mid];
            else if(nums[mid] != nums[mid-1]) //1,1, 3(mid idx 2), 3  OR 1,1, 2, 3(mid idx 3), 3
            {
                if(mid%2) high = mid-1; // move left
                else  low = mid+1; // move right
            }
            else    //1,1, 3, 3(mid idx 3),4,4  OR 1,1, 2, 3, 3(mid idx 4) 5,5
            {
                if(mid%2) low = mid+1; //move right
                else high = mid-1; // move left
            }
        } 
        return -1;
    }
    
/*
If you divide the array in two parts, PART A: where elements are before target element and PART B: where elements are after target element then: 
a. In PART A, the first instance of element occurs at EVEN index and the second instance of the element occurs at odd index. 
b. In PART B, the first instance of element occurs at ODD index and the second instance of the element occurs at even index. 
c. You can visualize using following example: 
index:   0 1 2 3 4 5 6 7 8
vector: [1,1,2,3,3,4,4,8,8]
             👆 (Target element is 2 since it appears once)
In this example, before 2 every first instance of element occurs at even index and second instance at odd index (see element 1) and after 2 every first instance of element occurs at odd index and second instance at even index (see element 3, 4 and 8). 
So from the above observation we will apply binary search on our array, and if we are on the PART - B side of array, we go to left, otherwise we go right.
mid^1 explanation:
If mid is odd then (mid^1) will always be the even number, before mid
If mid is even then (mid^1) will always be the odd number, after mid

And hence I am able to check whether mid is in left half or right half as:

Suppose mid is odd: then mid^1 will give even number before it, 
then if nums[mid] == nums[mid^1] 
then 1st instance at even (mid^1) and 2nd instance at odd (mid), 
hence we are on LEFT side otherwise we are on right side.
For odd numbers (e.g., 1, 3, 5, 7, 9), mid^1 equals to mid - 1
For example: 3 ^ 1 = 0011 ^ 0001 = 0010 = 2

Suppose mid is even: then mid^1 will give odd number after it, 
then if nums[mid] == nums[mid^1]
then 1st instance at even (mid) and 2nd instance at odd (mid^1), 
hence we are on LEFT side otherwise we are on right side
For even numbers (e.g., 2, 4, 6, 8, 10), mid^1 equals to mid + 1
For example: 6 ^ 1 = 0110 ^ 0001 = 0111 = 7

Checking nums[ mid ] == nums[ mid^1 ] is equivalent to checking,
( mid%2==0 && nums[ mid ] == nums[ mid + 1 ] ) || ( mid%2 == 1 && nums[ mid ] == nums[ mid - 1 ] )
*/    
     int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();  
        if(n==1) return nums[0];
        int low = 0, high = n-1;
        
        while(low <= high)
        {
            int mid = low+(high-low)/2; 
            if(nums[mid] == nums[mid^1]) low = mid+1; // move right
            else high = mid-1; // move left
             
        } 
        return nums[low];
    }
};