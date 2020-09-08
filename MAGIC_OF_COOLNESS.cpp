#include <bits/stdc++.h>
#define ll long long int
#define ld  double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second  
#define sc(n) scanf("%I64d", &n)
#define prf(n) printf("%lf\n",n)
#define scf(n) scanf("%lf", &n)
#define ios ios_base::sync_with_stdio(false)
#define V 52
#define N 200010
#define MAX 400010

using namespace std;

ll gcd(ll a,ll b)
{
	ll r=a%b;
	while(r!=0)
	{
		a=b;
		b=r;
		r=a%b;
	}
	return b;
}

int main()
{
	ll t;
	ll x1,x2,y1,y2;
	cin>>t;
	while(t--)
	{
		cin>>x1>>y1>>x2>>y2;
		ll mi=min(abs(x1-x2),abs(y1-y2)),ma=max(abs(x1-x2),abs(y1-y2)) ;
		ll ans=0;
		// cout<<ma<<" "<<mi<<endl;
		if(gcd(ma,mi)==1)
			ans=0;
		else
		{
			if(ma==mi)
				ans=ma-1 ;
			else
			ans=ma/gcd(ma,mi)-2;
		}
		cout<<max(0LL,ans)<<endl;
	}
}