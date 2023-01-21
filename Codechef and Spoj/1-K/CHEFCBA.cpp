#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	ll a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a*b==c*d or a*c==b*d or a*d==b*c)
	{
		cout<<"Possible"<<endl;
	}
	else
		cout<<"Impossible"<<endl;
	return 0;
}
