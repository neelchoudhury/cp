#include<bits/stdc++.h>
#define ll long long int

using namespace std;

vector< pair<ll,ll> > v;

/*bool co(pair<ll,ll> a, pair<ll,ll> b)
{
	return a.first<b.first;
}
*/
int main()
{
	ios_base::sync_with_stdio(false);
	ll t,n;
	cin>>t;
	ll x,y;
	while(t--)
	{
		v.clear();
		cin>>n;
		int j=0;
		for(int i=0;i<n; i++)
		{
			cin>>x>>y;
			v.push_back(make_pair(x,1));
			v.push_back(make_pair(y,-1));
		}
		sort(v.begin(),v.end());
	/*	for(int i=0; i<v.size(); i++)
		{
			cout<<v[i].first<<" "<<v[i].second<<endl;
		}*/
		//cout<<endl;
		
		int ans=0;
		int ctr=0;
		for(int i=0; i<v.size(); i++)
	
		{
			if(v[i].second>0)
			{
				ctr++;
			}		
			else
			{
				ctr--;
			}
			ans=max(ans,ctr);
		}
		cout<<ans<<endl;
	//	sort()
	}
	//cin
	return 0;
}
