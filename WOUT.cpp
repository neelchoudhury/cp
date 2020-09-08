#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll t;
	ll n,hi;
	scanf("%lld", &t);
	while(t--)
	{
		//cout<<"run"<<endl;
		scanf("%lld %lld", &n, &hi);
		ll l,h;
		ll b[n+1];
		for(int i=0; i<=n; i++)
			b[i]=n;
		/*for(int i=0; i<n; i++)
			cout<<b[i]<<" ";
		cout<<endl;*/
		for(ll i=0; i<n; i++)
		{
		//	cout<<"run1"<<endl;
			scanf("%lld %lld", &l,&h);
			for(ll j=l; j<=h; j++)
				b[j]--;
		}
		/*for(int i=0; i<n; i++)
			cout<<b[i]<<" ";
		cout<<endl;*/
		ll sum=0,ans=(9999999),tmp;
		for(ll i=0; i<hi; i++)
			sum+=b[i] ;
		ans=sum;
		for(ll i=hi; i<=n; i++)
		{
		//	cout<<"run4"<<endl;
			//cout<<sum<<" sum "<<" ans "<<ans<<endl;
			sum=sum+b[i]-b[i-hi];
			ans=min(ans,sum );
			
		}
		printf("%lld\n", ans);
	}
	return 0;
}
