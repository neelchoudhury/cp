#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n; i++)
		cin>>a[i];
	int flag=0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(j%2==0)
				a[j]=(a[j]+1)%n;
			else
				a[j]=(a[j]-1+n)%n;
		}
		int flag2=0;
		for(int j=0; j<n; j++)
		{
			if(a[j]!=j)
			{
				flag2=1;
				break;
			}
		}
		if(flag2==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	return 0;
}
