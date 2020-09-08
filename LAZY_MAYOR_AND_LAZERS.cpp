#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll h[100010], a[100010];

int main()
{
	ll m,n;
	scanf("%lld", &n);
	for(ll i=0; i<n; i++)
	{
		scanf("%lld", &h[i]);
	}
	scanf("%lld", &m);
	for(ll i=0; i<m; i++)
	{
		scanf("%lld", &a[i]);
	}
	sort(a,a+m);
	ll cnt=0,ans=0,j=m-2;
	for(ll i=n-1; i>=a[m-1]-1; i--)
	{
		ans+=h[i];
	}
	//cout<<ans<<endl;
	for(ll i=a[m-1]-1; i>=0; i--)
	{
		ans=ans+min(cnt,h[i]);
		//cout<<ans<<endl;
		if(i==a[j])
		{
			cnt=0;
			j--;
		}
		cnt++;
	}
	printf("%lld\n",ans);
	return 0;
}
