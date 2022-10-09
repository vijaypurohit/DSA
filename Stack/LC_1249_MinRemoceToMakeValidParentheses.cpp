/*
https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/
*/
class Solution {
public:
    int n;
    string minRemoveToMakeValid(string s) {
       n=s.length();
        return usingstack1(s);
        // return nostack1(s);
    }//
    
    string nostack1(string& s)
    {
         int cnt=0;
        for(int i=0; i<n; i++) //validating the parenthesis
        {
            if(s[i]=='(')
                cnt++;
            else if(s[i]==')')
            {
                if(cnt == 0)
                    s[i] = '*'; // placeholder for invalid closed bracket to be removed;
                else
                    --cnt;
            }
        }
        cnt=0;
        for(int i=n-1; i>=0; i--) //validating the parenthesis
        {
            if(s[i]==')')
                cnt++;
            else if(s[i]=='(')
            {
                if(cnt == 0)
                    s[i] = '*'; // placeholder for invalid closed bracket to be removed;
                else
                    --cnt;
            }
        }
        
        string ans="";
        for(int i=0; i<n; i++)
            if(s[i] != '*')
                ans+=s[i];
        return ans;
    }//
    
    string usingstack1(string& s)
    {
         stack<int> st;
        for(int i=0; i<n; i++) //validating the parenthesis
        {
            if(s[i]=='(')
                st.push(i);
            else if(s[i]==')')
            {
                if(st.empty() == false)
                    st.pop();
                else
                    s[i] = '*'; // placeholder for invalid closed bracket to be removed;
            }
        }
        while(st.empty() == false) // invalid open brackets
        {
            s[st.top()] = '*';
            st.pop();
        }
        
        // string ans="";
        // for(int i=0; i<n; i++)
        //     if(s[i] != '*')
        //         ans+=s[i];
        // return ans;
        s.erase(remove(s.begin(), s.end(), '*'), s.end());
        return s;
    }//
};