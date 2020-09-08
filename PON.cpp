#include<bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
	vector<ll> a;
	a.pb(2);
	for(ll i=3; i<=1000000000; i++)
	{
		int f=0;
		for(ll j=0; j<a.size();j++)
		{
			if(i%a[j]==0)
			{
				f=1;
				//break;
			}
			if(f==1)
				break;
		}
		if(f==0)
			a.pb(i);
	}
	ll t,x;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld", &x);
		int f=0;
		for(ll i=0; i<a.size(); i++)
		{
			if(x%a[i]==0)
			{
				f=1;
				//break;
			}
			if(f==1)
			{
				break;
			}
		}
		if(f==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
		
	}
	return 0;
}
