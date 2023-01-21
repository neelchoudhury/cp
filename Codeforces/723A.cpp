#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007

using namespace std;

int main()
{
	ll x1,x2,x3;
	cin>>x1>>x2>>x3;
	ll ma=max(x1,max(x2,x3));
	ll mi=min(x1,min(x2,x3));
	cout<<ma-mi<<endl;
	return 0;
}