#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll nck(ll n, ll k)
{
	if(n<k)
		return 0;
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
	ll a1=0,a2=0;
	a1=(nck(n,1) + 4*nck(n,2) + 6*nck(n,3) + 4*nck(n,4) + nck(n,5));
	a2=(nck(n,1) + 2*nck(n,2) + nck(n,3));
	ll ans=a1*a2;
	cout<<ans<<endl;
	return 0;
}
