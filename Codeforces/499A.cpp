#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,x;
	cin>>n>>x;
	int a[n][2];
	for(int i=0;i<n; i++)
		cin>>a[i][0]>>a[i][1];
	int ans=0;
	int curr=1;
	for(int i=0;i<n; i++ )
	{
		if(curr+x<=a[i][0])
		{
			while(curr+x<=a[i][0])
				curr+=x;
		}
		ans+=(a[i][1]-curr+1);
		curr=a[i][1]+1 ;
		
	}
	cout<<ans<<endl;
	return 0;
}
