#include<bits/stdc++.h>
#define ll long long int
 
using namespace std;
 
ll adl[1010][1010];
ll c[1010];
ll vis[1010];
 
 
bool f(ll src, ll n)
{
	queue <ll> q; 
    for (ll i = 1; i <= n; i++)
        c[i] = -1;
    vis[src]=1;
    c[src] = 1;
    q.push(src);
    while (!q.empty())
    { 
        ll u = q.front();
        q.pop(); 
        for (ll i = 1; i <= n; i++)
        { 
            if (adl[u][i] && c[i] == -1)
            { 
                c[i] = 1 - c[u];
                vis[i]=1;
                q.push(i);
            }
            else if (adl[u][i] && c[i] == c[u])
                return false;
        }
    }
    return true;
}
 
int main()
{
	ll t,m,n,x,y;
	scanf("%lld", &t);
	while(t--)
	{
		memset(vis,0,sizeof(vis));
		scanf("%lld %lld", &n, &m); 
		memset(adl,0,sizeof(adl));
		while(m--)
		{
			scanf("%lld %lld", &x,&y);
			if(x!=y)
			{
				adl[x][y]=1;
				adl[y][x]=1;
			}
		}
		for(ll i=1; i<=n; i++)
		{
			for(ll j=1; j<=n; j++)
			{
				if(i!=j)
					adl[i][j]=!adl[i][j];
				//cout<<adl[i][j]<<" ";
			}
			//cout<<endl;
		}
		int vv=0;
		for(ll i=1; i<=n; i++)
		{
			if(!vis[i])
			{
				vv=f(i,n);
				if(vv==0)
				{
					break;
				}
			}
		}
		if(vv)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}	
	return 0;
} 
