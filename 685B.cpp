#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[104];

int main()
{
	ll n;
	cin>>n;
	for(ll i=0; i<n;i++)
		cin>>a[i];
	ll temp=0;
	ll f=1;
	while(f==1)
	{
		f=0;
		for(ll i=0; i<n-1; i++)
		{
			if(a[i]>a[i+1])
			{
				f=1;
				break;
			}
		}
		//cout<<" bb "<<f<<endl;
		for(ll i=0; i<n-1; i++)
		{
			if(a[i]>a[i+1])
			{	
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
				cout<<i+1<<" "<<i+2<<endl;
			}
		}
	}
	
	return 0;
}
