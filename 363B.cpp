#include<bits/stdc++.h>
#define N 150010

using namespace std;

int a[N];

int main()
{
	int n,k;
	cin>>n>>k;
	for(int i=0; i<n; i++)
		cin>>a[i];
	int sum=0,ans=0;
	for(int i=0; i<k; i++)
	{
		sum+=a[i];
	}
	ans=sum;
	int j=0;
	for(int i=k;i<n; i++)
	{
		sum+=(a[i]-a[i-k]);
		if(sum<ans)
		{
			j=i-k+1;
			ans=sum;
		}
	}
	cout<<j+1<<endl;
	return 0;
}
