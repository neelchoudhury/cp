#include<iostream>

using namespace std;

int main()
{
	int q,x,y,z;
	cin>>q;
	while(q--)
	{
		cin>>x>>y>>z;
		int w=0;
		if((x*z)%y==0)
		{
			w=z*x/y - z;
		}
		else
		{
			w=z*x/y - z+1 ;
		}
		if(w>0)
		{
			cout<<w<<endl;
		}
		else
		{
			cout<<0<<endl;
		}
	}
	return 0;
}
