#include<bits/stdc++.h>
#define ll long long int
#define ios ios_base::sync_with_stdio(false)
#define mem(a) memset(a,0,sizeof(a))
#define inf 9999999999999999
#define smoke first
#define colour second
#define sc(a) scanf("%lld",&a)
#define pr(a) printf("%lld\n",a)
#define MOD 1000000007
 
using namespace std;

ll xc[100010], yc[100010];

int main()
{
	ll t,n,m,q,x,y;
	sc(t);
	ll cy=0,cx=0;
	while(t--)
	{
		mem(xc);
		mem(yc);
		sc(n);
		sc(m);
		sc(q);
		ll ans=0;
		while(q--)
		{
			sc(x);
			sc(y);
			if(!xc[x])
			{
				cx=++;
				xc[x]=1;
				ans+=(cy+1);
			}
			else if(!yx[y])
			{
				cy++;
				yc[y]=1;
				ans+=(cx+1);
			}
			ans+=1;
		
		}
		int ll1=0,ll2=0,ss1=inf,ss2=inf;
		int cnt=0;
		for(int i=0; i<n; i++)
		{
			if(xc[i]==0)
			{
				cnt++;
			}
			else
			{
				ss1=min(ss1,cnt);
				cnt=0;	
			}
		}
		for(int i=0; i<n; i++)
		{
			if(xc[i]==0)
			{
				cnt++;
			}
			else
			{
				ll1=max(ll1,cnt);
				cnt=0;	
			}
		}
		for(int i=0; i<m; i++)
		{
			if(yc[i]==0)
			{
				cnt++;
			}
			else
			{
				ss2=min(ss2,cnt);
				cnt=0;	
			}
		}
		for(int i=0; i<m; i++)
		{
			if(yc[i]==0)
			{
				cnt++;
			}
			else
			{
				ll2=max(ll2,cnt);
				cnt=0;	
			}
		}
		printf("%lld %lld %lld\n", ans,(ss1*ss2), (ll1*ll2));
	}
	return 0;
}
