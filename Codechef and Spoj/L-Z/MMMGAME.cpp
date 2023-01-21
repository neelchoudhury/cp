#include<bits/stdc++.h>
#define ll long long int
 
using namespace std;
 
ll a[50];
 
int main()
{
	ll t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll s=0,cnt=0;
		for(ll i=0; i<n;i++)
		{
			cin>>a[i];
			s^=a[i];
			if(a[i]==1)
				cnt++;
		}
		if(cnt==n)
		{
			if(n%2==1)
				cout<<"Brother"<<endl;
			else
				cout<<"John"<<endl;
		}
		else
		{
			if(s==0)
			{
				cout<<"Brother"<<endl;
			}
			else
				cout<<"John"<<endl;
		}
	}
} 
