#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define MOD 1000000007
#define sc(n) scanf("%lld",&n)
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second
#define pr(n) printf("%lld\n", n)

using namespace std;

ll fact[4010];

ll nck(ll n, ll k)
{
	ll result = 1    ;
	if(n<k)
		return 0;
	for (ll i=1; i<= min(k,n-k); i++)
	{
   		result *= (n-i+1);
   		result /= i;
	}
	return result;
}

int main()
{
	fact[0]=1;
	for(ll i=1; i<=4005; i++)
		fact[i]=fact[i-1]*i;
	ld ans=1.0;
	ll t,n,m;
	sc(t);
	for(ll i=1; i<=t; i++)
	{
		ans=1.0;
		//cout<<"mm "<<ans<<endl;
		cout<<"Case #"<<i<<": ";
		sc(n);
		sc(m);
		// ld q=0,j=1;
		// for(ll i=m; i>=0; i--)
		// {
		// 	//cout<<"aa"<<endl;
		// 	q+=(nck(n-2,i));
		// }
		// for(ll i=1; i<=m; i++)
		// {
		// 	ans=(ans*i);
		// 	ans/=(n+i);
		// 	//cout<<ans<<endl;
		// }
		ans=(n-m)/((n+m)*1.0);

		printf("%.10Lf\n",ans);
	}
	return 0;
}