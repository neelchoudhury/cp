#include<bits/stdc++.h>
#define ll long long int

using namespace std;

 

int main()
{
	ll n,q;
	map<ll,ll> a;
	map<ll,ll>::iterator ii;
	pair<map<ll,ll>::iterator,bool> qq;
	scanf("%lld %lld", &n,&q);
	ll x;
	for(ll i=0; i<n; i++)
	{
		scanf("%lld", &x);  
		qq=a.insert(pair<ll,ll>(x,x));
		//cout<<qq.second<<endl;
		 
	}
	
	while(q--)
	{
		scanf("%lld", &x);
		ii=a.find(x);
		if(ii!=a.end())
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}
