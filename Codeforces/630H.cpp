#include<bits/stdc++.h>
#define ll unsigned long long int

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
	ll ans=1;
	ans=nck(n,5);
	ans=ans;
	//cout<<ans<<endl;
	for(int i=0; i<=4 and n>0; i++,n--)
	{
		ans*=n;
		//cout<<ans<<endl;
	}
	cout<<ans<<endl;
	return 0;
}
