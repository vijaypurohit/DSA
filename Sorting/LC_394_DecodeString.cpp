/*
https://leetcode.com/problems/decode-string/
394. Decode String

*/

class Solution {
public:
    /*
    string decodeString(string s) {
        
        int n = s.length();
        string ans;
        
        stack<string> st;
        
        for(int i=0; i<n; i++)
        {
            if(s[i] != ']')
            {
                if(isdigit(s[i]))
                {    
                    string num(1, s[i]);
                    while(isdigit(s[i+1]))
                        num+=s[++i]; 
                    st.push(num);
                }
                else
                    st.push(string(1, s[i]));
            }
            else
            {
                string temp="";
                while(st.top() != "[")
                {
                    temp += st.top(); st.pop();
                }
                st.pop(); // to pop '['
                string digit = ""; 
                int d = stoi(st.top()); st.pop();  // digit
                string out="";
                for(int k=1; k<=d; k++)
                    out += temp;
                st.push(out);
            }
        }
        
        while(!st.empty())
        {
            ans = ans + st.top() ;
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }//end
    */
    
    int n;
    string decodeString(string s){
        n = s.length(); 
        int i=0;
        return solve(i, s);
    }//
    
    string solve(int &pos, string &s)
    {
        int num=0;
        string word="";
        // cout<<endl;
        while(pos<n)
        {
            char cur = s[pos];
            // cout<<pos<<" "<<cur<<") ";
            if(isdigit(cur))
            {
                num = num*10 + cur-'0';
            }
            else if(cur == '[')
            {
                string nextstr = solve(++pos, s);
                while(num > 0){
                    word += nextstr;  
                    num--;
                }
            }
            else if(cur == ']')
                return word;
            else
                word+=cur;
            pos++;
        }
        return word; 
    }
};