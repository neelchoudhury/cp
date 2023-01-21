#include<bits/stdc++.h>
#define ll long double
#define PI 3.141592653589793

using namespace std;

//Taking circumference
//Have to take area

int main()
{
	ll d,h,v,e;
	cin>>d>>h>>v>>e;
	if(4*v/(PI*d*d)<=e)
	{
		cout<<"NO"<<endl;
	}
	else 
	{
		ll ans=(h)/(4*v/(PI*d*d)-e);
		if(ans>10000)
			cout<<"NO"<<endl;
		else
		{
			cout<<"YES"<<endl;
			cout<<setprecision(12)<<ans<<endl;
		}
	}
	return 0;
}
