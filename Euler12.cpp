#include<iostream>
#include<cmath>
#define ll long long int

using namespace std;

ll numdiv_old(ll a)
{
	ll sum=1;
	for(ll i=a/2;i>=1;i--)
	{
		if(a%i==0 )
		{
			sum+=1;
		}
	}
	return sum;
	
}

ll numdiv(ll a)
{
	ll sum=2;
	ll x=sqrt(a);
	for(ll i=1;i<=x;i++)
	{
		if(a%i==0 )
		{
			sum+=2;
		}
	}
	return sum;
	
}

int main()
{
	for(ll i=1;i<=150000; i++)
	{
		//cout<<i*(i+1)/2<<" "<<numdiv(i*(i+1)/2)<<" "<<i<<"\t";
		if(numdiv(i*(i+1)/2)>=500)
		{
			cout<<"500 divisors reached!!!  num:"<<i*(i+1)/2<<" "<<i<<endl;
		}
	}
	return 0;
}
