#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll n;
	ll ans=0;
	cin>>n;
	ll cnt=1;
	for(int i=1; i<=n+1; i++)
	{
		ans=ans+ (cnt);
		cnt=cnt<<1;
	}
	ans-=1;
 	printf("%I64d\n", ans);
	return 0;
}
