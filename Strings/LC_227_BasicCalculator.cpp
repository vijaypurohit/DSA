/*
https://leetcode.com/problems/basic-calculator-ii/
*/

class Solution {
public:
    int n;
    int calculate(string s) {
        n = s.length();
        // if(n<=0) return 0; 
        // return using_stack(s);
        // return without_stack(s);
        // return with_stringstream(s);
        
        // return using_postfix(s);
    }
    
    int with_stringstream (string &s) {
        stringstream ss("+" + s);
        int cur = 0,  ans=0, prev=0;
        char op='+'; 
        while (ss >> op >> cur)
        { 
            if(op == '-' or op == '+')
            {
                cur = (op=='-')?-cur: cur;
                ans+=cur;
            }
            else
            {
                cur = (op=='*')? prev*cur: prev/cur;
                ans = ans - prev + cur;
            }
            prev = cur;
        }  
        return ans;
    }
    
    int without_stack(string &s) {
        int d=0, st=0, ans=0; char op='+'; 
        for(int i=0; i<n; i++)
        {
            char ch= s[i];
            if(isdigit(ch))
                d = (d*10) + (ch-'0'); 
            if((!isdigit(ch) and !iswspace(ch)) || i == n-1)
            {
                if(op == '-' or op=='+')
                {
                    ans += st; // last val to ans
                    st = (op=='-')?-d: d; // save cur val to stack top
                } 
                else if(op=='*') 
                    st = (st*d); 
                else if(op=='/')
                    st = (st/d);
                op = ch;
                d=0;
            }
        } 
        ans += st;
        return ans;
    }
    
    int using_stack(string &s) {
        int d=0; char op='+';
        stack<int> st;
        for(int i=0; i<n; i++)
        {
            char ch= s[i];
            if(isdigit(ch))
                d = (d*10) + (ch-'0'); 
            if((!isdigit(ch) and !iswspace(ch)) || i == n-1)
            {
                if(op == '-')
                    st.push(-d);
                else if(op=='+')
                    st.push(d);
                else if(op=='*')
                {
                    int val = st.top(); st.pop();
                    st.push(val*d);
                }
                else if(op=='/')
                {
                    int val = st.top(); st.pop();
                    st.push(val/d);
                } 
                op = ch;
                d=0;
            }
        }
        
        int ans=0;
        while(!st.empty())
        {
            ans += st.top();
            st.pop();
        }
        return ans;
    }
    
    int using_postfix (string &s) {
        // s = toPostfix(s);
        // int len = s.size();
        // stack<int> st;
        // for(int i=0; i<len; i++)
        // { 
        //     if(isdigit(s[i]))
        //     {
        //         int x=0;
        //         while(i<len and isdigit(s[i]))
        //             x = x*10 + (s[i++]-'0');
        //         st.push(x);
        //     }
        //     else{
        //         int num1 = st.top(); st.pop();
        //         int num2 = st.top(); st.pop();
        //         if(s[i] == '*') st.push(num2*num1);
        //         else if(s[i] == '/') st.push(num2/num1);
        //         else if(s[i] == '+') st.push(num2+num1);
        //         else if(s[i] == '-') st.push(num2-num1); 
        //     }
        // }
        // return st.top();
        
        s+='#';
        int len = s.size();
        auto precedence = [&](char &ch){ return ch=='*' || ch=='/';};
        stack<char> op; 
        stack<int> num;
        int d=0;
        for(int i=0; i<len; i++)
        {   if(s[i] == ' ')continue;
            if(isdigit(s[i]))
            {
                d = d*10 + (s[i]-'0'); 
            }
            else{
                num.push(d);
                while(!op.empty() and precedence(s[i]) <= precedence(op.top()))
                { 
                    int num1 = num.top(); num.pop();
                    int num2 = num.top(); num.pop();
                    if(op.top() == '*') num.push(num2*num1);
                    else if(op.top() == '/') num.push(num2/num1);
                    else if(op.top() == '+') num.push(num2+num1);
                    else if(op.top() == '-') num.push(num2-num1);
                    op.pop();
                }  
                op.push(s[i]);
                d = 0;
            }
        }
        return num.top();
    }
    
    string toPostfix(string& s)
    {
        auto precedence = [&](char &ch){ return ch=='*' || ch=='/';};
        stack<char> st;
        string ans="";
        
        for(char ch: s)
        {
            if(ch == ' ') continue;
            else if(isdigit(ch)) ans+=ch;
            else{
                ans += '|'; // to digitinguis number
                while(!st.empty() and precedence(ch) <= precedence(st.top()))
                {ans += st.top(); st.pop();}
                st.push(ch);
            }
        }
        ans += '|';
        while(!st.empty())
            ans += st.top(), st.pop();
        return ans;
    }
};