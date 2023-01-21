#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll a[7];
	for(int i=0; i<6; i++)
		cin>>a[i];
	ll mini=1010;
	/*for(int i=0; i<6; i++)
	{
		mini=min(a[i],mini);
	}
	for(int i=0; i<6; i++)
		a[i]/=mini;*/
	ll sum=(a[0]+a[1]+a[2]);
	ll ans=0;
	for(int i=1; i<=sum; i++)
	{
		ans+=(2*i-1);
	}
	//cout<<ans<<endl;
	for(int i=0; i<6; i+=2)
	{
		for(int j=1; j<=a[i]; j++)
		{
			ans-=(2*j-1);
		}
	}
	cout<<ans<<endl;
	return 0;
}
