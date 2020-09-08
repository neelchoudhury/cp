#include<bits/stdc++.h>
#define ll long long int

using namespace std;

vector<ll> a,b;

int main()
{
	ios_base::sync_with_stdio(false);
	ll n,m,x;
	cin>>n>>m;
	for(ll i=0; i<n; i++)
	{
		cin>>x;
		a.push_back(x);
	}
	for(ll i=0; i<m; i++)
	{
		cin>>x;
		b.push_back(x);
	}
	ll ans=0,ma=INT_MAX,mi=INT_MAX;
	vector<ll>::iterator ii,jj;
	for(int i=0; i<n; i++)
	{
	//	cout<<"aaa "<<a[i];
		ll qq=a[i]; 
		jj=upper_bound(b.begin(), b.end(), qq);
		//cout<<"JNHBGF    "<<*jj<<endl;
		ma=INT_MAX;
		if(jj!=b.end())
		{
			ma=abs(*jj-a[i]);
		}
		if(jj!=a.begin())
		{
			jj--;
			ma=min(ma,abs(*jj-a[i]) );
		}
		//ll x1=min(b[jj-b.begin()],)
		ans=max(ans,ma);
	}
	cout<<ans<<endl;
	return 0;
}
