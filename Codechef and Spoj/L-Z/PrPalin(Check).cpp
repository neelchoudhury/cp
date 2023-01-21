#include<iostream>
#include<math.h>
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
ll checkpr(ll n,ll d)
{
	if (n < 2) 
	{
        return 0;
    }

    if (d == 1) 
	{
        return 1;
    } else {
        if (n % d == 0) {
            return 0;
        } else {
            return checkpr(n, d - 1);
        }
    }
}


int main()
{
	 
		ll i,j;
		/*if(n<98689)
	{*/
		 for( ( i=1);i<=1000000; i++)
		{
		//ll j;
		for(j=0;i/pow(10,j)>=10; ++j );
		//cout<<" this is j "<<j<<endl;
		//cout<<"This is check palin "<< checkpalin(i,j)<<endl;
		if(checkpalin(i,pow(10,j) ) )
		{
		//	cout<<"check palin satisfied for i= "<<i<<endl;
			if(checkpr(i, i/2))
			{
				//cout<<"This is check pr for i =  "<<i<<endl;
				if(i==69997)
					i=70207;
			 	cout<<i<<endl;
			 	//break;
			}
		}
		}
	/*}
	else
	{
		i=1003001;
		cout<<i;
	}*/
	 
	
	return 0;
	
}
