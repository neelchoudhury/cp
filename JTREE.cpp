#include<bits/stdc++.h>
#define ll long long int
#define inf 0x7fffffff
 
using namespace std;
 
vector<ll> adj[100010];
vector< pair<ll,ll> >tk[100010];
vector<ll> path[100010]; 
vector<ll> ppath[100010];
vector<ll> tree[100010];
ll str[100010];
vector<ll> vals;
ll ans[100010];
bool isp[100010];

 
void update_tree(ll ind,ll node, ll a, ll b, ll i, ll j, ll value) {
    
	if(a > b || a > j || b < i) // Current segment is not within range [i, j]
		return;
    
  	if(a == b) { // Leaf node
    		tree[ind][node]  = min(tree[ind][node],value);
    		str[a]=tree[ind][node];
    		return;
	}
 
	update_tree(ind,node*2, a, (a+b)/2, i, j, value); // Updating left child
	update_tree(ind,1+node*2, 1+(a+b)/2, b, i, j, value); // Updating right child
 
	tree[ind][node] = (tree[ind][node*2]+ tree[ind][node*2+1]); // Updating root with max value
} 
 
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
			path[jj].push_back(i); 
			path[jj].push_back(vert);
			while(vert!=1)
			{
				vert=adj[vert][0];
				path[jj].push_back(vert);
			}
			for(ll j=0; j<=path[jj].size(); j++)
			{
				//tree[jj].push_back(INT_MAX);
				 
				{
					vals.push_back(INT_MAX);
				}
				//str[j]=0;
			}
			//update_tree(jj,1,0,path[jj].size()-1,path[jj].size()-2,path[jj].size()-2,0);
			//ppath[jj].push_back(0); 
			vals[vals.size()-1]=0;
			for(ll j=path[jj].size()-2; j>=0; j--)
			{ 
				//ll qq=0; 
				//qq=str[j];
				//cout<<"qq "<<qq<<endl;
				for(ll k=0; k<tk[path[jj][j]].size(); k++)
				{ 
					cout<<"second "<<(tk[path[jj][j]][k].second)<<endl;
					//update_tree(jj,1,0,path[jj].size()-1,j+1,min(j+tk[path[jj][j]][k].first,(ll)path[jj].size()-1),tk[path[jj][j]][k].second);
					for(ll l=1; l<=tk[path[jj][j]][k].first; l++)
						vals[j]=min(vals[j],tk[path[jj][j]][k].second+vals[min(j+l,(ll)vals.size()-1)]);
				}
				ans[path[jj][j]]=min(vals[j],ans[path[jj][j]]);
			//	cout<<"str j "<<str[j]<<endl;
			//	ppath[jj].push_back(str[j]);
			}
			//reverse(ppath[jj].begin(), ppath[jj].end());
			/*for(ll q=0; q<ppath[jj].size(); q++)
			{
				cout<<ppath[jj][i]<<" ";
			}*/
		//	cout<<endl;
			 
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
		/*ans=INT_MAX;
		vector<ll>::iterator ii;
		for(ll i=0; i<jj; i++)
		{
			ii=find(path[i].begin(), path[i].end(), h);
			if(ii!=path[i].end())
			{
				ans=min(ans, ppath[i][ii-ppath[i].begin()]);
			}
		}*/
		printf("%lld\n",ans[h]);
	}
	return 0;
}    
