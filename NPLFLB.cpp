#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define ff first
#define ss second
#define pb push_back
#define ios ios_base::sync_with_stdio(false)
#define mem(a) memset(a,0,sizeof(a));
 
using namespace std;
 
ll a[100010];
vector<ll> v;
 
int main()
{
	ios;
	ll n,d,ch,x,y;
	cin>>n>>d;
	ll ans=INT_MIN, ind=-1;
	v.clear();
	for(ll i=1; i<=n; i++)
	{
 
		cin>>a[i];
		if(a[i]>ans)
		{
			ans=a[i];
			v.clear();
			v.pb(i);
		}
		else if(a[i]==ans)
		{
			v.pb(i);
		}
	}
	
	while(d--)
	{
		cin>>ch>>x>>y;
		if(ch==1)
		{
			a[x]+=y;
			if(a[x]>ans)
			{
				ans=a[x];
				v.clear();
				v.pb(x);
			}
			else if(a[x]==ans)
			{
				v.pb(x);
			}
		}
		else if(ch==2)
		{
			if(a[x]!=a[y])
			{
				if(a[x]>a[y])
				{
					if(ans==a[x])
					{
						
						ans+=a[y];
					}
					a[x]+=a[y];
					if(a[x]>ans)
						ans=a[x];
					a[y]=0;
					
				}
				else
				{
					if(ans==a[y])
					{
						
						ans+=a[x];
					}
					a[y]+=a[x];
					if(a[y]>ans)
						ans=a[y];
					a[x]=0;
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
} 