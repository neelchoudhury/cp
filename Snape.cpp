#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int t;
	float b,ls;
	cin>>t;
	while(t--)
	{
		cin>>b>>ls;
		float rsmax=sqrt(b*b + ls*ls);
		float rsmin=sqrt(ls*ls-b*b);
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(6);
		cout<<rsmin<<" "<<rsmax<<endl;
	}
	return 0;
}
