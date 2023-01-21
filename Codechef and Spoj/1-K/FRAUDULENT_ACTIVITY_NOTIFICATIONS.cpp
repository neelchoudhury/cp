#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 

using namespace std;

vector<ll> v;
vector<ll>::iterator ii;
ll a[200010];

int main()
{ 
	int n,d;
	cin>>n>>d;
	ll m=0;
	ll ans=0;
	for(ll i=0; i<n; i++)
	{
		cin>>a[i];
		if(i==0)
			v.insert(v.begin(),a[i]);
		else
		{
			ii=lower_bound(v.begin(),v.end(), a[i]);
			cout<<(ii-v.begin())<<endl;
			if(ii==v.begin())
			{
				ii++;
				ii=v.insert(ii, a[i]);
			} 

			else
			ii=v.insert(ii,a[i]); 
		}
		for(int j=0; j<v.size(); j++)
			cout<<a[j]<<" ";
		cout<<endl;
		if(i>=d)
		{
			ll m;
			//cout<<m<<" "<<a[i]<<endl;
			ll s=v.size();
			if(v.size()%2==0)
			{
				m=(v[s/2]+v[(s+1)/2])/2;
			}
			else
			{
				m=(v[s/2]);
			}
			// cout<<m<<" "<<a[i]<<endl;
			if(a[i]>=2*m)
			{
				ans++;
			}
			ii=lower_bound(v.begin(),v.end(), a[i-d]);
			v.erase(ii);

		}
	}
	cout<<ans<<endl;
	return 0;
}