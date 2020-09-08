#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	int b[n];
	int c[n];
	for(int i=0;i<n; i++)
		cin>>a[i], b[i]=a[i];
	sort(a,a+n);
	
	int cnt=1;
	int lp=0;
	for(int i=n-1; i>=0; i--)
	{
		for(int j=0; j<n; j++)
		{
			if(a[i]==b[j])
			{
				if(i==n-1 )
					c[j]=n-i;
				else
				{
					if(a[i]==a[i+1])
						c[j]=c[j-1];
					else
						 c[j]=n-i;	
				}				
			}
			
		}
		while(a[i-1]==a[i])
				i--;
	}
	for(int i=0; i<n;i++)
		cout<<c[i]<<" ";
	cout<<endl;
	return 0;
	
}
