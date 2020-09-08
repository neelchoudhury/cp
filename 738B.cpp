#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define ios ios_base::sync_with_stdio(false)
#define V 52
#define N 200010

using namespace std;

ll a[1010][1010];

int main()
{
	ios;
	ll n,m;
	cin>>n>>m;
	mem(a);
	for(ll i=0; i<n; i++)
	{
		for(ll j=0; j<m; j++)
			cin>>a[i][j];
	}
	ll ans=0,cnt1=0,cnt2=0;
	for(ll i=0; i<n; i++)
	{
		cnt1=0,cnt2=0;
		for(ll j=0; j<m; j++)
		{

			if(a[i][j]==0)
			{
				cnt1++;
			}
			else
			{
				cnt2+=cnt1;
				cnt1=0;
			}
		}
		ans+=cnt2;
	}
	// cout<<ans<<endl;

	for(ll i=0; i<n; i++)
	{
		cnt1=0,cnt2=0;
		for(ll j=m-1; j>=0; j--)
		{

			if(a[i][j]==0)
			{
				cnt1++;
			}
			else
			{
				cnt2+=cnt1;
				cnt1=0;
			}
		}
		ans+=cnt2;
	}
	// cout<<ans<<endl;
	for(ll i=0; i<m; i++)
	{
		cnt1=0,cnt2=0;
		for(ll j=0; j<n; j++)
		{

			if(a[j][i]==0)
			{
				cnt1++;
			}
			else
			{
				cnt2+=cnt1;
				cnt1=0;
			}
		}
		ans+=cnt2;
	}
	// cout<<ans<<endl;

	for(ll i=0; i<m; i++)
	{
		cnt1=0,cnt2=0;
		for(ll j=n-1; j>=0; j--)
		{

			if(a[j][i]==0)
			{
				cnt1++;
			}
			else
			{
				cnt2+=cnt1;
				cnt1=0;
			}
		}
		ans+=cnt2;
	}
	cout<<ans<<endl;
	return 0;
}