#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define sc(n) scanf("%lld",&n)
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second
#define pr(n) printf("%lld\n", n)

using namespace std;

ll a[100010][6];

int main()
{
	ll n;
	mem(a);
	cin>>n;
	ll k=1;
	do
	{
		for(ll i=0; i<n; i++)
		{
			for(ll j=0; j<3; j++)
			{
				cin>>a[i][j];
			}
		}
		a[0][2]+=a[0][1];
		a[1][0]+=a[0][1];
		a[1][1]+=min(a[0][1],min(a[1][0],a[0][2]));
		a[1][2]+=min(a[0][1],min(a[1][1],a[0][2]));

		for(ll i=2; i<n; i++)
		{
			 a[i][0]+=min(a[i-1][0],a[i-1][1]);
			 a[i][1]+=min(min(a[i][0],a[i-1][0]),min(a[i-1][1],a[i-1][2]));
			 a[i][2]+=min(min(a[i][1],a[i-1][1]),a[i-1][2]);
		}
		// for(ll i=0; i<n; i++)
		// {
		// 	for(ll j=0; j<3; j++)
		// 	{
		// 		cout<<a[i][j]<<" ";
		// 	}
		// 	cout<<endl;
		// }
		cout<<k<<". "<<a[n-1][1]<<endl;
		mem(a);
		cin>>n;
		k++;
	}while(n!=0);
	return 0;
}