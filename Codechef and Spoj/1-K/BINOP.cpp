#include<bits/stdc++.h>
#define ll long long int

using namespace std;

string a,b;

int main()
{
	ll t;
	scanf("%lld", &t);
	while(t--)
	{ 
		ll cnta0=0,cnta1=0,ans=0;
		cin>>a;
		cin>>b;
		ll n=a.length();
		for(ll i=0; i<n; i++)
		{
			if(a[i]=='0')
				cnta0++;
			else
				cnta1++;
		}
		if(cnta1==n or cnta0==n)
			printf("Unlucky Chef\n");
		else
		{
			printf("Lucky Chef\n");
			cnta0=0,cnta1=0;
			for(ll i=0; i<n; i++)
			{
				if(a[i]!=b[i])
				{
					if(a[i]=='0')
						cnta0++;
					else
						cnta1++;
				}
			}
			ans=max(cnta0,cnta1);
			printf("%lld\n", ans);
		}
	}
	return 0;
}
