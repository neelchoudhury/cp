#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll a,b,c,d,n;
	cin>>n>>a>>b>>c>>d;
	ll p=0,q=0,r=0,s=0;
	ll ans=n;
	ll an=0;
	for(ll i=1; i<=n; i++)
	{
		q=i+a-d;
		r=i+b-c;
		s=a+r-d;
		if(q>=1 and r>=1 and s>=1 and q<=n and r<=n and s<=n)
			an++;
	}
	ans*=an;
	cout<<ans<<endl;
	return 0;
}
