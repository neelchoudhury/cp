#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int t;
	int n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n-1];
		for(int i=0;i<n-1; i++)
			cin>>a[i];
		sort(a,a+n-1);
		int i;
	 for( i=0;i<n-1; i++)
		{
			if(a[i]!=i+1)
			{
				cout<<(i+1)<<endl;
				break;
			}
		}
		if(i==n-1)
			cout<<(n)<<endl;
	}
	return 0;
}
