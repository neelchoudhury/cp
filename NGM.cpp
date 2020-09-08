#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll n;
	scanf("%lld", &n);
	if(n%10)
	{
		cout<<1<<endl;
		cout<<n%10<<endl;
	}
	else
	{
		cout<<2<<endl;
	}
	return 0;
}
