#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[1005];

int main()
{
	ll n,m,k;
	cin>>n>>m>>k;
	memset(a,0,sizeof(a));
	for(ll i=0;i<m+1; i++)
		cin>>a[i];
	ll ans=0;
	for(ll i=0; i<m; i++)
	{
		ll x=1;
		ll cnt=0;
		//cout<<"cs "<<(x<(1<<n))<<" "<<(1<<n)<<endl;
		while(x<(1<<n))
		{
		//	cout<<"sat"<<endl;
			if((x&a[i])^(x&a[m]))
				cnt++;
			//cout<<(x&a[i])<<" "<<(x&a[m])<<" "<<((x&a[i])^(x&a[m]))<<endl;
			x=x<<1;
		}
		if(cnt<=k)
			ans++;
	}
	cout<<ans<<endl;
	return 0;
}
