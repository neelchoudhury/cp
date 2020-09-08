#include<iostream>
#define ll long long int

using namespace std;

ll getCollatz(ll i,ll sum)
{
	if(i==1)
		return sum+1;
	else
	{
		if(i%2==0)
		{
			return getCollatz(i/2,sum+1);
		}
		else
		{
			return getCollatz(3*i+1,sum+1);
		}
	}
	
}
int main()
{
	ll l=0,m=0,j=0;
	for(ll i=666666; i<=1000000;i++)
	{
		m=getCollatz(i,0);
		if(m>l)
		{
			l=m;
			j=i;
		}
		cout<<i<<" "<<m<<" "<<l<<" "<<j<<endl;
	}
	return 0;
}
