#include<bits/stdc++.h>
#define ll long long int

using namespace std;

vector<pair<ll,ll>> v; 

int main()
{
	ll n,d,x,y;
	v.clear();
	cin>>n>>d;
	for(ll i=0; i<n; i++)
	{
		cin>>x>>y;
		v.push_back(make_pair(x,y));
	}	
	sort(v.begin(),v.end());
	ll ans=0;
	ll i=0;
	for(;i<v.size();i++ )
	{
		if(v[i].first-v[0].first<d)
			ans+=v[i].second;
		else
			break;
	} 
	ll cnt=ans;
	ll j=0;
	ll k=0;
	for( j=i; j<v.size(); j++)
	{
		
		cnt=cnt+v[j].second;
		while(v[j].first-v[k].first>=d)
		{
			cnt-=v[k].second;
			k++;
		}
		ans=max(ans,cnt);
	}
	cout<<ans<<endl;

	return 0;
}
