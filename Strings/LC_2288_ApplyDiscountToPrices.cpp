/*
https://leetcode.com/problems/apply-discount-to-prices/
2288. Apply Discount to Prices

*/

class Solution {
public:
    string discountPrices(string s, int discount) {
        // if(discount==0)
        //     return s;
        string ans;
        int n = s.size(), j=0;
        // double discountPercentage = (100-discount)/100.0;
        for(int i=0; i<n; i++)
        {
            ans+=s[i];
            // valid price, not $$
            if(s[i] == '$' and (i==0 || s[i-1]==' '))
            {
                long amt=0; 
                for(j=i+1; i<n and isdigit(s[j]); j++)  
                    amt = amt*10 + (s[j]-'0');   
                if(amt>=1 and (j==n || s[j]==' ')) //$$, $1$
                { 
                    i=j-1; // to accomodate space
                    if(discount==100){
                        ans+="0.00"; continue;
                    }
                    amt = (100-discount) * amt;
                    ans += to_string(amt / 100)+ "." +(amt % 100 < 10 ? "0": "") + to_string(amt % 100);  
                    /*
                    ostringstream os;
                    double d = (amt)*(1-(discount/100.0));
                    os<<fixed<<setprecision(2)<<d;
                    ans+= os.str();
                    */
                }
            }
        } 
        return ans;
        
        // stringstream ss(sentence);
        // string word, ans;
        // while(ss >> word)
        // {
        //     ans +=
        // }
        // return ans;
    }
};
