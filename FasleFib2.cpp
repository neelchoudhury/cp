#include<iostream>
#include<cstdio>
#define ll long long int
#define MOD 1000000007

using namespace std;

ll fib(ll n)
{
	if(n==1)
		return 5;
	else if(n==0)
		return 2;
	else
		return 2*fib(n-1)+3*fib(n-2);
}
int main()
{
	int t;
	ll n;
	cin>>t;
	while(t--)
	{
		scanf("%lld", &n);
		ll f0=2;
		ll f1=5;
		ll num=fib(n);
		
	/*	if(n==1)
		{
			cout<<f1<<endl;
			continue;
		}	
		for(ll i=2; i<=(n); i++)
		{
			num=(3*f0+2*f1)%MOD;
			
			f0=f1 ;
			f1=num ;
		//cout<<num<<" ";
		}*/
		printf("%lld\n",num);
	}
	return 0;
}
