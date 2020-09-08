#include<bits/stdc++.h>
#define ld long double

using namespace std;

int main()
{
	ld a,b,c;
	cin>>a>>b>>c;
	ld x1=(-b + (ld)sqrt(b*b -4*a*c))/(2*a);
	ld x2=(-b - (ld)sqrt(b*b -4*a*c))/(2*a);
	cout<<setprecision(20);
	if(x1>x2)
	{
	
	cout<<x1<<endl;
	 
	cout<<x2<<endl;
	}
	else
		cout<<x2<<endl<<x1<<endl;
	return 0;
}
