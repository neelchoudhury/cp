#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll m,n,a;
	cin>>n>>m>>a; 
	ll x=n/a;
	ll y=m/a;
	ll ans=x*y;
	//cout<<ans<<endl;
	int flag1=0, flag2=0;
	if(n%a)
		ans+=y,flag1=1;
	//cout<<ans<<endl;
	if(m%a)
		ans+=x,flag2=1 ;
	//cout<<ans<<endl;
	if(flag1 and flag2)
		ans+=1;
	//cout<<ans<<endl;
	cout<<ans<<endl;
	return 0;
}
