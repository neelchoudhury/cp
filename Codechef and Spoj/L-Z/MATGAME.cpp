#include<bits/stdc++.h>
#define ll long long int

//INCOMPLETE

using namespace std;

ll a[55][55],g[55][55];

int main()
{
	ll t,n,m;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		memset(a,0,sizeof(a));
		for(ll i=0; i<n; i++)
		{
			for(ll ij=0; j<m; j++)
				cin>>a[i][j];
		}
		memset(g,0,sizeof(g));
		for(ll i=0; i<n; i++)
		{
			g[i][m-1]=1;
			for(ll j=m-2; j>=0; j--)
			{
				g[i][j]=(g[i][j+1]>=g[i][j]?g[i][j]-1:g[i][j]);
			}
		}
	}
}
