#include<iostream>
#include<cmath>
#define G 9.806

using namespace std;

int main()
{
	int t;
	cin>>t;
	float r,u,x,th;
	int i=1;
	while(i<=t)
	{
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(2);
		cin>>r>>u;
		x=(r*G)/(u*u);
		if(x>1)
		{
			cout<<"Scenario #"<<i++<<": "<<(-1)<<endl;
		}
		else if(x<=1)
		{
			th=((.5)*asin(x))*180/M_PI;
			cout<<"Scenario #"<<i++<<": "<<th<<endl;
		}
		
	}
	return 0;
}
