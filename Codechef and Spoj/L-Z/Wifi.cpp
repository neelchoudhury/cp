#include<iostream>
#include<cstdio>
#include<algorithm>
#define ll long long int

using namespace std;

int main()
{
	ll n,c;
	scanf("%lld%lld", &n, &c);
	ll a[n];
	for(ll i=0; i<n; i++)
		scanf("%lld",&a[i]);
	sort(a,a+n);
	ll b[3]={0,0,0};
	ll max=0;
	cout<<max;
	for(ll i=0;i<=n/3; i++)
	{
		cout<<"Entered loop  "<<max<<endl;
		for(ll j=0; j<=n/3-i;j++)
			b[0]+=a[j];
		for(ll j=n/3-i; j<=2*n/3+i;j++)
			b[1]+=a[j];
		for(ll j=2*n/3+i; j<n; j++)
			b[2]+=a[j];
		cout<<b[0]<<" "<<b[1]<<" "<<b[2]<<endl;
		sort(b,b+3);
		if(b[0]>=max)
			max=b[0];
	}
	printf("%lld", max);
	return 0;
}
