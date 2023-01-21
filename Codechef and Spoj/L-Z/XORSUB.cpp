#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[1010];
ll b[1010][1010];

int main()
{
	ll t,n,k;
	cin>>t;
	while(t--)
	{
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		cin>>n>>k;
		for(int i=0; i<n; i++)
			cin>>a[i];
		for(int i=0; i<n; i++)
		{
			b[0][i]=k^a[i];
		}
		for(int i=1; i<n; i++)
		{
			for(int j=0; j<n-i; j++)
			{
				b[i][j]=b[i-1][j]^a[i+j];
			}
		}
		ll ans=0;
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n-i; j++)
			{
				ans=max(ans,b[i][j]);
			}
		}
		ans=max(ans,0^k);
		printf("%lld\n",ans );
	}
	return 0;
}
