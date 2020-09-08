#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[100010];
bool t[100010];

int main()
{
	ios_base::sync_with_stdio()
	ll n,k,temp;
	cin>>n>>k;
	ll sum=0;
	ll s1=0;
	ll ans=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		s1+=a[i];
	}
	memset(t,0,sizeof(t));
	for(int i=0;i<k;i++)
	{
		cin>>temp;
		sum+=a[temp];
		t[temp]=true;
	}
	//cout<<sum<<endl;
	for(int i=1;i<=n;i++)
	{
		if(t[i]==true)
		{
			ans+=(a[i]*(s1-a[i]));
		}
		else
		{
			if(i==1)
			{
				if(t[2]!=true)
				{
					ans+=(a[1]*a[2]);
				}
				if(t[n]!=true)
				{
					ans+=(a[1]*a[n]);
				}
			}
			else if(i==n)
			{
				if(t[n-1]!=true)
				{
					ans+=(a[n]*a[n-1]);
				}
				if(t[1]!=true)
				{
					ans+=(a[1]*a[n]);
				}
			}
			else
			{
				if(t[i+1]!=true)
				{
					ans+=(a[i]*a[i+1]);
				}
				if(t[i-1]!=true)
				{
					ans+=(a[i]*a[i-1]);
				}
			}
			if(t[i]==false)
			{
				ans+=(sum*a[i]);
			}
		}
		//cout<<i<<" "<<ans<<endl;
		
	}
	cout<<ans/2<<endl;



	return 0;
}