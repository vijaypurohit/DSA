/*
https://leetcode.com/problems/happy-number/solution/
*/
class Solution {
    int getNext(int n)
    {
        int totalSum=0;
        while(n)
        {
            int d = n%10;
            n = n/10;
            totalSum += d*d;
        }
        return totalSum;
    }
public:
    bool isHappy(int n) {
        //using hashset
        // unordered_set<int> seen;
        // while(n!=1 and !seen.count(n)){
        //     seen.insert(n);
        //     n = getNext(n);
        // }
        // return n==1;
        
        //cycle-detectin algo
        // int slow=n;
        // int fast = getNext(n);
        // while(fast !=1 and slow != fast)
        // {
        //     slow = getNext(slow);
        //     fast = getNext(getNext(fast));
        // }
        // return fast==1;
        
        //hardcoding cycle
        unordered_set<int> seen = {4, 16, 37, 58, 89, 145, 42, 20};
         while(n!=1 and !seen.count(n)){ 
            n = getNext(n);
        }
        return n==1;
    }
};