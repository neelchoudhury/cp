#include<bits/stdc++.h>
#define ll long long int
#define inf 10e9+7

using namespace std;

int main()
{
	ll n,m;
	cin>>n>>m;
	ll x,y;
	ll maxi=0,mini=inf;
	for(ll ii=0; ii<m; ii++)
	{
		cin>>x>>y;
		if(x>y)	
			swap(x,y);
		//cout<<x<<" "<<y<<endl;
		maxi=max(x,maxi);
		mini=min(y,mini);
	}
	ll ans=max((ll)0,mini-maxi);
	if(m==0)
		ans=n-1;
	cout<<ans<<endl;
	return 0;
}
