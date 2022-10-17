#include<iostream>
#include<tuple> // for tie() and tuple
using namespace std;
const int mod = 1e9+7;
/*
Extended GCD -> Iterative Code
gcd(a,b) = a*x + b*y
while r!=0		   ||		old
 r (b) ---- x ---- y  || 	r (a) --- x --- y
 intial 
 b -- 0 --- 1  ||    a --- 1 --- 0
 each iterations
 new_r =  a%b = old_r % r, q = a/b = old_r / r;
 new_x = old_x - q*x
 new_y = old_y - q*y;
 
 old (r, x, y) = (r, x, y)
 (r, x, y) = new (r, x, y)
*/


/*
Extended GCD -> Recursive Code
1. a.x + b.y = gcd(a, b)  (a<b)
Now gcd(a, b) = gcd(r = b%a, a) --> (r).x1 + a.y1 = gcd(r, a) 
2. a.x + b.y = (r).x1 + a.y1  [ b = q*a + r]->[ b = [b/a]*a + r]
			 = (b - [b/a]*a ).x1 + a.y1  (r in terms of a and b)
			 = b.x1 - [b/a]*a.x1 + a.y1
			 = b.x1 + (-[b/a].x1 + y1).a
3. a.x + b.y = a.(y1 -[b/a].x1) + b.x1			 
a < b
x = (y1 -[b/a].x1)
y = x1
-------- OR if a>b
x = y1
y = x1 - [a/b].y1

1. a.x + b.y = gcd(a, b) (a>b)
Now gcd(a, b) = gcd(b, r = a%b) --> b.x1 + (r).y1 = gcd(b, r)
 				r = a%b ----> [ a = q*b + r]->[ a = [a/b]*b + r]
2. a.x + b.y = (a - [a/b]*b ).y1 + b.x1  (r in terms of a and b)
3. a.x + b.y = a.y1 + b.(x1 -[a/b].y1)

This implementation of extended Euclidean algorithm produces correct results for negative integers as well.
*/

int xgcd_r(int a, int b, int& x, int& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int d = xgcd_r(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}

int xgcd_i(int a, int b, int& x, int& y) {
    x = 1, y = 0, a1=a;
    int x1 = 0, y1 = 1, b1 = b;
    while (b1) {
        int q = a1 / b1;
        tie(x, x1) = make_tuple(x1, x - q * x1);
        tie(y, y1) = make_tuple(y1, y - q * y1);
        tie(a1, b1) = make_tuple(b1, a1 - q * b1);
    }
    return a1;
}

short ObtainMultiplicativeInverse(int a, int b, int x = 1, int y = 0)
{
    return b==0? x: ObtainMultiplicativeInverse(b, a%b, y, x - y*(a/b));
}

int main()
{
	// 1759, 550 -> gcd = 1, x = -111, y = 355
	int a,b,x, y;
	cout<<"enter a and b (a>b): "; cin>>a>>b;
	cout<<"a="<<a<<", b="<<b<<endl;
//	cout<<"Extended GCD (rec) gcd="<<xgcd_r(a, b, x, y);
	cout<<"Extended GCD (iter) gcd="<<xgcd_i(a, b, x, y);
	cout<<" x="<<x<<" y="<<y<<endl;
	
//	cout<<"extended gcd (iter) ans= "<<xgcd_i(a, b, x, y)<<endl;
	cout<<"Multiplicative Inverse ans= "<<ObtainMultiplicativeInverse(a,b)<<endl;
	return 0;
}
