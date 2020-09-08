#include<iostream>
#include<cstdio>
#include<algorithm>
#define ll long long int

using namespace std;

int main()
{
	ll n;
	scanf("%lld", &n);
	int a[n];
	for(ll i=0; i<n; i++)
		cin>>a[i];
	ll m;
	scanf("%lld",&m);
	int q;
	ll x,y;
	while(m--)
	{
		cin>>q;
		scanf("%lld%lld", &x, &y);
		if(q==0)
			a[x]=y;
		else if(q==1)
		{
			int b[y-x+1];
			for(ll i=x;i<y+1;i++)
				b[i-x]=a[i];
			sort(b,b+y-x+1);
			cout<<b[y-x]<<endl;
		}
	}
	return 0;
}
