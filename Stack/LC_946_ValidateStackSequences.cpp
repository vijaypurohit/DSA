/*
https://leetcode.com/problems/validate-stack-sequences/
946. Validate Stack Sequences

*/

class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        size_t n = pushed.size();
        stack<int> st;
        
        int j=0;
        for(const int& x: pushed){
            st.push(x);
            while(!st.empty() and j<n and st.top() == popped[j]){   
                st.pop();
                j++;
            }
        }
        return st.empty();
    }
};