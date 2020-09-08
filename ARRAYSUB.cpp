#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,k;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	cin>>k;
	int  max=0;
	for(int i=0; i<n-k+1;i++)
	{
		max=0;
		for(int j=i;j<i+k;j++)
		{
			if(a[j]>max)
				max=a[j];	
		}
		cout<<max<<" ";
		 
	}
	cout<<endl;
	return 0;
}
