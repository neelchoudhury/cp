#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[1000];
ll ind=0;

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

void findprimes(ll m,ll n)
{
	for(int i=m; i<=n; i++)
	{
		if(ifprime(i))
		{
			//cout<<i<<endl;
			a[ind++]=i;
		}
	}
}

int main()
{
	int t;
	//cin>>t;
	ll m,n;
 	findprimes(1,100);
 	ll cnt=0;
 	for(int i=0; i<ind-1; i++)
 	{
 		 for(int j=i+1; j<ind; j++)
 		 {
 		 	if(a[i]+a[j]==100)
 		 		cout<<a[i]<<" "<<a[j]<<endl;
		  }
	 }
	return 0;
}
