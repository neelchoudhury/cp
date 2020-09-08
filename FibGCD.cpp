#include<iostream>
#include<cstdio>
#define ll long long int
#define MOD 1000000007

using namespace std;

void f(ll a)
{
	ll f0=0;
	ll f1=1;
	ll num=f1+f0;
	for(ll i=2; i<=(a); i++)
	{
		num=(f0+f1)%MOD;
		
		f0=f1;
		f1=num;
		//cout<<num<<" ";
	}
	//cout<<endl;
	printf("%lld\n",num);
}

int main()
{
	int t;
	ll a,b;
	cin>>t;
	while(t--)
	{
		scanf("%lld%lld",&a,&b);
		ll l,s;
		if(a>b)
		{
			l=a;
			s=b;
			ll r=l%s;
			while(r)
			{
				l=s;
				s=r;
				r=l%s;
			}
			f(s);
		}
		else if(b>a)
		{
			l=b;
			s=a;
			ll r=l%s;
			while(r)
			{
				l=s;
				s=r;
				r=l%s;
			}
			f(s);
		}
		else
		{
			f(a);
		}
	
	}
	return 0;
}
