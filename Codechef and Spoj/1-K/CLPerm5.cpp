#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,sum;
		cin>>n>>k;
		int a[(n)];
		for(int i=0;i<n;++i)
		a[i]=i+1;
		for(int i=0;i<k;++i)
		{
			int t;
			cin>>t;
			a[t-1]=0;
		}
		int max=0;
		for(int i=0;i<n;++i)
		max+=a[i];
	//	cout<<"max"<<max<<endl;
		if(a[0]==0)
		{
			cout<<"Chef";
			cout<<endl;
		}
		else if(a[1]==0)
		{
			cout<<"Mom";
			cout<<endl;
		}
		else
		{
			sum=3;
			int pre=2;
			while(sum<n)
			{
				int t=sum;
				while(t>=pre)
				{
					if((t+1)==a[t])
					{
						pre=a[t];
						sum+=a[t];
						break;
					}
					else
					t--;
				}
				if((t+1)==pre)
				break;
			}
			//cout<<"sum"<<sum<<endl;
			if(sum>=n)
			{
				if(max%2==0)
				{
				cout<<"Chef";
				cout<<endl;
				}
				else
				{
				cout<<"Mom";
				cout<<endl;
				}
			}
			else
			{
				if(sum%2==0)
				{
				cout<<"Chef";
				cout<<endl;
				}
				else
				{
				cout<<"Mom";
				cout<<endl;
				}
			}
		}
		
	
	}
	return 0;
}
