#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll pr[1010];

int main()
{
	for(ll i=0; i<=1000; i++)
	{
		pr[i]=1;
	}
	pr[0]=pr[1]=0;
	for(ll i=2; i<=sqrt(1000); i++)
	{
		if(pr[i])
		{
			for(ll j=2*i; j<=(1000); j+=i)
			{
				pr[j]=0;
			}
		}
	}
/*	for(ll i=0;i<=20; i++)
	{
		cout<<i<<" "<<pr[i]<<endl;
	}*/
	ll n;
	cin>>n;
	ll ans=0;
	vector<ll> v;
	for(ll i=2; i<=n; i++)
	{
		if(pr[i])
		{
			ll j=i;
			while(j<=n)
			{
			//	cout<<j<<" ";
				v.push_back(j);
				j*=i;
			}
		}
	}
	cout<<v.size()<<endl;
	for(ll i=0; i<v.size(); i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
}
