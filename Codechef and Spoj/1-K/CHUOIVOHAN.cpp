#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	
	if(c!=0 and (b-a)%c==0 )
	{
		if(c<0 and a>=b)
			cout<<"YES"<<endl;
		else if(c>0 and a<=b)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	else if(c==0)
	{
		if(a==b)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	else
		cout<<"NO"<<endl;
	return 0;
}
