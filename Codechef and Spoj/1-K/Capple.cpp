#include<iostream>
#include<algorithm>
#define ll long long int

using namespace std;

int main()
{
	int t;
	cin>>t;
	ll n;
	while(t--)
	{
		cin>>n;
		ll cnt=0;
		ll d=0;
		ll m=0;
		ll a[n];
		for(int i=0; i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		d=a[0];
		for(int i=1; i<n;i++)
		{
			if(a[i]==d)
				continue;
			else
				d=a[i];
				m+=1;	
		}
		if(a[0]==a[n-1])
		{
			 
				cnt=1;
			 
			
		}
		else
		{
			cnt=m+1;	 
			
		}
		cout<<cnt<<endl;
		
	}
	return 0;	
}
