#include<iostream>

using namespace std;

int main()
{
	int n;
	int a1,a2;
	int r1=0,r2=0;

	cin>>n;
	while(n--)
	{
		cin>>a1>>a2;
		int d;
		int as=0,rs=0;
		r1=0,r2=0;
		while(a1>0)
		{
			d=a1%10;
			a1=a1/10;
			r1=(r1*10+d);
		}
		
		while(a2>0)
		{
			d=a2%10;
			a2=a2/10;
			r2=(r2*10+d);
		}
		//cout<<r1<<" "<<r2<<endl;
		as=r1+r2;
	//cout<<as<<endl;
		while(as>0)
		{
			d=as%10;
			as/=10;
			rs=(rs*10+d);
		}
		cout<<rs<<endl;
	}
}
