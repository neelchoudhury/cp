#include<iostream>
#include<cstdio>
#define ll long long int
#define MOD 1000000007

using namespace std;

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
		ll num=0;
		if(n==1)
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
		}
		printf("%lld\n",num);
	}
	return 0;
}
