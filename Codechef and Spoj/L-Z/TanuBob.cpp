#include<iostream>
#include<algorithm>
//#define ll long long int

using namespace std;

int main()
{
	int t;
	cin>>t;
	int n;
	while(t--)
	{
		cin>>n;
		int f[n];
		char a[n]; 
		for(int i=0; i<n;++i)
		{
			cin>>a[i];
			if(a[i]=='I')
				f[i]=1;
			else if(a[i]=='N')
				f[i]=2;
			else
				f[i]=3;
			
		}
		sort(f,f+n);
		if(f[0]==1)
		{
			cout<<"INDIAN"<<endl;
		}
		else if(f[0]==2&&f[n-1]==2)
		{
			cout<<"NOT SURE"<<endl;
		}
		else if(f[n-1]==3)
		{
			cout<<"NOT INDIAN"<<endl;
		}
		
		
		
	}
}
