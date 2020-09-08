#include<bits/stdc++.h>
#define ll long long int
#define ld long double

using namespace std;

ld a[100010];
ld p[100010];
ld x[100010];
ld y[100010];

int main()
{
	ll n,k; 
	scanf("%lld %lld", &n, &k);
	memset(a,0,sizeof(a));
	memset(p,0,sizeof(p));
	memset(x,0,sizeof(x));
	memset(y,0,sizeof(y));
	for(ll i=0; i<n; i++)
	{
		scanf("%Lf", &p[i] );
	}
	for(ll i=0; i<n; i++)
	{
		scanf("%Lf", &x[i] );
	}
	for(ll i=0; i<n; i++)
	{
		scanf("%Lf", &y[i] );
	}
	for(ll i=0; i<n; i++)
	{
		a[i]=p[i]*x[i]-(1-p[i])*y[i];
	}
	sort(a,a+n);
	reverse(a,a+n);
	ld ans=0;
	ll i=0;
	while(a[i]>0 and i<k)
	{
		ans+=a[i];
		i++;
		//cout<<i<<endl;
	}
	printf("%.2Lf\n", ans);
	return 0;
}
