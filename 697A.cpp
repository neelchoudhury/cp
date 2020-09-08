#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll t,s,x;
	cin>>t>>s>>x;
	if(x<t)
	{
		cout<<"NO"<<endl;
		return 0;
	}
	int qq=(x-t)%s;
	
	if(x==t)
		cout<<"YES"<<endl;
	else if(x/t>1 and (qq==0 or qq==1) )
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
