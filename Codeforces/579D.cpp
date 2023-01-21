#include<bits/stdc++.h>
#define ll long long int
#define ios ios_base::sync_with_stdio(false)
#define pb push_back
#define mem(a) memset(a,0,sizeof(a))

using namespace std;

ll a[2000010],pre[2000010],suf[2000020];

int main()
{
	ios;
	mem(a);
	mem(pre);
	mem(suf);
	ll n,k,x;
	cin>>n>>k>>x;
	ll maxx=0,ind;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
 	ll mult=1;
 	while(k--)
 		mult*=x;
 	pre[0]=a[0];
	for(int i=1; i<n; i++)
	{
		pre[i]=a[i]|pre[i-1];
	}
	suf[n-1]=a[n-1];
	for(int i=n-2; i>=0; i--)
	{
		suf[i]=a[i]|suf[i+1];
	}
	ll ans=max(suf[0],(a[0]*mult)|suf[1]);
	for(int i=1; i<n-1; i++)
	{
		ans=max(ans,pre[i-1]|(a[i]*mult)|suf[i+1]);
	}
	ans=max(ans,(pre[n-2]|(a[n-1]*mult)));
	cout<<ans<<endl;
	return 0;
}
