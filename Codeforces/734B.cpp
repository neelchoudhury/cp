#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define ios ios_base::sync_with_stdio(false);
#define V 52

using namespace std;

int main()
{
	ll k2,k3,k5,k6;
	cin>>k2>>k3>>k5>>k6;
	ll cnt=min(k2,min(k5,k6));
	ll ans=256*cnt;
	k2-=cnt;
	cnt=min(k2,k3);
	ans+=32*cnt;
	cout<<ans<<endl;
	return 0;
}