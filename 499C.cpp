#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll x1,y1, x2,y2;
	ll n;
	cin>>x1>>y1>>x2>>y2>>n;
	ll a,b,c;
	ll ans=0;
	ll s1=0,s2=0;
	for(ll i=0; i<n; i++)
	{
		cin>>a>>b>>c;
		s1=a*x1+b*y1+c;
		s2=a*x2+b*y2+c;
		/*if(s1*s2<0)
			ans++;*/
		if(s1>0 and s2<0)
			ans++;
		else if(s2>0 and s1<0)
			ans++;
		
		//cout<<ans<<endl;
	}
	cout<<ans<<endl;
	return 0;
}
