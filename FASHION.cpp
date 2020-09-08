#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll t,n,a[1000], b[1000],i,j, s;
	scanf("%lld", &t);
	while(t--)
	{
		s=0;
		scanf("%lld", &n);
		for(i=0; i<n;i++)
			scanf("%lld", &a[i]);
		for(i=0; i<n; i++)
			scanf("%lld", &b[i]);
		sort(a,a+n);
		sort(b,b+n);
		for(i=0; i<n; i++)
		{
			s+=a[i]*b[i];
		}
		printf("%lld\n",s );
	}
	return 0;
}
