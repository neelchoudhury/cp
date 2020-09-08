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
	for(ll i=0; i<k; i++)
	{
		cin>>a[i];
		ll b[a[i]];
		for(ll j=0; j<a[i]; j++)
			cin>>b[j];
		for(ll j=1;j<a[i]; j++)
		{
			if(b[j]!=b[j-1]+1)
				ans++,g++;
		 
		}
		g++;
	}
	g--;
	ans=ans+g;
	cout<<ans<<endl;
	return 0;
}
