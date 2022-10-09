 /*
https://leetcode.com/problems/powx-n/

n == 13, so we can say pow(x, 13) == pow(x, 1) * pow(x, 4) * pow(x, 8).
13 in its binary digits (1101)

*/ 
class Solution {
public:
    double myPow(double x, int n) {
        if(n==0 or x==1) return 1;
        // return myPow1(x, n);
        // return myPow2(x, n); 
        
        if(n<0){
            n = abs(n);
            x = 1/x;
        }
        return rec2(x, n); 
    }
    
    double myPow1(double x, int n) { 
        // positive or negative n
        double ans=1;
        while(n != 0)  
        {
            if(n&1)
                ans = (n>0)? ans*x: ans/x;
            x = x*x;
            n /= 2;
            
        }
        return ans;
    }
    
    double myPow2(double x, int n) { 
        if(n<0){
            n = -n;
            x = 1/x;
        }
        double ans=1;
        while(n > 0) // positive or negative
        {
            if(n&1) ans = ans*x;
            x = x*x;
            n >>= 1; 
        }
        return ans; 
    }
    
    double rec2(double x, int n) {  
         if(n==0) return 1;
        
        return (n%2==0) ? rec2(x*x, n/2) : x*rec2(x*x, n/2); 
    }
};