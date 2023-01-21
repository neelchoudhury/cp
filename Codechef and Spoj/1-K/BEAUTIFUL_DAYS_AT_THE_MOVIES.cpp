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

ll rev(ll x)
{
	ll q=0;
	while(x>0)
	{
		q=q*10+x%10;
		x/=10;
	}
	return q;
}

int main()
{
	ios;
	ll i,j,k;
	cin>>i>>j>>k;
	ll ans=0;
	for(ll ii=i;ii<=j; ii++)
	{
		 
		if(abs(ii-rev(ii))%k==0)
			ans++;
	}
	cout<<ans<<endl;
	return 0;
}