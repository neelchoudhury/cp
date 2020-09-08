#include<bits/stdc++.h>
#define ll long long int

using namespace std;

map<ll,ll> m;

int main()
{
	ll t,l,k,x;
	ll ans=0;
	scanf("%lld", &t);
	while(t--)
	{
		m.clear();
		scanf("%lld %lld", &l,&k);
		for(ll i=1; i<=l;i++)
		{
			m.insert(pair<ll,ll>(i,i));
			cout<<m[m.size()-1]<<endl;
		}
		for(int i=0; i<5; i++)
			    cout<<m[i]<<" ";
			cout<<endl;
		while(k--)
		{
			x=m[m.size()-1];
			m.erase(m[m.size()-1]);
			x=sqrt(x);
			m.insert(pair<ll,ll>(x,x));
			for(int i=0; i<5; i++)
			    cout<<m[i]<<" ";
			cout<<endl;
		}
		ans=0;
		for(ll i=0; i<m.size(); i++)
		{
			ans+=m[i];
		}
		printf("%lld\n", ans);
		
	}
	return 0;
}
