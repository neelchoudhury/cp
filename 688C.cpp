#include<bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;

map<ll,ll> m1,m2;
map<ll,ll>::iterator ii1, ii2,ii3,ii4;
ll colorArr[100010];
ll a[100010];
vector<ll> G[100010];
queue <ll> q;

bool isBipartite(ll src, ll V)
{  
    
    colorArr[src] = 0;
  
    
    q.push(src);
  
    while (!q.empty())
    { 
        ll u = q.front();
        q.pop();
  
        for (ll v = 0; v < G[u].size(); ++v)
        { 
            if ( colorArr[G[u][v]] == -1)
            { 
                colorArr[G[u][v]] = 1 - colorArr[u];
                //cout<<G[u][v]<<" "<<colorArr[G[u][v]]<<endl;
                q.push(G[u][v]);
            } 
            else if (colorArr[G[u][v]] == colorArr[u])
                return false;
        }
    }
  
    return true;
}

int main()
{
	ll n,m;
	cin>>n>>m;
	ll x,y;
	ll f=1; 
	memset(colorArr,0,sizeof(colorArr));
	memset(a,0,sizeof(a));
	while(m--)
	{
		cin>>x>>y;
		G[x].pb(y);
		G[y].pb(x);
		colorArr[x]=1;
		colorArr[y]=1;
		a[x]=1;
		a[y]=1;
	}
	ll cc=0;
	for(ll i=1; i<=n;i++)
		cc+=colorArr[i];
	for (ll i = 1; i <=n; ++i)
        colorArr[i] = -1; 
	for(ll i=1; i<=n; i++)
	{
		if(colorArr[i]!=-1 or a[i]==0)
			continue;
		else
		{
			f=isBipartite(i,n);
			//cout<<i<<" "<<f<<endl;
			if(f==0)
				break;
		}
		if(f==0)
			break;
		
	}
	//cout<<f<<endl;
	if(f==1)
	{
		ll cnt1=0,cnt2=0;
		for(ll i=1; i<=n; i++)
		{
		//	cout<<colorArr[i]<<" ";
			if(colorArr[i]==1)
				cnt1++;
			else if(colorArr[i]==0)
				cnt2++;
		}
		//cout<<cnt1<<" "<<cnt2<<" "<<cc<<endl;
		if(cnt1+cnt2!=cc)
		{
			//cout<<cnt1<<" "<<cnt2<<" "<<cc<<" "<<cnt1+cnt2<<endl;
			cout<<-1<<endl;
		}
		//cout<<endl;
		else if(cnt1<=cc/2)
		{
			cout<<cnt1<<endl;
		for(ll i=1; i<=n; i++)
		{
			if(colorArr[i]==1)
				cout<<i<<" ";
		}
		cout<<endl;
		cout<<cnt2<<endl;
		for(ll i=1; i<=n; i++)
		{
			if(colorArr[i]==0)
				cout<<i<<" ";
		}
		cout<<endl;
		}
		else
		{
			cout<<cnt2<<endl;
		for(ll i=1; i<=n; i++)
		{
			if(colorArr[i]==0)
				cout<<i<<" ";
		}
		cout<<endl;
		cout<<cnt1<<endl;
		for(ll i=1; i<=n; i++)
		{
			if(colorArr[i]==1)
				cout<<i<<" ";
		}
		cout<<endl;
		}
	}
	else
	{
		cout<<-1<<endl;
	}
	return 0;
}
