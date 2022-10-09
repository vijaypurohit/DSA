/*
*/

class Solution {
public:
    string smallestNumber(string pattern) {
        int n = pattern.size();
        
        string ans;
//         for(int i = 1; i<=n+1; i++)
//             ans += i+'0';
        
//         int l=-1;
//         for(int i=0; i<n; i++)
//         {
//             if(pattern[i] == 'D')
//             {
//                 l = i;
//                 while(i<n and pattern[i]=='D')
//                     i++;
//                 reverse(ans.begin()+l, ans.begin()+i+1);
//             }
//         }
        
        string stack;
        for(int i=0; i<=n; i++)
        {
            stack.push_back('1'+i);
            if(i==n or pattern[i] == 'I')
            {
                while(!stack.empty())
                {
                    ans.push_back(stack.back());
                    stack.pop_back();
                }
            }
        }
        
        return ans;
    }
};