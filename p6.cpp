#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define ios ios_base::sync_with_stdio(false);

using namespace std;

multiset<ll> s;
multiset<ll>::iterator ii;

int main()
{
	ll t,n,k,q;
	cin>>t;
	for(ll i=1; i<=t; i++)
	{
		cout<<"Case #"<<i<<": ";
		cin>>n>>k;
		if(k>(n+1)/2)
		{
			cout<<"0 0"<<endl;
			continue;
		}
		s.clear();
		s.insert(n/2);
		s.insert((n-1)/2);
		k--;
		if(k==0)
			cout<<(n)/2<<" "<<(n-1)/2<<endl; 
		ll f=0;
		// ll ww=k;
		while(k--)
		{
			ii=s.end();
			ii--;
			if(k==0)
			{
				cout<<(*ii)/2<<" "<<(*ii-1)/2<<endl;
			}
			q=s.count(*ii);
			s.insert((*ii)/2);
			s.insert((*(ii)-1)/2);
			if(q>k)
			{
				q--;
				while(q--)
				{
					s.insert(*ii/2);
					s.insert((*(ii)-1)/2);
				}
				s.erase(*ii);
			} 
			else
			{
				cout<<*ii<<" "<<(*ii-1)/2<<endl;
				k=0;
				f=1;
			}
		}
		// if(f==0)
		// {
		// 	ii=s.end();
		// 	ii--;
		// 	cout<<*ii<<" "<<*s.begin()<<endl;
		// }
	}
	return 0;
}