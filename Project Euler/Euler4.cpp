#include<iostream>
#include<cmath>
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
	ll cnt=0;
	for(int i=999; i>=900; i--)
	{
		for(int j=999; j>=900; j--)
		{
		 	cnt+=1;
				if(checkpalin(i*j,100000))
				{
					cout<<i*j<<" "<<i<<" "<<j<<" ";
					//break;
					cout<<cnt<<endl;
				}
				/*else
				{
					cout<<"Not palin ";
					cout<<cnt<<endl;
				}*/
		 
		}
		
	}
	cout<<"Not found any"<<endl;
	return 0;
}
