#include<bits/stdc++.h>
#define ll long long int
#define ios ios_base::sync_with_stdio(false)
#define mem(a) memset(a,0,sizeof(a))
#define inf 9999999999999999
#define smoke first
#define colour second
#define sc(a) scanf("%lld",&a)
#define pr(a) printf("%lld\n", a)
 
using namespace std;

ll a[300010];

int main()
{
	ll n,m;
	mem(a);
	sc(n);sc(m);
	for(ll i=0; i<n; i++)
		sc(a[i]);
	ll ans=0,ctr=0,sum=0;
	int i,j=0;
	for(i=0;i<n; i++)
	{
		sum=sum+a[i];
		while(sum>m)
		{
			sum-=a[j];
			j++;
		}
		if(sum<=m)
			ans=max(ans,sum);
	}
	if(sum<=m)
		ans=max(ans,sum);
	pr(ans);
	return 0;
}
