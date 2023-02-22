/*
https://leetcode.com/problems/add-to-array-form-of-integer/
*/

class Solution {
public:
    vector<int> init(vector<int>& num, int k) {
        int n = num.size();
        vector<int> ans;    
        string b = to_string(k);
        
        int i=n-1;
        int j=b.size()-1;
        int carry=0, sum=0;
        
        while(i>=0 or j>=0)
        {
            sum = carry;
            if(i>=0) sum += num[i--];
            if(j>=0) sum += b[j--]-'0';
            carry = sum/10;
            sum = sum%10;
            ans.push_back(sum);
        }
        if(carry) ans.push_back(carry);
        reverse(ans.begin(), ans.end());
        return ans;
    }
    
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n = num.size();
        // k as a carry
        for(int i=n-1; i>=0 and k>0 ; i--)
        {
            num[i] += k;
            k = num[i]/10;
            num[i] %= 10;
        }
        while(k>0)
        { 
            num.insert(num.begin(), k%10);
            k/=10;
        } 
        return num;
    }
};