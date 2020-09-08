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

ll a[100010];

int main()
{
	ll t, n;	
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(ll i=0; i<2*n; i++)
		{
			cin>>a[i];
		}
		sort(a,a+2*n);
		cout<<a[n + n/2]<<endl;
		// for(ll i=0; i<2*n; i++)
		for(ll i = 0; i<n; i++ )
		{
			cout<<a[i]<<" "<<a[n+i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}