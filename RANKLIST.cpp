#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	int t;
	cin>>t;
	ll n,s,m;
	while(t--)
	{
		scanf("%lld %lld",&n, &s);
		ll a[n];
		for(ll i=0; i<n;i++)
			a[i]=0;
		m=s;
		ll j=0;
		while(m>0)
		{
			for(ll i=j; i<n; i++)
			{
				a[i]+=1;
				m-=1;
			}
			j+=1;
		}
		sort(a,a+n);
		for(ll i=0; i<n;i++)
			cout<<a[i]<<" ";
		cout<<endl;
		int k=n;
		for(ll i=0; i<n;i++)
		{
			if(a[i]!=(i+1))
			{
				k=i;
				break;
			}
		}
		printf("%lld\n", (n-k));
	}
	return 0;
}
