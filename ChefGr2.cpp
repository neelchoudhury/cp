#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int t;
	cin>>t;
	int n,m;
	int flag=0;
	long int sum=0;
	while(t--)
	{
		cin>>n>>m;
		int a[n];
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
		}
		
		sort(a,a+n);
		
		for(int i=0; i<n-1;++i)
		{
			sum+=(a[n-1]-a[i]);
		}
		if(sum==m)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
	 
	}
}
