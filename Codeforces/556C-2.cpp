#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll n,k;
	cin>>n>>k;
	ll ans=0;
	ll g=0;
	ll a[k];
	ll x=0;
	for(ll i=0; i<k; i++)
	{
		cin>>a[i];
		ll b[a[i]];
		for(ll j=0; j<a[i]; j++)
			cin>>b[j];
		if(b[0]==1)
		{
			for(ll j=1; j<a[i]; j++)
			{
				if(b[j]==b[j-1]+1)
					g++;
				else
					break;
			}
			x=g;
			//cout<<x<<endl;
		}
		else
			g=0;
		ans+=a[i]-1-g;
	}
	ans=(ans+n-1-x);
	cout<<ans<<endl;
	return 0;
}
