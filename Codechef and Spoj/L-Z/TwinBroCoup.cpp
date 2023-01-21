#include<iostream>
#include<cstdio>
#define ll long long unsigned int
#define MOD 1000000007

using namespace std;

ll c(ll x, ll y)
{
	cout<<"Entered function:"<<endl;
	long double p=1;
	if(y>=x-y)
	{
		for(ll i=1;i<=x-y;i++)
		{
			p*=(((int)(x/(float)(x-y)))%MOD);
			x-=1;
		}
	}
	else
	{
		for(ll i=1;i<=y;i++)
		{
			p*=(((int)(x/(float)(y)))%MOD);
			x-=1;
			y-=1;
		}
	}
	return (ll)p;
}

int main()
{
	int t;
	ll n;
	cin>>t;
	while(t--)
	{
		scanf("%llu", &n);
		if(n<13)
			cout<<0<<endl;
		else
		{
			cout<<"Entered else:"<<endl;
			ll sum=0;
			ll k=0;
			ll cnt=0;
			for(ll i=1; i<=(n-12); i++)
			{
				//cout<<i<<" "<<k<<" "<<sum<<endl;
				//cout<<(n-i)/2<<" for if"<<endl;
				if((n-i)%2==0)
				{
					cnt++;
				/*	cout<<"ENtered second if:"<<endl;
					k=((n-i)/2-6);
					
					sum+=c(5+k,k);
					cout<<"  "<<sum<<" "<<k<<endl;*/
				}
			}
			
			sum=c(n-1,n-13);
			printf("%llu", sum);
		}
	}
	return 0;
}
