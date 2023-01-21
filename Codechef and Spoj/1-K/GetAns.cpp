#include<iostream>
#include<math.h>
#define ll signed long long int
#define MOD 1000000007LL

using namespace std;

//long double MOD=1000000007.0;

/*ll getans(ll n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		if((ll)(pow(2,n-2)+2*getans(n-1))>=MOD)
		 return ((ll)(pow(2,n-2)+2*getans(n-1))% MOD); 
		else
			return (ll)(pow(2,n-2)+2*getans(n-1));
	}
}*/
ll getans2(ll n)
{
	ll tn=0;
	ll tn1=1;
	/*for(ll i=2; i<=n; i++)
	{
		
		tn=2*tn1+pow(2,i-2);
		//cout<<i<<" and "<<tn<<" and tn1 "<<tn1<<endl;
		
		if(tn>=MOD)
		{
			tn=(ll)((ll)tn%(ll)MOD);
		}
		tn1=tn;
		
		
		
			
	}
	return tn;*/
	if(n>1)
	{
	
	if(n<64)
	{
	
		if((n+1)*(ll)pow(2,n-2)>=MOD)
			return (n+1)*(ll)pow(2,n-2)%MOD;
		else
		
			return (n+1)*(ll)pow(2,n-2);
	}
	else if(n>64)
	{
	
		ll i=1;
		tn1=n+1;
		for(;i<=n;i++)
		{
			
			if(n>64*(i))
			{
				tn1*=((ll)pow(2,64)%MOD);
				//tn1*=(pow(2,))
				
			}
			
		}
		tn1*=(ll)pow(2,(n-2-64*i))%MOD;
		return tn1;
	}
	}
	else
		return 1;
}

int main()
{
	int t;
	ll n;
	int i=1;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<"Case "<<i<<": "<<getans2(n)<<endl;
		i++;
	}
}
