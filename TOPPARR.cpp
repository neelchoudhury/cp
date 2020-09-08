#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[1010][1010];

int main()
{
	ll m,n;
	scanf("%lld %lld", &m, &n);
	for(ll i=0; i<m; i++)
	{
		for(ll j=0; j<n; j++)
			scanf("%lld", &a[i][j]);
	}
	ll q;
	scanf("%lld", &q);
	ll x;
	while(q--)
	{
		scanf("%lld", &x);
		x=x%4;
		if(x==0)
		{
			for(ll i=0; i<m; i++)
			{
				for(ll j=0; j<n; j++)
					printf("%lld ", a[i][j]);
				cout<<endl;
			}
		}
		else if(x==1)
		{
			for(ll i=0; i<n; i++)
			{
				for(ll j=m-1; j>=0; j--)
				{
					printf("%lld ", a[j][i]);
				}
				cout<<endl;
			}
		}
		else if(x==2)
		{
			for(ll i=m-1; i>=0; i--)
			{
				for(ll j=n-1; j>=0; j--)
					printf("%lld ", a[i][j]);
				cout<<endl;
			}
		}
		else if(x==3)
		{
			for(ll i=n-1; i>=0; i--)
			{
				for(ll j=0; j<m; j++)
					printf("%lld ", a[j][i]);
				cout<<endl;
			}
		}
		//cout<<endl;
	}
	return 0;
}
