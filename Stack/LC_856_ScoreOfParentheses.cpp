/*
https://leetcode.com/problems/score-of-parentheses/
*/

class Solution {
public:
    int n;
    int scoreOfParentheses(string s) {
        n = s.length();
        // return usingstack(s);
        return nostack(s);
    }
    
    int nostack(string &s) {
        int depth=0, ans=0;
        char prev = '(';
        for(char& ch: s)
        {
            if(ch=='(')
                depth++;
            else{
                depth--;
                if(prev == '(')
                    ans += pow(2, depth);
            }
            prev = ch;
        }
         
        return ans;
    }
    
    int usingstack(string &s) {
//         stack<int> st;
//         for(char& ch: s)
//         {
//             if(ch=='(')
//                 st.push(-1);
//             else // ')'
//             {
//                 if(!st.empty() and st.top() == -1)
//                 {
//                     st.pop();
//                     st.push(1);
//                 }
//                 else // number
//                 {
//                     int sum=0;
//                     while(!st.empty() and st.top() != -1)
//                     {
//                         sum += st.top();
//                         st.pop();  
//                     }
//                     st.pop(); //removes '(' 
//                     st.push(2*sum); 
//                 }
//             }//else ')'
//         }
        
//         int sum=0;
//         while(!st.empty()){
//             sum += st.top();
//             st.pop();
//         }
//         return sum;
         
        
        stack<int> st;
        int score=0;
        for(char& ch: s)
        {
            if(ch=='(')
            {
                st.push(score);
                score=0;
            }
            else // ')'
            {
                score = st.top() + max(2*score, 1);
                st.pop();
            }//else ')'
        } 
        return score;
    }
    
};