#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++)
			cin>>a[i];
		int l=a[0];
		int in=0;
		for(int i=1; i<n;i++)
		{
			if(a[i]>l)
				{
					l=a[i];
					in=i;
				}
		}
		cout<<in+1<<endl;
	}
	return 0;
}
