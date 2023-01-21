#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	int n;
	cin>>n;
	char c[n][n];
	for(int i=0; i<n; i++)
		cin>>c[i];
	int a[n][n];
	
	for(int i=0; i<n; i++)
	{
		for(int j=0;j<n; j++)
			a[i][j]=c[i][j]-'0';
	}
	long double b[n];
	memset(b,0,sizeof(b));
	for(int i=0; i<n; i++)
	{
		for(int j=n-1; j>=0; j--)
		{
			b[i]+=pow(1.1,a[i][j]);
		}
	}
	sort(b,b+n);
/*	for(int i=0; i<n; i++)
		cout<<b[i]<<" ";
	cout<<endl;*/
	int ans=1,maxi=1;
	for(int i=1; i<n; i++ )
	{
		if(b[i]==b[i-1])
			 maxi++;
		else
			ans=max(ans,maxi), maxi=1;
		//cout<<i<<" "<<maxi<<" "<<ans<<endl;
		
	}
	ans=max(ans,maxi);
	cout<<ans<<endl;
	return 0;
}
