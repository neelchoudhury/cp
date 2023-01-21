#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a;

int main()
{
	ll n,b,d;
	ios_base::sync_with_stdio(false);
	cin>>n>>b>>d;
//	memset(a,0,sizeof(a));
	ll sum=0,ans=0;
	for(ll i=0; i<n; i++)
	{
		cin>>a;
		if(a<=b)
		{
			sum+=a;
		}
		if(sum>d)
			ans+=1,sum=0;
	}
	
	/*if(sum%d==0)
	{
		ans=max((ll)0,sum/d-1);
	}
	else
	{
		ans=sum/d;
	}*/
	cout<<ans<<endl;
	return 0;
}
