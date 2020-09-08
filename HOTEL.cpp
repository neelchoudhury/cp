#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t,n;
	int a[110][2];
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0; i<n; i++)
		{
			cin>>a[i][0];
		}
		for(int i=0; i<n; i++)
		{
			cin>>a[i][1];
		}
		int ans=0;
		int ctr=0;
		for(int i=1; i<=1000; i++)
		{
			for(int j=0; j<n; j++)
			{
				if(a[j][0]<=i and a[j][1]>=i)
					ctr++;
			}
			ans=max(ans,ctr);
		}
		cout<<ans<<endl;
	}
	return 0;
}
