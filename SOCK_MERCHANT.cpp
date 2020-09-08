#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define ios ios_base::sync_with_stdio(false)
#define V 52
#define N 200010

using namespace std;

ll a[104];

int main()
{
	ll n,x;
	cin>>n;
	mem(a);
	while(n--)
	{
		cin>>x;
		a[x]++;
	}
	ll ans=0;
	for(ll i=1; i<=100; i++)
	{
		ans+=a[i]>>1;
	}
	cout<<ans<<endl;
	return 0;
}