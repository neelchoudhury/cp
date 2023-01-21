#include<bits/stdc++.h>
#define ll long long int
#define ld long double

using namespace std;

ll a[100010];

int main()
{
	ll n,h,k,x;
	cin>>n>>h>>k;
	//scanf("%I64 %I64d %I64d", &n, &h, &k);
	ll ans=0;
	ll sum=0;
	memset(a,0,sizeof(a));
	for(ll i=0; i<n; i++)
		cin>>a[i];
		
		//scanf("%I64d", &a[i]);
	for(ll i=0; i<n; )
	{
		int f=0;
		while(sum+a[i]<=h and i<n)
		{
			sum+=a[i];
			f=1;
			i++;
		}
		ll xx=0;
		if(sum-k>a[i])
		{
			xx=(sum-k)/k+1;
			sum=(sum>k?sum-(xx)*k:0);
		}
		else
		{
			xx=1;
			sum=(sum>k?sum-k:0);
		}
		ans+=xx;
		//cout<<sum<<" "<<ans<<endl;
		
	}
	if(sum>0)
	{
		if(sum%k==0)
		{
			ans+=sum/k;
		}
		else
		{
			ans+=(sum/k+1);
		}
	}
	cout<<ans<<endl;
	return 0;
}
