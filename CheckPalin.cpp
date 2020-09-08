#include<iostream>
#include<math.h>
#define ll long long int

using namespace std;

int checkpalin(ll n,ll m)
	{
		if(n<10&&m<10)
		{
			return 1;
		}
		else if(n<10&&m==10)
		{
			return 0;
		}
		else
		{
			return (n/m==n%10)&&checkpalin((n%m-n%10)/10,m/100);	
		}

	}
	
int main()
{
	
	ll i=69997;
	int j;
		for(j=0;i/(pow(10,j))>=10; ++j );
		cout<<j<<endl;
	ll s=checkpalin(i,pow(10,j));
	cout<<s<<endl;
	return 0;
}
