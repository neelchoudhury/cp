#include<iostream>
#define ll long long int

using namespace std;

ll checkpalin(ll n,ll m)
{
	if(n<10 && m<10)
	{
		
		return 1;
	}
	else if(n<10 && m==10)
	{
		return 0;
	}
	else
	{
		return (n/m==n%10)&& checkpalin((n%m-n%10)/10,m/100);	
	}
}

int main()
{
	ll n=69997, m=10000;
	cout<<checkpalin(n,m);
	return 0;
}
