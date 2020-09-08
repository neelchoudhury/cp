#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	int ta;
	ll n,k,b,t;
	cin>>ta;
	for(ll i=1; i<=ta; i++)
	{
		scanf("%lld %lld %lld %lld", &n,&k,&b,&t);
		ll x[n];
		for(ll i=0; i<n; i++)
			cin>>x[i];
		ll v[n];
		for(ll i=0;i<n; i++)
			cin>>v[i];
		long double tm[n];
		for(ll j=0; j<n; j++)
		{
			if((b-x[j])/(long double)v[j]<=t)
				tm[j]=(b-x[j])/(long double)v[j];
			else
				tm[j]=0;
		}
	/*	for(int j=0; j<n; j++)
		{
			cout<<tm[j]<<" ";
		}
		cout<<endl;*/
		ll f=0;
		ll c=0;
		for(ll j=0; j<n; j++)
		{
			if(tm[j]!=0)
			{
				f=1;
				c++;
			}
		}
		if(c>=k)
		{
			ll cnt=0;
			ll z=k;
			for(ll j=n-1; j>=0 and z; j--)
			{
				if(tm[j]!=0)
				{
				
					for(int k=j+1; k<n ; k++)
					{
						 
							if(tm[k]==0)
								cnt++;
					
					}
					z--;
				}
			}
			cout<<"Case #"<<(i)<<": "<<cnt<<endl;
		}
		else
		{
			cout<<"Case #"<<(i)<<": IMPOSSIBLE"<<endl;
		}
	}
	return 0;
	
}
