#include<bits/stdc++.h>
#define ll long long int
#define ld long double

using namespace std;

int main()
{
	ll n,w;
	ll a[200010];
	cin>>n>>w;
	memset(a,0,sizeof(a));
	for(ll i=0; i<2*n;i++)
		cin>>a[i];
	sort(a,a+2*n);
	ll y=a[0];
	ll x=a[n];
	int flag=1;
	//cout<<x<<" "<<y<<endl;
	if(x>=(2*y))
		flag=1;
	else
		flag=0;
	ld z=w/3.0000000;
	ld ans=0.0000000;
	if(flag==0)
	{
		//cout<<"1"<<endl;
		if(abs(z-x/2.000000)<=(0.000001))
			ans=w;
		else if((z-x/2.000000)>(0.000001))
			ans=(1.5000000)*n*x;
		else if((x/2.000000-z)>(0.000001))
			ans=w;
			
	}
	if(flag==1)
	{
		//cout<<"@:"<<endl;
		if(abs(z-y)<=(0.000001))
			ans=w;
		else if((z-y)>(.000001))
			ans=(3.000000)*n*y;
		else if((y-z)>(0.000001))
			ans=w;
	}
	cout<<ans<<endl;
	return 0;
}
