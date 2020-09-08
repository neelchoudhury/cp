#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++)
		cin>>a[i];
	sort(a,a+n);
	int b[n];
	b[0]=a[0];
	int j=1;
	int cnt=0,cnt1=0;
	for(int i=1; i<n; i++)
	{
		 if(a[i]>b[i-1])
		 	b[i]=a[i];
		else
			b[i]=b[i-1]+1;
	}
	for(int i=0; i<n; i++)
	{
		//cout<<b[i]-a[i]<<endl;
		cnt+=(b[i]-a[i]);
	}
	cout<<cnt<<endl;
	return 0;
}
