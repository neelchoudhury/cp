#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll nck(ll n, ll k)
{
	ll result = 1    ;
	for (ll i=1; i<= min(k,n-k); i++)
	{
   		result *= (n-i+1);
   		result /= i;
	}
	return result;
}

int main()
{
	ll n;
	cin>>n;
	ll ans=0;
	ans=nck(n,7) + nck(n,6) + nck(n,5);
	cout<<ans<<endl;
	return 0;
	
}
