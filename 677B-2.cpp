#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll n,h,k,x;
	cin>>n>>h>>k;
	ll ans=0,sum=0;
	while(n--)
	{
		cin>>x;
		if(sum+x<=h)
		{
			sum+=x;
		}
		else
		{
			ans++;
			sum=x;
		}
		ans+=sum/k;
		sum%=k;
	}
	ans+=sum/k;
	sum%=k;
	ans+=(sum>0);
	cout<<ans<<endl;
	return 0;
}
