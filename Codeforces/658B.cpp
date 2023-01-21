#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007

using namespace std;

ll a[150010];
map<ll, ll> m;

int main()
{
	ll n,k,q;
	cin>>n>>k>>q;
	memset(a,0,sizeof(a));
	for(ll i=0; i<n; i++)
		cin>>a[i];
	m.clear();
	map<ll,ll>::iterator ii;
	ll x,y;
	int cnt=0;
	for(ll i=0; i<q; i++)
	{
		cin>>x>>y;
		if(x==1)
		{
			m.insert(pair<ll,ll>(a[y-1],y-1));
			cnt++;
			if(cnt>k)
			{
				m.erase(m.begin());
				cnt--;
			}
		}
		else if(x==2)
		{
			ii=m.find(a[y-1]);
			//ll d=distance(m.begin(),m.find(a[y-1]));
			//cout<<d<<endl;
			//cout<<m.empty()<<endl;
		//	cout<<(ii)->first<<endl;
			if(m.empty())
				cout<<"NO"<<endl;
			else if(ii!=m.end())
				cout<<"YES"<<endl;
			
			else
				cout<<"NO"<<endl;
		}
	}
	return 0;
}
