#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll a,b,c,d,n;
	cin>>n>>a>>b>>c>>d;
	ll ans=n;
	//ll y=min(c,b);
	//ll x=max(b,c);
	ll mi=a-d;
	mi=(mi<0?(mi)*-1:1);
	
	ll ma=n-(mi);
 //	cout<<"gg   "<<mi<<" fdf v "<<ma<<endl;
		cout<<ans*(ma)<<endl;
	//cout<<ans<<endl;
	return 0;
}
