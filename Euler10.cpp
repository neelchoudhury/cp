#include<iostream>
#include<cmath>
# define ll long long int

using namespace std;

bool ifprime(ll n)
{
	
	if(n==1)
	return false;
	else
	{
		for(int i=2; i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
				return false;
				break;
			}
		}
		return true;
	}
	
}

int main()
{
	ll sum=0;
	for(ll i=2; i<2000000; i++ )
	{
		if(ifprime(i))
		{
			sum+=i;
			cout<<sum<<" "<<i<<endl;
		}
	}
	return 0;
}
