#include<iostream>
#include<cstdio>
#define ll long long int

using namespace std;

int main()
{
	inline ll n,q;
	scanf("%lld%lld", &n, &q);
	inline ll a[n];
	inline ll b[n];
	for(ll i=0; i<n;i++)
	{
		a[i]=0;
		b[i]=0;
	}
	inline int ch;
	inline ll x,y;
	inline ll cnt=0;
	while(q--)
	{
		cin>>ch;
		scanf("%lld%lld", &x, &y);
		if(ch==0)
		{
			for(ll i=x;i<=y;i++)
			{
				a[i]+=1;
				b[i]=a[i]%3;
			}
		}
		else if(ch==1)
		{
			cnt=0;
			for(ll i=x; i<=y; i++)
			{
				if(b[i]==0)
				{
					cnt++;
				}
			}
			printf("%lld\n",cnt );
		}
	}
	return 0;
}
