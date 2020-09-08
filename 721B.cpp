#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define sc(n) scanf("%lld",&n)
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 

using namespace std;
 
ll a[110];

int main()
{
	ll n,k;
	string s;
	ll ans1=0, ans2=0;
	sc(n);
	sc(k);
	mem(a);
	for(ll i=0;i<n;++i)
	{
		cin>>s;
		a[s.length()]++;
	}
	cin>>s;
	n=s.length();
	for(ll i=1;i<=100;++i)
		a[i]=a[i]+a[i-1];
	ll bb=a[n-1];
	ll ee=a[n]-1; 
	ans1=(bb/k)*5+bb+1;
	ans2=(ee/k)*5+ee+1;
	cout<<ans1<<" "<<ans2<<endl;
	return 0;
}