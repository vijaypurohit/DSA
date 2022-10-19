/*
https://practice.geeksforgeeks.org/problems/add-two-fractions/1
https://leetcode.com/problems/fraction-addition-and-subtraction/
*/
/*
a/b + x/y = (a*(lcm/b) + x*(lcm/y)) / lcm=(b*y)/__gcd(b,y)  
x*y = lcm(x,y)*gcd(x,y)
x/lcm = gcd/y
x/gcd = lcm/y

*/
class Solution {
public:
    string fractionAddition1(string expression) {
        istringstream exp(expression);
        char _; 
        int a,b, x, y; int nn, dd, g;
        exp>>a>>_>>b; //extract the first number
        while(exp>>x>>_>>y) //till we have second number
        {
            // dd = (b*y)/__gcd(abs(b),abs(y));
            // nn = a*(dd/b) + x*(dd/y);
            // g = __gcd(abs(nn), abs(dd));
            // a = nn/g;
            // b = dd/g;
            a = a*y + x*b;
            b = b*y;
            g = abs(__gcd(a, b));
            a /=g;
            b /=g;
        }
        return to_string(a)+"/"+to_string(b);
    }
    
    string fractionAddition(string exp) {
        int i=0, s1=1;
        if(exp[i] == '-'){
            s1 = -1;
            i++;
        }
        int num1 = getNum(i, exp);
        i++;
        int den1 = getDen(i, exp); 
        while(i<exp.size())
        {
            int s2 = (exp[i]=='-') ? -1 : +1;
            i++;
            int num2 = getNum(i, exp);
            i++;
            int den2 = getDen(i, exp); 
            int lcm = (den1*den2)/(__gcd(den1, den2));
            num1 = (s1*num1*(lcm/den1) + s2*num2*(lcm/den2));
            den1 = lcm;
            if(num1<0){
                s1 = -1;
                num1 *= -1;
            }
            else
                s1 = 1;
        }
        int g = __gcd(num1, den1);
        return to_string(s1*num1/g)+"/"+to_string(den1/g);
    }
    
    int getNum(int &i, string& exp)
    {
        int tmp=0;
        while(exp[i] != '/')
            tmp = tmp*10 + (exp[i++]-'0');
        return tmp;
    } 
     int getDen(int &i, string& exp)
    {
        int tmp=0;
        while(i<exp.size() and (exp[i] != '+' and exp[i]!='-'))
            tmp = tmp*10 + (exp[i++]-'0');
        return tmp;
    }
};