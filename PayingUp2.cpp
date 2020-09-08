#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int t;
	int n,m;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		int a[n];
		for(int i=0; i<n; i++)
			cin>>a[i];
		int sum=0;
		int flag=0;
		
		for(int i=1;i<pow(2,n); i++)
		{
			//cout<<i<<endl;
			sum=0;
			for(int j=0; j<n; j++)
			{
				//cout<<" "<<j<<endl;
				if(i & 1<<j)
				
				sum+=a[j];
			}
		
			if(sum==m)
			{
			 
				flag=1;
				break;
			}
		}
		if(flag)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	return 0;
}
