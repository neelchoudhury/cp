#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define ios ios_base::sync_with_stdio(false);
 
using namespace std;
 
ll a[25][25];
 
int main()
{
	ios;
	ll t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		mem(a);
		for(ll i=0; i<n; i++)
		{
			for(ll j=0; j<n; j++)
			{
				cin>>a[i][j];
			}
		}
		ll ans=0;
		for(ll i=0; i<n;i++)
		{
			for(ll j=0; j<n; j++)
			{
				for(ll k=i; k<n; k++)
				{
					for(ll l=j; l<n; l++)
					{
						if(a[i][j]>a[k][l])
							ans++;
					}
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}