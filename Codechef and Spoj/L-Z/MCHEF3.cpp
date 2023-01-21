#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define INF 250

using namespace std;

ll tree[400050];
ll rting[10010];
ll cost[10010];
ll m[1010][510];

ll ret(ll ss,ll se,ll i,ll index,ll mini)
{
	if(se<i||ss>i)
	{
		return 0;
	}
	if(tree[index]<mini)
	mini=tree[index];
	if(ss==se)
	{
		return mini;
	}
	return ret(ss,(ss+se)/2,i,2*index,mini)+ret((ss+se)/2+1,se,i,2*index+1,mini);
}

void updatevalue(ll ss,ll se,ll qs,ll qe,ll v,ll index)
{
	if(qe<ss||qs>se)
	return ;
	if(qe>=se&&ss>=qs)
	{
		if(tree[index]>v)
		tree[index]=v;
		return;
	}
	if(se!=ss)
	{
		updatevalue(ss,(ss+se)/2,qs,qe,v,2*index);
		updatevalue((ss+se)/2+1,se,qs,qe,v,2*index+1);
	}
}

ll knapsack(ll n,ll size,ll cost[],ll val[])
{
	ll i,j;
	for(i=1;i<=n;++i)
	{
		for(j=0;j<=size;++j)
		{
			if(cost[i-1]<=j)
			{
				m[i][j]=max(m[i-1][j],val[i-1]+m[i-1][j-cost[i-1]]);
			}
			else
			{
				m[i][j]=m[i-1][j];
			}
		}
	}
	return m[n][size];
}
 

int main()
{
	ll t,n,k,m;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld %lld %lld", &n, &k, &m);
		ll a[n+1];
		for(ll i=0; i<400010; i++)
			tree[i]=INF;
		ll sum=0;
		for(ll i=0; i<n; i++)
			scanf("%lld", &a[i]), sum+=a[i];
		ll x[n+1];
		while(m--)
		{
			ll l,r,c;
			scanf("%lld%lld%lld",&l,&r,&c);
			updatevalue(1,n,l,r,c,1);
		}	
		for(ll i=1;i<=n;++i)
		{
			ll mini=INF;
			x[i]=ret(1,n,i,1,mini);
		}
		vector< pair<double,ll> > v;
		for(ll i=1;i<=n;++i)
		{
			if(a[i]<0&&x[i]<=k)
			{
				v.push_back( pair<double,ll> ((a[i]*1.0)/(x[i]*1.0),i) );
			}
		}
		
		sort(v.begin(),v.end());
		ll f;
		for(  f=0;f<v.size()&&f<2001;++f)
		{
			cost[f]=x[v[f].second];
			rting[f]=(-1)*a[v[f].second];
		}
		printf("%lld\n",sum+knapsack(f,k,cost,rting));
		
	}
	return 0;
}


