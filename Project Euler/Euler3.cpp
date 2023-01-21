#include<iostream>
#include<cmath>
#define ll long long int

using namespace std;

bool isprime(ll n)
{
	if(n==1)
	return false;
	else
	{
		for(ll i=2; i<=sqrt(n);i==2?i++:i+=2)
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
	ll a =600851475143;
	ll cnt=0;
	for(ll i=1;i<=sqrt(a); i++)
	{
		cnt+=1;
		if(a%i==0 ) 
		{
		 	cout<<i<<" :  ";
			if(isprime(i))
			{
				cout<<" Prime  ";
			}	 
			else if(isprime(a/i))
			{
				cout<<a/i<<"a/i:  "<<endl;
			}
			cout<<endl;
			 
		}
	}
}
