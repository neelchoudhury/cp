#include<iostream>
#include<algorithm>
#include<cstdio>
#define ll long long int

using namespace std;

int main()
{
	ll t;
	scanf("%lld", &t);
	ll n,m;
	ll sum=0;
	ll res=0;
	while(t--)
	{
		cin>>n;
		ll a[n];
		ll s=0;
		for(ll i=0; i<n; i++)
		{
			cin>>a[i];
			s+=a[i];
		}
		if(s%n!=0)
		{
			cout<<"NO"<<endl;
			continue;
		}
		m=s/n;
		
		sort(a,a+n);
		sum=0;
		for(ll i=0; i<n-1;++i)
		{
			sum+=(a[n-1]-a[i]);
		}
		
		res=m-a[0];
		//cout<<sum<<endl;
		if(m==0)
		{
			if(sum==0)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
		else
		{
		 
		
				if(sum%res==0 and sum/res==n )
				{
					cout<<"YES"<<endl;
				}
				else
				{
					cout<<"NO"<<endl;
				}
			
		}
	}
	return 0;
}
