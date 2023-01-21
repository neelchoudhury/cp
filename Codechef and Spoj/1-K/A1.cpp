#include<iostream>

using namespace std;

bool subsum(int a[], int n, int sum)
{
	if(sum==0)
	{
		return true;
	}
	else if(n==0 and sum!=0)
	{
		return false;
	}
	else
	{
		return subsum(a,n-1,sum) or subsum(a,n-1,sum-a[n-1]);
	}
}

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
		{
			cin>>a[i];
		}
		bool b=subsum(a,n,m);
		if(b)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	return 0;
}
