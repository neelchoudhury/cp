#include<bits/stdc++.h>
#define ll long long int
#define x first
#define y second

using namespace std;

bool compare1(const pair<ll,ll>&i, const pair<ll,ll>&j){
    return i.x < j.x;
}

bool compare2(const pair<ll,ll>&i, const pair<ll,ll>&j){
    return i.y < j.y;
}

int main()
{
	ll t,n,k,m;
	ll an[100010];
	ll bn[100010];
	ll am[100010];
	vector<pair<ll,ll>> v;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld %lld %lld", &n, &k, &m);
		memset(an,0,sizeof(an));
		memset(bn, 0, sizeof(bn));
		memset(am,0,sizeof(am));
		v.clear();
		for(ll i=0; i<n; i++)
		{
			scanf("%lld", &an[i]);
		}
		bn[0]=an[0];
		for(ll i=1; i<n; i++)
		{
			bn[i]=an[i]+bn[i-1];
		}
		ll l,r,c;
		for(ll i=0; i<m; i++)
		{
			scanf("%lld %lld %lld", &l, &r, &c);
			v[i].y=(bn[n-1]-bn[r-1]+bn[l-2]);
			v[i].x=c;
		}
		//stable_sort(v.begin(), v.end(),compare1);
		//stable_sort(v.begin(), v.end(), compare2);
		ll ans=v[0].y;
		for(ll i=0; i<v.size(); i++)
		{
			if(v[i].x<=k)
			{
				if(v[i].y>=ans)
					ans=v[i].y;
			}
		}
		printf("%lld\n", ans);
	}
}
