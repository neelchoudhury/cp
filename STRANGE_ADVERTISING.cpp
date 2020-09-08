#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 

using namespace std;

int main()
{
	ll n;
	cin>>n;
	ll x=5;
	ll sum=2;
	for(int i=2; i<=n; i++)
	{
		x=3*(x/2);
		sum+=(x/2);
	}
	cout<<sum<<endl;
	return 0;
}