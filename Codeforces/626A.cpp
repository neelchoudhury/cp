#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007

using namespace std;

char s[205];
vector<pair<int,int>> v;

bool compp(pair<int,int> &a, pair<int,int> &b )
{
	return a.first<b.first;
}

int main()
{
	ll n;
	cin>>n;
	cin>>s;
	 
	v.push_back(pair<ll,ll>(0,0));
	for(int i=0; i<n; i++)
	{
		if(i==0)
		{
			if(s[i]=='U')
				v.push_back(pair<ll,ll>(1,0));
			else if(s[i]=='D')
				v.push_back(pair<ll,ll>(-1,0));
			else if(s[i]=='R')
				v.push_back(pair<ll,ll>(0,1));
			else if(s[i]=='L')
				v.push_back(pair<ll,ll>(0,-1));
		}
		else
		{
			if(s[i]=='U')
				v.push_back(pair<ll,ll>(v[i-1].first+1,v[i-1].second));
			else if(s[i]=='D')
				v.push_back(pair<ll,ll>(v[i-1].first-1,v[i-1].second));
			else if(s[i]=='R')
				v.push_back(pair<ll,ll>(v[i-1].first,v[i-1].second+1));
			else if(s[i]=='L')
				v.push_back(make_pair(v[i-1].first,(signed int)(v[i-1].second -1))),cout<<" mm  "<<(v[i-1].second-1)<<" "<<v[i].second<<endl;
		}
		cout<<v[i].first<<" "<<v[i].second<<endl;
	}
	for(int i=0;i<n; i++)
		cout<<v[i].first<<" "<<v[i].second<<endl;
	sort(v.begin(), v.end(), compp);
	ll ans=0,cnt=1;
	int j=0;
	for(int i=1; i<n; i++)
	{
		if(v[i].first==v[j].first and v[i].second==v[i].second)
		{
			cnt++;
		}
		else
		{
			cout<<cnt<<endl;
			j=i;
			ans+=(cnt*(cnt-1))/2;
			cnt=1;
		}
	}
	cout<<ans<<endl;
	return 0;
}
