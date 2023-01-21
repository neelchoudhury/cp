#include<iostream>
#define ll long long int

using namespace std;

int main()
{
	//char c;
	//int x;
	//cin>>c;
	//x=c;
	/*cout<<(int)c;
	cout<<c;*/
	int n;
	cin>>n;
	ll ff=1, fg=1,fd=1;
	//cout<<ff<<endl<<fg<<endl;
	for(int i=3; i<=200; i++)
	{
		 fg=ff+fd;
		 //cout<<fg<<endl;
		 fd=ff;
		 ff=fg;
		
		 
	}
	cout<<fg;
	return 0;
	
}
