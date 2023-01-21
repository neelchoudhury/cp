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
ll h[1000100];

set<ll> s;

int main()
{
	ios;
	ll t,n;
	cin>>t ;
	while(t--)
	{
		cin>>n;
		mem(a);
		mem(h);
		ll mi=INT_MAX;
		ll ma=INT_MIN;
		for(ll i=0; i<n; i++)
		{
			cin>>a[i];
			h[a[i]]++;
			mi=min(a[i],mi);
			ma=max(a[i],ma);
		}
		ll ans=0;
		for(ll i=mi; i<=ma; i++)
		{
			if(h[i]!=0)
			{
				if(i!=mi)
			{
				ans=max(h[i]-*s.begin(), ans);
			}
			s.insert(h[i]);
			}
			
		}
		if(ans==0)
			cout<<-1<<endl;
		else
			cout<<ans<<endl;
	}
	 
}