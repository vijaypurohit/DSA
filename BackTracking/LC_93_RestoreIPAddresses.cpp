/*
https://practice.geeksforgeeks.org/problems/generate-ip-addresses/1
https://leetcode.com/problems/restore-ip-addresses/
*/

class Solution {
public:
    int n; 
    vector<string> ans;
    vector<string> restoreIpAddresses(string s) {
        n = s.length();
        if(n>12 or n<4) // dots not given therefore min  0.0.0.0 (4 len) to 111.111.111.111 (12 len) 
            return {}; 
        
        // solve2(0, s, ""); // 7 to 15
        // solveBacktracking(0, 0, "", s); // start , dots, out
        
        Iterative(s);
        return ans;
    }//end
/*
There are 3 possibilities to add each dot, after pos 1, 2, 3 from the last dot/beg of string.
So there are at most 3^3 = 27 possibilities to add all 3 dots

Time complexity: O(M^N ⋅N)  N integers, each integer is at most M digits.
Here N = 4, M = atmost 3
dots = N-1
 M^(N-1) possbilites to add all dots(N-1) for M positions.
 for one dot there is M possbility, for 3 dot M*M*M
 M.N for checking validity ( we will check M times (dots for one octet) for each of N number)
*/
    void solveBacktracking(int idx, int dots, string out, string &s)
    { 
        // completed the string and also the dots
        if(idx == n and dots == 4)
        {
            out.pop_back(); // remove the extra dots added last time
            ans.push_back(out);
            return;
        }
        //either missed
        if(idx == n || dots == 4) return;
        
        int len = min(n, idx+3); // (idx)abc_< (idx+3)
        string t="";
        for(int place=idx; place<len; place++) // place dots
        {
            t += s[place];
            if(dots<4 and isSafe(t))
            {
                solveBacktracking(place+1, dots+1, out + t + ".", s);
            }
        } 
    } // end
    
    bool isSafe(string &t)
    {  
        int nt = t.size();
        return (nt == 1) or (t[0] != '0' and (nt == 2 || t <= "255")) ;
        // if(nt < 4)
        // {
        //     if(nt == 1) return true;
        //     if(nt == 2 and t[0] != '0')
        //         return true;
        //     if(nt == 3 and t[0] != '0' and stoi(t)<256)
        //         return true; 
        // } 
        // return false;
    }
    
/*
each string into 4 Integers with length l1, l2 ,l3, l4=(n-l1-l2-l3)
range of 
    l1 = max(1, n-9) min(3, n-3); 25[525.511.135 / 0]1.2.3  [if 3 integer after it has length 3 or 1 each]
    l2 = max(1, n-l1-6) min (3, n-2) // we need to separate 2 more int after it with length [1..3]
    l3 = max(1, n-l1-l2-3) min(3, n-l1-l2-1) 
*/
    bool isValid(int start, const string& s, int len)
    {
        return (len==1) or (s[start] != '0' and (len == 2 or s.substr(start, len)<="255"));
    }
    void Iterative(string &s)
    {
    
        for(int l1 = max(1, n-9); l1<=3 and l1<=n-3; l1++)  
        {
            // string t = s[0];
            if(!isValid(0, s, l1) ) continue;
            for(int l2 = max(1, n-l1-6); l2<=3 and l2<=(n-l1-2); l2++)
            {
                if(!isValid(l1, s, l2) ) continue;
                for(int l3 = max(1, n-l1-l2-3); l3<=3 and l3<=(n-l1-l2-1); l3++)
                {
                    if(isValid(l1+l2, s, l3) and isValid(l1+l2+l3, s, n-l1-l2-l3))
                    {
                        ans.push_back(
                            s.substr(0, l1) + "." +
                            s.substr(l1, l2) + "." +
                            s.substr(l1+l2, l3) + "." +
                            s.substr(l1+l2+l3)
                        );
                    }
                }
            }
        }
        
        return;
    }
    
    
    // Another Backtracking approach
    void solve2(int dot, string s, string out)
    {
        int ns = s.size();
        if(dot == 3)
        {
            if(ns>0 and ns<4) // length of remaining string should be <=3 and >=1
            {
                if(ns==1 || s[0] != '0' and stoi(s)<256){
                    out+=s;
                    ans.push_back(out);
                }
            }
            return;
        }
        
        if(ns>0) 
            solve2(dot+1, s.substr(1), out+s.substr(0,1)+".");
        if(ns>1 and s[0] != '0')
            solve2(dot+1, s.substr(2), out+s.substr(0,2) + ".");
        if(ns>2 and s[0] != '0' and stoi(s.substr(0,3))<256)
            solve2(dot+1, s.substr(3), out+s.substr(0,3) + ".");
    }
};

/*
"25525511135"
"0000"
"1"
"19216811"
"1921681312"
"0011255245"
"012201"
"1921681222340"
"1921681222341"
"1921681222342"
"192168122234"
"1010"
"12301"
"12345678910"
"908754823"
"4259860802"
"42376327960"
"378587959312"
"192168177256"
"256127127127"
"12467890890"
"192168127111"
*/