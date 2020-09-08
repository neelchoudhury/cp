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

ll a[200010];

int main()
{
	// ios;
	ll n,m,x,y;
	//cin>>n>>m;
	sc(n);
	sc(m);
	ll cnt1=0,cnt2=0;
	for(ll i=0; i<n; i++)
	{
		sc(x);
		if(x==1)
			cnt1++;
		else
			cnt2++;
	}
	while(m--)
	{
		sc(x),sc(y);
		if((y-x+1)%2!=0)
		{
			pr(0);
		}
		else
		{
			ll k=(y-x+1)/2;
			if(min(cnt1,cnt2)>=k )
				pr(1);
			else
				pr(0);
		}
	}
	return 0;
}