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
	int n=5,k=1;
	cout<<nck(n,k)<<endl;
	return 0;
}
