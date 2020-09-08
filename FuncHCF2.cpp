#include<iostream>
#define ll long long int
 
using namespace std;
 
ll thspow(ll x) 
{
	int ret=1;
	for(int i=0; ;++i)
	{
		
		if(x%2==0)
		{
			x/=2;
			ret*=2;		
		}
		else
		{
			return ret;	
		}
	}
}
 
int main()
{
	int t;
	ll y;
	int flag=0;
	cin>>t;
	//cout<<comb(t,2);
	while(t--)
	{
		cin>>y;
		
		if(y%2==0)
		{
			cout<<2*thspow(y)<<endl;
		}
		else if(y%2)
		{
			cout<<2<<endl;
		}
	}	
} 
