#include<iostream>

using namespace std;

bool sub(int a[], int n, int sum)
{
	if(n==0 and sum!=0)
		return false;
	else if(sum==0)
		return true;
	else
		return sub(a,n-1,sum) or sub(a,n-1,sum-a[n-1]);
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
			cin>>a[i];
		if(sub(a,n,m))
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	return 0;
}
