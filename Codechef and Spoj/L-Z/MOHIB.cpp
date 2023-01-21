#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll t,x,avg,s,n,tmax;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld", &x, &avg);
		s=avg*avg + avg -x*avg;
		n=s/avg;
		
		ll sm=((n-1)*(n-2))/2;
		/*if(x>n-2)
			tmax=s-(sm+x);
		else
			tmax=s-(sm+n-1);*/
		tmax=s-sm-x;
		printf("%lld\n",tmax );	
	}
	return 0;
}
