#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll n;
	scanf("%I64d", &n);
	ll m=n;
	ll x;
	int ans=0;
	while(m>0)
	{
		x=m%10;
		if(x==4 or x==7)
		 	ans++;
		m/=10;
	}
	int flag=0;
	//cout<<ans<<endl;
	if(ans==0)
		flag=1;
	else
	{
	while(ans>0)
	{
		x=ans%10;
		if(ans!=4 and ans!=7)
		{
			flag=1;
			break;
		}
		ans/=10;
	}
	}
	if(flag)
		cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl;
	return 0;
}
