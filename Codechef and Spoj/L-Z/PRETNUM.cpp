#include <bits/stdc++.h>
#define ll  long long int
#define ld  double 
#define MOD 1000000007
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second  
#define sc(n) scanf("%lld", &n)
#define pr(n) printf("%lld\n", n)
#define prf(n) printf("%lf\n",n)
#define scf(n) scanf("%lf", &n)
#define ios ios_base::sync_with_stdio(false) 
#define INF INT_MAX 

using namespace std;

bool prime[10010];

void check()
{
	for(ll i = 0; i <= 10000; i++)
		prime[i] = 1;
	prime[0] = prime[1] = 0;
	for(ll i = 2; i <= 10000; i++)
	{
		// cout<<"bing"<<endl;
		if(prime[i])
		{
			for(ll j = 2*i; j<=10000; j += i)
			{
				// cout<<"www"<<endl;
				prime[j] = 0;
			}
		}
	}
}

ll func(ll n)
{
	ll cnt = 0;
	ll sqr = sqrt(n);
	for(ll i = 1; i <= sqr ; i++)
	{
		if(n%i == 0)
		{
			cnt += 2;
		}
	}
	if(sqr*sqr == n)
		cnt --;
	// cout<<"bb "<<n<<endl;
	return prime[cnt];
}

int main()
{
	ll t;
	ll l,r;
	check();
	// cin>>t;
	sc(t);
	while(t--)
	{
		// cin>>l>>r;
		sc(l);sc(r);
		ll ans = 0;
		for(ll i=l; i<=r; i++)
		{
			// cout<<func(i)<<endl;
			ans += func(i);
		}
		// cout<<ans<<endl;
		pr(ans);
	}
}