#include<bits/stdc++.h>
#define ll long long int
#define inf 0x7fffffff
 
using namespace std;
 
vector<ll> adj[100010];
vector< pair<ll,ll> >tk[100010];
vector<ll> path[100010];  
ll str[100010];
vector<ll> vals;
ll ans[100010];
bool isp[100010];

 
 
int main()
{
	ll n,m,x,y,v,k,w,q,h,vert ;
	scanf("%lld %lld", &n, &m);
	for(ll i=0; i<n-1; i++)
	{
		scanf("%lld %lld", &x, &y);
		adj[x].push_back(y);
	}
	for(ll i=0; i<m; i++)
	{
		scanf("%lld %lld %lld", &v, &k, &w);
		tk[v].push_back(make_pair(k,w));
	}
	memset(isp,0,sizeof(isp));
	for(ll i=0; i<=n; i++)
		ans[i]=INT_MAX;
	for(ll i=2; i<=n; i++)
	{
		isp[ adj[i][0] ]=1;
	}
	ll jj=0;
	for(ll i=2; i<=n;i++)
	{
		if(!isp[i])
		{
			vert=adj[i][0];
			//cout<<"vert "<<vert<<endl;
			path[jj].push_back(i); 
			path[jj].push_back(vert);
			vals.clear();
			while(vert!=1)
			{
				vert=adj[vert][0];
				path[jj].push_back(vert);
			} 
			for(ll j=0; j<=path[jj].size(); j++)
			{
			 	vals.push_back(INT_MAX); 
			} 
			vals[vals.size()-1]=0;
			for(ll j=path[jj].size()-2; j>=0; j--)
			{ 
				
				for(ll k=0; k<tk[path[jj][j]].size(); k++)
				{  				 
					for(ll l=1; l<=tk[path[jj][j]][k].first; l++)
						vals[j]=min(vals[j],tk[path[jj][j]][k].second+vals[min(j+l,(ll)vals.size()-1)]);
				}
				ans[ path[jj][j] ] =min(vals[j],ans[ path[jj][j] ]); 
			} 
			 
			jj++;
		}
	}
	
	scanf("%lld", &q);
	while(q--)
	{
		scanf("%lld", &h);
		if(h==1)
		{
		    printf("0\n");
		    continue;
		} 
		printf("%lld\n",ans[h]);
	}
	return 0;
}    
