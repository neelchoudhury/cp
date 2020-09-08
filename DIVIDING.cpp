#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll n;
	scanf("%lld", &n);
	ll s=0,x;
	for(int i=0; i<n; i++)
	{
		scanf("%lld", &x);
		s+=x;
	}
	if(s==(n*(n+1))/2)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
