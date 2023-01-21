#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define ios ios_base::sync_with_stdio(false);
#define V 52

using namespace std;

ll t,a,b,c,k;

ll inc(ll x)
{
	return  x/a+x/b+x/c-x/(a*b)-x/(b*c)-x/(c*a)+x/(a*b*c);

}

ll f(ll lo, ll hi, ll k)
{
	while(lo<=hi)
	{
		ll mid=( hi+lo)/2;
		// cout<<lo<<" "<<hi<<" "<<mid<<endl;
		if(inc(mid)==k)
		{
			return mid;
		}
		else
		{
			if(k>inc(mid))
			{
				lo=mid+1;
			}
			else
			{
				hi=mid-1;
			}
		}
	}
}

int main()
{
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c>>k;
		ll mi=min(a,min(b,c));
		ll ans=f(mi,mi*k,k);
		cout<<ans<<endl;
	}
	return 0;
}