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

int main()
{
	ios;
	ll t,n,l,x;
	cin>>t;
	while(t--)
	{
		cin>>x>>l>>n;
		ll ans=min(max((ll)0,(x-1)+(n-1-(ll)log2(l))),x);
		if(x==0)
		{
			ans=0;
		}
		/*if(x==1)
		{
			ans=max((ll)(0),n-1-(ll)(log2(l)));
		}*/
		if(l==0)
		{
			ans=x ;
		}
		if(n==1)
			ans=n-l;
		if(n==0)
			ans=0;
		cout<<ans<<endl;
	}
	return 0;
}