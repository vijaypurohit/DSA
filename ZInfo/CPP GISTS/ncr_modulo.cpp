#include<iostream>
using namespace std;


const int mod = 1e9+7;

long INV(long num)
{
	if(num==1) return 1;
	return (mod - mod/num)*INV(mod%num)%mod;
}

long long combination(int n, int r)
{
	long long res = 1L;
	for(int i=0; i<r; i++)
	{
		res = res*(n-i)%mod;
		res = res*INV(i+1) %mod;
		// res = res/(i+1) %mod; //overflow
	}
	return res;
}

int main()
{
	int n,r;
	cout<<"enter n and r: ";
	cin>>n>>r;
	cout<<"n="<<n<<", r ="<<r<<endl;
	cout<<"ans= "<<combination(n,r);
	return 0;
}