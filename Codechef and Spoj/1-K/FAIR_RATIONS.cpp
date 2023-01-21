#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[1010];

int main()
{
	ll n,ans,i1,i2,cnt;
	cin>>n;
	for(ll i=0; i<n ; i++)
		cin>>a[i];
	ll sum=0;
	for(ll i=0;i<n; i++)
		sum+=a[i];
	if(sum%2==1)
		cout<<"NO"<<endl;
	else
	{
		 ans=0,i1=-1,i2=-1;
		cnt=0;
		for(ll i=0; i<n; i++)
		{
			if(a[i]%2==1)
			{
				if(i1==-1)
				{
					i1=i;
					cnt=0;
				}
				else
				{
					i2=i;
					ans+=(cnt*2+2);
					i1=-1,i2=-1;
					cnt=0;
				}
			}
			else
			{
				if(i1!=-1 and i2==-1)
				{
					cnt++;
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
