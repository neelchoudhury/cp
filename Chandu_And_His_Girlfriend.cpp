#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[100010];

int main()
{
	ll t,n;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld", &n);
		for(ll i=0;i<n; i++)
		{
			scanf("%lld", &a[i]);
		}
		sort(a,a+n);
		reverse(a,a+n);
		for(ll i=0; i<n; i++)
			printf("%lld ", a[i]);
		cout<<endl;
	}
	return 0;
}
