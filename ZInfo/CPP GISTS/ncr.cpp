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

long INV(long num)
{
	if(num==1) return 1;
	return (mod - mod/num)*INV(mod%num)%mod;
}