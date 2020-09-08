#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	int t;
	int n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		char a[n][101];
		for(int i=0;i<n; i++)
			cin>>a[i];
		char b[101];
		cin>>b;
		for(int i=0; i<n; i++)
		{
		//	cout<<"i "<<i<<endl;
			if(strcmp(b,a[i])>=0)
			{
				/*cout<<"wewr"<<endl;
				cout<<" "<<b<<" "<<i<<endl;
				cout<<" "<<a[i]<<" "<<i<<endl;*/
				if(strcmp(b,a[i])==0)
				{
					//cout<<"enter"<<endl;
					cout<<"yes"<<endl;
					break;
				}
			}
				else if(strcmp(b,a[i])<0)
				{
					
					cout<<"no"<<endl;
					break;
				}
		 
		}
	}
	return 0;
}
