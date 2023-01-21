#include<bits/stdc++.h>

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
		sort(a,a+n);
		if(a[0]!=1)
		{
			cout<<1<<endl;
			continue;
		}
		int b=1;
		int sum=0;
		for(int i=0; i<n; i++)
		{
			if(a[i]==b)
			{
				b*=2;
			}
			else if(a[i]>b)
			{
				for(int j=0;a[j]<=b/2;j++)
				{
					sum+=a[j];
				}
				sum+=a[i-1];
				break;
			}
			if(i==n-1 and a[i]!=b)
			{
				if(a[i]!=b/2)
					sum+=a[i];
				//cout<<"b "<<b<<endl;
				for(int j=0; a[j]<=b/2;j++)
				{
					sum+=a[j];
				}
			}
		}
		cout<<sum+1<<endl;
	}
}
