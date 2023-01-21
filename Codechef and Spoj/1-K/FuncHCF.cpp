#include<iostream>
#define ll long long int

using namespace std;

inline ll fact(ll x)
{
	ll fact=1;
	for(ll i=1; i<=x;i++)
	{
		fact*=i;
	}
	return fact;
}

inline ll comb(ll x,ll y)
{
	
	//return fact(x)/(fact(y)*fact(x-y));
	ll res=1;
	for(ll i=x; ((y>x-y)?i>y:i>x-y);i--)
	{
		
		res*=i;
	}
	

	return (res/fact(y>x-y?x-y:y));
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
		
		for(int i=2*y;i>=(2)/* && ((2*y)%i==0)*/;--i)
		{
			
			
			if((2*y)%i==0)
			{
			//cout<<"Entering inner loop. i= "<<i<<endl;
			for(int j=1;(y%2==0?j<=y/2:j<=(y+1)/2);j++)
			{
				
				if(comb(2*y,2*j-1)%i==0)
				{
					flag=1;
					//cout<<"Condition true"<<endl;
						
				}
				else
				{
					flag=0;
					break;
				}
				
				 
			}
			if(flag==1)
			{
				cout<<i<<endl;
				break;
			}
		}
		}	
		
	}
}
