#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	string a;
	ll x,y,t;
	cin>>t;
	ll f=0;
	while(t--)
	{
		cin>>a>>x>>y;
		if(x>=2400 and y>x)
		{
			f=1;
			break;
		}
	}
	if(f==1)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
