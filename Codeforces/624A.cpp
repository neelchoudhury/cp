#include<bits/stdc++.h>
#define ll long double

using namespace std;

int main()
{
	ll d,v1,v2,l;
	cin>>d>>l>>v1>>v2;
	long double ans=0.0;
	ans=(l-d)/(v1+v2);
	cout<<setprecision(10);
	cout<<ans<<endl;
}
