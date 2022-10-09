/*
https://leetcode.com/problems/fizz-buzz/
*/

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        // for(int num=1; num<=n; num++)
        // {
        //     bool divby3 = (num%3==0);
        //     bool divby5 = (num%5==0);
        //     if(divby3 and divby5)
        //         ans.push_back("FizzBuzz");
        //     else if(divby3)
        //         ans.push_back("Fizz");
        //     else if(divby5)
        //     ans.push_back("Buzz");
        //     else
        //         ans.push_back(to_string(num));
        // }
        // return ans;
        
        
        unordered_map<int, string> hash = {
            {3, "Fizz"},
            {5, "Buzz"}
        };
        vector<int> divisors = {3,5};
        
        for(int num=1; num<=n; num++)
        {
            string cur="";
            for(int key: divisors)
            {
                if(num%key == 0)
                    cur+=hash[key];
            }
           
            if(cur=="")
                cur = to_string(num);
            ans.push_back(cur);
        }
        return ans;
        
        
    }
};