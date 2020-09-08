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

ll a[100010][3];
ll b[100010][2];

//INCOMPLETE

ll f(ll x, ll y,l ll z)
{
	if(x<=y/2 and x<=z/2)
		return x;
	return 0;
}

int main()
{
	ios;
	ll n,x,y,z;
	cin>>n;
	ll q1=0,q2=0;
	mem(a),mem(b);
	for(ll i=0; i<n; i++)
	{
		cin>>x>>y>>z;
		ll p=0;
		if(f(x,y,z))
			p=max(p,x);
		if(f(y,z,x))
			p=max(p,y);
		if(f(z,x,y))
			p=max(p,y);
		b[i][0]=p;
		b[i][1]=min(x/2,min(z/2,y/2));
	}
}