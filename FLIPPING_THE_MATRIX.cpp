#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[260][260];

int main()
{
	ll q,n;
	cin>>q;
	while(q--)
	{
		cin>>n;
		memset(a,0,sizeof(a));
		for(ll i=0; i<2*n; i++)
		{
			for(ll j=0; j<2*n; j++)
			{
				cin>>a[i][j];
			}
		}
		ll ans=0;
		for(ll i=0; i<n; i++)
		{
			for(ll j=0; j<n; j++)
			{	
				cout<<max(max(a[i][j],a[i][n-1-j]),max(a[n-1-i][j],a[n-1-i][n-1-j]))<<endl;
				ans+=max(max(a[i][j],a[i][n-1-j]),max(a[n-1-i][j],a[n-1-i][n-1-j]));
			}
		}
		printf("%lld\n",ans);
	}

	return 0;
}
