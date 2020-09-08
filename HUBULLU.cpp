#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll t;
	scanf("%lld",&t);
	ll n,x;
	while(t--)
	{
		scanf("%lld %lld", &n, &x);
	if(x==0)
		cout<<"Airborne wins."<<endl;
	else
		cout<<"Pagfloyd wins."<<endl;
	}
	return 0;
}

