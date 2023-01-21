#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define pr(n) printf("%lld\n",n)
#define sc(n) scanf("%lld", &n)
#define ios ios_base::sync_with_stdio(false)
#define V 52
#define N 200010

using namespace std;

map<ll,ll> m;

int main()
{
	ll n,x;
	sc(n);
	for(ll i=0;i<n; i++)
	{
		sc(x);
		if(m[x]==0)
		{
			m.insert({x,1});
		}
		else
		{
			m[x]++;
		}
	}
	if(m.size()>3)
	{
		cout<<"NO"<<endl;
		return 0;
	}
	if(m.size()<3)
	{
		cout<<"YES"<<endl;
		return 0;
	}
	map<ll,ll>::iterator i1,i2,i3;
	i1=m.begin();
	i2=i1;
	i2++;
	i3=i2;
	i3++;
	if(i2->ff-i1->ff!=i3->ff-i2->ff)
	{
		cout<<"NO"<<endl;
		return 0;
	}
	else
	{
		cout<<"YES"<<endl;
		return 0;
	}
}