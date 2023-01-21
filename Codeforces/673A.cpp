#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll n,x;
	cin>>n;
	ll ans=0,f=0;
	while(n--)
	{
		cin>>x;
		if(x-ans>15)
		{
			ans+=15;
			f=1;
			break;
		}
		else
		{
			ans=x;
		}
	}
	if(f==0)
	{
		ans=(ans+15>90?90:ans+15);
	}
	cout<<ans<<endl;
}
