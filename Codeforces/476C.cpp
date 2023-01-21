#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define ios ios_base::sync_with_stdio(false);

using namespace std;

ll power(ll a,ll b, ll c)
{
	ll y=a,x=1;
	while(b>0)
	{
		if(b%2==1) x=(x*y)%c;
		y=(y*y)%c;
		b=b/2;
	}
	return x%c;
}

ll f(ll a)
{
	return ((a%MOD)*(a+1)%MOD*power(2,MOD-2,MOD)) %MOD;
}

int main()
{
	ios;
	ll a,b,m,n;
	ll ans=0;
	cin>>a>>b;
	m=(f(a)%MOD*f(b-1)%MOD)%MOD;
	n=(a%MOD*(f(b-1))%MOD)%MOD;
	ans=((m%MOD*b)%MOD + n)%MOD; 
	cout<<ans<<endl;
	return 0;
}