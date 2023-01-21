#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll t,n,l;
	cin>>t;
	while(t--)
	{
		cin>>n>>l;
		if(l<=n/2)
		{
			printf("%lld\n", n/2+l);
		}
		else
		{
			printf("%lld\n", l-n/2);
		}
	}
	return 0;
}
