#include<iostream>

#define ll long long int

ll tobin(ll x)
{
	if(x==0)
	return 0;
	else if(x==1)
	{
		return 1;
	}
	else
	{
		return x%10 +10*tobin(x);
	}
}

int main()
{
	ll a=2;
	ll b=tobin(a);
	cout<<b;
}
