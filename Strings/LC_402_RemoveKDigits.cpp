/*
https://leetcode.com/problems/remove-k-digits/
402. Remove K Digits

*/

class Solution {
public:
    string removeKdigits_1(string num, int k) {
        int n = num.size();
        if(n<=k) return "0";
        string ans;
        
        stack<char> st;
        st.push(num[0]);
        
        for(int i=1; i<n; i++)
        {
            //we have digits to delete (k>0) and st is not empty and upcoming digit is less than top element
            while(k>0 and !st.empty() and st.top()>num[i])
            {
                k--;
                st.pop();
            }
           // st.push(num[i]);
           //  if(st.size()==1 and num[i]=='0')
           //      st.pop(); //popping preceding zeroes
            if(!st.empty() or num[i]!='0')
                st.push(num[i]);
        }//
        
        
        // for case when every digit is in ascending order and we have k left
        while(k and !st.empty())
        {
            k--;
            st.pop();
        }
        
        
        // if stack become empty
        if(st.size()==0) return "0"; 
        
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }//end
    
    string removeKdigits(string num, int k) {
        // return removeKdigits_1(num, k);
        int n = num.size();
        if(n<=k) return "0";
        string ans;
          
        for(char &ch: num)
        {
            //we have digits to delete (k>0) and st is not empty and upcoming digit is less than top element
            while(k>0 and ans.length() and ans.back()>ch)
            {
                k--;
                ans.pop_back();
            } 
            if(ans.length() or ch!='0')
                ans.push_back(ch);
        }//
         
        // for case when every digit is in ascending order and we have k left
        while(k-- and ans.length())
        { 
            ans.pop_back();
        } 
        // if stack become empty
        if(ans.size()==0) return "0"; 
         
        return ans;
    }//end
};