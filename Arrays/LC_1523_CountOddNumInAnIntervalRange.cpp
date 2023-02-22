/*
https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/

evens = (high - low) // 2
odds = (high - low) // 2 + 1

Case 1: when the range starts and ends with an odd number.
for a small range, lets see how it looks like-
odd-even-odd-even-odd
[odd-even], [odd-even], [odd] 
We see alternate odd and even numbers, and there is just one odd number at the end which does not have an even pair!

So, count of even numbers ==(nums/2), then there is just one extra odd number,
therefore, number of odd numbers= (nums/2) + 1

Now, Consider these cases-

Case 2: starting with odd ending with even
odd-even-odd-even
[odd-even], [odd-even]

Case 3: starting with even ending with odd
even-odd-even-odd
[even-odd], [even,odd]

In both the above cases,
count of odd == count of even == nums/2

Last Case
Case 4: starting with even ending with even
even-odd-even-odd-even
[even-odd], [even,odd], [even]
count of odd=nums/2 , which is similar to case 1 and here we have an extra even number instead of odd, so no need to add anything!

So in all cases except Case 1, the answer is nums/2!
*/
class Solution {
public:
    int countOdds(int low, int high) {
        // int cnt=0;
        // // brute force //O(high-low)== O(10^9)
        // for(int i=low; i<=high; i++) {
        //     if(i%2) cnt++;
        // }
        // return cnt;
        
        // return (high+1)/2 - (low/2); // odds in [high-1], odd in  [low-1 - 1]
        
        return (high%2 and low%2) ? (high-low+1)/2+1 : (high-low+1)/2;
        
    }
};