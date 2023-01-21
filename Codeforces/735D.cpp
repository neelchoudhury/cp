#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define pr(n) printf("%lld\n",n)
#define sc(n) scanf("%lld", &n)
#define ios ios_base::sync_with_stdio(false)
#define V 52
#define N 200010

using namespace std;

ll f(ll n)
{
	ll ans=0;
	ll k=sqrt(n);
	for(ll i=2; i<=k;i++)
	{
		while(n%i==0)
		{
			// cout<<n<<" "<<ans<<endl;
			ans++;
			n/=i;
		}
	}
	// cout<<n<<endl;
	if(n>2)
		ans++;
	return ans;
}

ll f2(ll n)
{
	for(ll i=2; i<=sqrt(n); i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}

int main()
{
	ll n;
	sc(n);
	ll ans;
	if(f2(n))
	{
		cout<<1<<endl;
		return 0;
	}
	else
	{
		if(n%2==0)
		{
			 cout<<2<<endl;
		}
		else
		{
			if(f2(n-2))
				cout<<2<<endl;
			else
				cout<<3<<endl;
		}
	}
	//pr(ans);
}