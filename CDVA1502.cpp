#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	int t,n,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		ll a[k];
		for(int i=0; i<k;i++)
			scanf("%lld",&a[i]);
		sort(a,a+k);
		ll f=1;
		for(int i=1; i<=n; i++)
		{
			f=(f*i)%a[k-1];
		}
		printf("%lld\n",f);
	}
	return 0;
}
