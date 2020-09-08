#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define sc(n) scanf("%lld",&n)
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 

using namespace std;

ll a[55][55];
ll vis[55][55];
ll dx[]={-1,1,0,0};
ll dy[]={0,0,1,-1};
ll n,m,k,cl=0,cll=0;
vector<pair<ll, pair<ll,ll> > > vv;
string c[55]; 

ll dfs(ll x,ll y,ll cnt)
{
	vis[x][y]=1; 
	cnt++;
	if(x==0 || x==n-1 || y==0 || y==m-1)
	{
		cll=1;
		//return 0;
	}
	
	{	 
		for(ll i=0;i<4;i++)
		{
			if(x+dx[i]>=0 && x+dx[i]<n and y+dy[i]>=0 && y+dy[i]<m and a[x+dx[i]][y+dy[i]] and !vis[x+dx[i]][y+dy[i]])
				cnt=dfs(x+dx[i],y+dy[i],cnt);

		}
	}
	return cnt;
}

void f(ll x,ll y)
{
	vis[x][y]=1;
	a[x][y]=0; 
	if(x==0 || x==n-1 || y==0 || y==m-1)
	{
		return ;
	}
	else
	{	 
		for(ll i=0;i<4;i++)
		{
			if(x+dx[i]>=0 && x+dx[i]<n and y+dy[i]>=0 && y+dy[i]<m and a[x+dx[i]][y+dy[i]] and !vis[x+dx[i]][y+dy[i]])
				 f(x+dx[i],y+dy[i]);

		}
	}
}

int main()
{
	mem(a);
	mem(vis);
	
	sc(n);
	sc(m);
	sc(k);
	for(ll i=0; i<n; i++)
	{
		c[i]="";
		cin>>c[i];		 
	}

	for(ll i=0; i<n; i++)
	{ 
		for(ll j=0; j<m; j++)
		{ 
			if(c[i][j]=='*')
				a[i][j]=0;
			else
				a[i][j]=1;
			 
		} 
	}
	ll cnt=0;
	for(ll i=0; i<n; i++)
	{
		for(ll j=0; j<m; j++)
		{
			cnt=0;
			if(c[i][j]=='.' and !vis[i][j])
			{

				//cout<<"pp "<<i<<" "<<j<<endl;
				cll=0;
				cnt=dfs(i,j,0);
				//cout<<cll<<" bb"<<endl;
				if(!cll)
					vv.pb(pair<ll,pair<ll,ll> > (cnt, pair<ll,ll> (i,j)));
			}
		}
	}
	mem(vis);

	sort(vv.begin(), vv.end());
	// for(ll i=0; i<vv.size(); i++)
	// {
	// 	cout<<vv[i].ff<<" "<<vv[i].ss.ff<<" "<<vv[i].ss.ss<<endl;
	// }
	for(ll i=0; i<vv.size()-k;i++)
	{
		cl+=vv[i].ff;
		//cout<<vv[i].ff<<" "<<vv[i].ss.ff<<" "<<vv[i].ss.ss<<endl;
		f(vv[i].ss.ff, vv[i].ss.ss);
	}
	printf("%lld\n", cl);
	for(ll i=0; i<n; i++)
	{
		for(ll j=0; j<m; j++)
		{
			if(!a[i][j])
			{
				printf("*");
			}
			else
			{
				printf(".");
			}
		}
		printf("\n");
	}
	return 0;
}