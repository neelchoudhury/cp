#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	int t;
	ll n;
	cin>>t;
	while(t--)
	{
		//cin>>n;
		scanf("%lld", &n);
		int a[n];
		for(int i=0; i<n; i++)
			scanf("%lld",&a[i]);
		sort(a,a+n);
		ll mfreq=1;
		ll cfreq=1;
		for(ll i=1; i<n;i++)
		{
			if(a[i]==a[i-1])
			{
				cfreq++;
			}	
			else
			{
				if(cfreq>mfreq)
					mfreq=cfreq;
				cfreq=1;
			}
			if(i==n-1 )
			{
				if(cfreq>mfreq)
					mfreq=cfreq;
			}
		}
		printf("%lld\n",(n-mfreq));
	}
	return 0;
}
