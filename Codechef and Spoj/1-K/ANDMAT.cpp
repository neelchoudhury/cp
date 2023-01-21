#include<bits/stdc++.h>
#define ll unsigned long long int

using namespace std;

int main()
{
	ll a[100][100][64];
	ll b[100][100];
	ll t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		for(int i=0;i<n; i++)
		{
			for(int j=0; j<n; j++)
				scanf("%lld", &b[i][j]);
		}
		ll x=1;
		for(int k=0; k<64; k++)
		{
			for(int i=0; i<n; i++)
			{
				for(int j=0; j<n; j++)
					a[i][j][k]=b[i][j]&x;
			}
			x=(x+x<<1);
			cout<<x<<endl;
		}
	}
}
