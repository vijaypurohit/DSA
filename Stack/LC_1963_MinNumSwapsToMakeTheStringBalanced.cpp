/*
https://leetcode.com/problems/minimum-number-of-swaps-to-make-the-string-balanced/
*/

class Solution {
public:
    int n;
    int minSwaps(string s) {
        n = s.length();
        // return usingstack(s);
        // return nostack(s);
        int cnt=0, ans=0, j=n-1;
        for(int i=0; i<n; i++)
        {
            if(s[i] == '[')
                cnt++;
            else
                cnt--;
            if(cnt<0)
            {
                while(i<j and s[j] != ']')
                    j--;
                swap(s[i], s[j]);
                ans++;
                cnt=1;
            }
        }
        return ans;
    }
    
    int nostack(string &s) {
        int open=0, unbalanced=0;
        for(char& ch: s)
        {
            if(ch=='[')
                open++;
            else{
                if(open>0)
                    open--;
                else
                    unbalanced++;
            }
        }
        
        unbalanced = (unbalanced+open)/2;
        return (1 + unbalanced)/2;
    }
    
    int usingstack(string &s) {
        stack<int> st;
        for(char& ch: s)
        {
            if(ch=='[')
                st.push(ch);
            else{
                if(!st.empty() and st.top() == '[')
                    st.pop();
                else
                    st.push(ch);
            }
        }
        
        // int numOfOpenBrackets = st.size()/2;
        // return (1 + numOfOpenBrackets)/2;
        int x = st.size();
        int swaps=0;
        while(x>0)
        {
            swaps++;
            n -= 4; // 2 pairs got created and unbalanced string has lengthn-4
        }
        return swaps;
    }
};