#include<iostream>
#include<algorithm>
#define ll long long int

using namespace std;

int main()
{
	int t;
	cin>>t;
	int n,m;
	int flag=0;
	ll sum=0;
	ll res=0;
	while(t--)
	{
		cin>>n>>m;
		int a[n];
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
		}
		
		sort(a,a+n);
		sum=0;
		for(int i=0; i<n-1;++i)
		{
			sum+=(a[n-1]-a[i]);
		}
		
		res=m-sum;
		//cout<<sum<<endl;
		if(m==0)
		{
			if(sum==0)
				cout<<"Yes"<<endl;
			else
				cout<<"No"<<endl;
		}
		else
		{
		 
		
				if(res%(n)==0)
				{
					cout<<"Yes"<<endl;
				}
				else
				{
					cout<<"No"<<endl;
				}
			
		}
	}
}
