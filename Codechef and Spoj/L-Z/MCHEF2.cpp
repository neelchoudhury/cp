#include<bits/stdc++.h>
#define ll long long int
#define x first
#define y second
#define INF 1<<32

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
	ll rating=0;
	vector<pair<ll,ll>> v;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld %lld %lld", &n, &k, &m);
		memset(an,0,sizeof(an));
		memset(bn, 0, sizeof(bn));
		memset(am,0,sizeof(am));
		v.clear();
		ll var=0;
		
		//Taking in the array
		for(ll i=0; i<n; i++)
		{
			scanf("%lld", &var);
			rating+=var;
			v.push_back(make_pair(var,INF));
		}
		
		//The m chef updates
		ll l,r,c;
		for(ll i=0; i<m; i++)
		{
			scanf("%lld %lld %lld", &l, &r, &c);
			for(ll j=l-1; j<=r-1; j++)
			{
				v[j].y=min(v[j].y, c);
			}
		}
		
		//Sorting first by rating then by cost
		sort(v.begin(), v.end(),compare1);
		sort(v.begin(), v.end(), compare2);
		
		//Coin-change dp implementation
		
		ll cnt=0;
		for(ll i=0; i<v.size(); i++)
		{
			if(v[i].x>=0)
				break;
			cnt++;
		}
		vector<pair<ll,ll>> v1;
		for(ll i=0; i<cnt; i++)
		{
			v1.push_back(v[i]);
		}
		
		sort(v1.begin(), v1.end(), compare2);
		
		for(ll i=0; i<v1.size()/2; i++)
		{
			v1[i].x=v1[v1.size()-i-1].x;
			v1[i].y=v1[v1.size()-i-1].y;
		}
		
		ll table [v1.size()][k+1];
		
		memset(table,0,sizeof(table));
		
		for(ll i=0; i<=k; i++)
			table[v1.size()-1][i]=i/v1[0].y;
		for(ll i=v1.size()-1; i>=0; i--)
		{
			for(ll j=0; j<=k; j++)
			{
				if(v1[i].y>j or table[i+1][j] <1+table[i][j-v1[i].y])
					m[i][j]=m[i+1][j];
				else
					m[i][j]=1+m[i][j-v[i]];
			}
		}
		ll sum=0;
		ll cnt=0;
		ll mux=-INF;
		for(ll i=0; i<v1.size(); i++)
		{
			if(i!=v1.size()-1 and table[i][k]>table[i+1][k])
			{
				sum+=((table[i][k]-table[i+1][k]-cnt)*v1[i].x);
				cnt+=table[i][k];
			}
			else
			{
				sum+=((table[i][k]-table[i+1][k])*v1[i].x);
				mux=max(mux,sum);
				
			}
			if(i==v1.size()-1)
			{
				sum=table[i][k]*v1[i].x;
				mux=max(mux,sum);
			}
		}
		printf("%lld\n", mux);
	}
	return 0;
}
