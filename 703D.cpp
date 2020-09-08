#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	vector<ll> a,b;
	ll n,r,l,m,av;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>av;
		a.push_back(av);
	}
	b.push_back(a[0]);
	for(ll i=1;i<n; i++)
	{
		b.push_back(b[i-1]^a[i]);
	}
	cin>>m;
	ll ans=0;
	while(m--)
	{
		cin>>l>>r;
		l-=1,r-=1;
		if(l==0)
		{
			ans=b[r];
		}
		else
		{
			ans=b[r]^b[l-1];
		}
		cout<<ans<<endl;
	}
	return 0;
}