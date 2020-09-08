#include<bits/stdc++.h>
#define ll long long int
#define x first
#define y second

using namespace std;

int main()
{
	ll n;
	vector<pair<ll,ll> v;
	cin>>n;
	for(ll i=0; i<n; i++)
		cin>>v[i].x;
	for(ll i=0; i<n; i++)
		cin>>v[i].y;
	sort(v.begin(),v.end());
	ll ans=MAX_INT;
	ll myn=MAX_INT;
	ll cnt=1;
	ll a[n];
	for(int i=1; i<n; i++)
	{
		
		if(v[i].x==v[i-1].x)
			cnt++;
		else if(v[i].x!=v[i-1].x or i==n-1)
		{
			myn=0;
			memset(a,MAX_INT,sizeof(a));
			for(ll j=0; j<n; j++)
			{
				if(j<i and j>=i+cnt)
					b[j]=v[j].y;
			}
			for(ll j=0; j<n-cnt; j++)
				myn+=a[j];	
			cnt=1;
			ans=min(ans,myn);
		}
	}
	cout<<ans<<endl;
	return 0;
}
