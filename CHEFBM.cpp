#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll p[100010];
vector<pair<ll,pair<ll,ll>>> v[100010];

void compare(pair<ll,pair<ll,ll>> &a, &b)
{
	if(lhs.first>rhs.first)
		return lhs.first<rhs.first;
	else if(lhs.first==rhs.first)
		return lhs.second.first<rhs.second.first;
}

int main()
{
	ll n,m,p,x,y;
	scanf("%lld %lld %lld", &n, &m, &p);
	for(ll i=0; i<100010; i++)
	{
		v[i].second.second;
	}
	while(p--)
	{
		scanf("%lld %lld", &x, &y);
		v[x].push_back(make_pair(x,v[x].second.second+1));
	}
	sort(v.begin(), v.end(),compare);
	bool flag=0;
	int ans=0;
	for(ll i=p; i>=0; i--)
	{
		if(i!=p)
		{
			if(v[i].first==v[i+1].first)
			{
				if(v[i].second<v[i+1].second)
				{
					ans=-1
					break;
				}
				else if(v[i].second==v[i+1].second-1 and (v[i].second.second+1)<=v[i+1].second.second)
				{
					ans+=(v[i+1].second.second-v[i].second.second-1);
				}
				
			}
			else if(v[i].frist!=v[i+1].first or i==0)
			{
				printf("%lld\n", ans);
				ans=0;
				
			}
		}
		
	}
	return 0;
	
}
