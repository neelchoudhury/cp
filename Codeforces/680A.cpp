#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[5];

int main()
{
	for(ll i=0; i<5; i++)
		cin>>a[i];
	sort(a,a+5);
	reverse(a,a+5);
	ll x1=0,x2=0,f=0;
	for(ll i=0; i<3; i++)
	{
		if(a[i]==a[i+1] and a[i+1]==a[i+2])
		{
			x1=3*a[i];
			f=1;
			break;
		}
	}
	/*for(ll i=0; i<5; i++)
		cout<<a[i]<<" ";
	cout<<endl;*/
	if(1)
	{
		for(ll i=0; i<4; i++)
		{
			if(a[i]==a[i+1])
			{
				x2=2*a[i];
				f=1;
				break;
			}
		}
	}
	//cout<<x<<endl;
	ll sum=0,ans=0;
	for(ll i=0; i<5; i++)
		sum+=a[i];
	if(f==0)
		ans=sum;
	else
		ans=sum-max(x1,x2);
	cout<<ans<<endl;
	return 0;
}
