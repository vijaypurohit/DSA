/*
https://leetcode.com/problems/minimum-moves-to-equal-array-elements/
*/
/*
 sum -> sum of all the numbers
 (n-1)*1 adding in one move
 After, say m moves, we get all the numbers as x, and we will get the following equation
(1) sum + m * (n - 1) = x * n (new sum)
(2) x = minNum + m 
No matter how many add operations are executed,the goal won't change.
Every time we do the add operation,the min number in the array must participate in.
After an add operation,the minNum is still the min number
So the minNum participate in every add operation
So x = minNum + m

Finally:
sum - minNum * n = m

Another Take:
Rather than move n-1 numbers up every time, why not just move one number down?
so the problem is simple: 
find the min
move other numbers down to min.
number of moves = nums[0]-min + nums[1]-min + .... +nums[n]-min = sum - n * min
*/
class Solution {
public:
    int n;
    int minMoves(vector<int>& nums) {
        n = nums.size();
        int sum=0, minNum=INT_MAX;
        for(int &x: nums)
        {
            sum+=x;
            minNum = min(minNum, x);
        }
        return sum - minNum*n;
    }
};