/*
17. Letter Combinations of a Phone Number

https://leetcode.com/problems/letter-combinations-of-a-phone-number/
*/

class Solution {
public:
    int n;
    vector<string> ans;
    unordered_map<int, string> hash;
    vector<string> letterCombinations(string digits) {
        n = digits.size();
        char ch='a';
        // creating the mapping
        for(int d=2; d<=9; d++ )
        {
            int k = 3;
            while(k--) 
                hash[d] += ch++; 
            if(ch=='s') hash[d] += ch++;
        }
        hash[9] +='z';
        // for(auto x: hash) { cout<<x.first<<"-> "; for(auto y: x.second) cout<<y<<" ";  cout<<endl;  }
        
        solve(0, digits, "");
        return ans;
    }//end
    
    void solve(int idx, string& digits, string out)
    {
        if(idx==n)
        {
            if(out.size()) ans.push_back(out);
            return;
        }
        
        int d = digits[idx]-'0';
        for(char &ch: hash[d])
        {
            out += ch;
            solve(idx+1, digits, out );
            out.pop_back();
        }
        
    }//end solve
    
};