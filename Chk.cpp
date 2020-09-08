#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define ios ios_base::sync_with_stdio(false)


using namespace std;

ll v[]={2,3,5,7,11};

ll f(ll x)
{
	for(ll i=0;i<5;i++)
	{
		while(x%a[i]==0)
			x/=a[i];
		if(x<a[i])return a[i];
	}
	return -1;

}

int main()
{
	ios;
	ll t,a,k,n;
	cin>>t;
	while(t--)
	{
		cin>>a>>k>>n;
		ll ans =0;
		if(f(a)==k)
		{

			n-=1;
		}
		ll z=n/k
		for(ll i=1; i<=z; i++)
		{
			 
		}
	}
}