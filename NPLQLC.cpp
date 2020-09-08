#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define pb push_back

using namespace std;

ll h[1010], c[1010], arr[11], vis[1010];

ll cc(ll a[])
{
	ll cnt=0;
	for(ll i=0; i<10; i++)
	{
		if(a[i])
			cnt++;
	}
	return cnt;
}

ll f(ll s,ll k,ll n,ll arr[],ll cost,ll t,ll vis[])
{
	ll val=0,qq=INT_MAX,bing=INT_MAX;
	for(ll i=max((ll)0,s-k); i<min(n,s+k); i++)
	{
		if(i!=s and vis[i]!=1)
		{
			cout<<h[s]<<" "<<h[i]<<endl;
			vis[i]=1;
			arr[c[i]]++;
			val=abs(h[i]-h[s]);	
			if(i==t)
			{
				cout<<"cl;"<<endl;
				return cost+val;
			}		
			cout<<"ff "<<cc(arr)<<endl;
			if(cc(arr)<k)
			{
				qq=f(i,k,n,arr,val,t,vis);
				bing=min(qq,bing);
			}
			else
			{
				arr[c[i]]--;
				continue;
			}	
			arr[c[i]]--;
			vis[i]=0;					 
		}
	}
	cost+=bing;
	return bing;
}

int main()
{
	ll n,k,m,s,t;
	memset(h,0,sizeof(h));
	memset(c,0,sizeof(c));
	cin>>n;
	cin>>k>>m;
	for(ll i=0;i<n; i++)
	{
		cin>>h[i];
	}
	for(ll i=0; i<n; i++)
	{
		cin>>c[i];
	}
	cin>>s>>t;
	s-=1, t-=1;
	memset(vis,0,sizeof(vis));
	vis[s]=1;
	cout<<f(s,m,n,arr,0, t,vis)<<endl;
	return 0;
}