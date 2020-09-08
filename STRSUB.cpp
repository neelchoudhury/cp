#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	int t;
	int n,k,q;
	cin>>t;
	while(t--)
	{
		cin>>n>>k>>q;
		int a[n];
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
		}
		int l,r;
		int c[n][2];
		for(int i=0;i<n; i++)
		{
			c[i][0]=0;
			c[i][1]=0;
		}
		for(int i=0; i<n; i++)
		{
			if(a[i]==0)
			{
				if(i==0)
					c[i][0]=1;
				else
				{
					c[i][0]=c[i-1][0]++;
					c[i][1]=c[i-1][1];
				}
			}
			if(a[i]==1)
			{
				if(i==0)
					c[i][1]=1;
				else
				{
					c[i][1]=c[i-1][1]++;
					c[i][0]=c[i-1][0];
				}
			}
		}
		ll cnt=0;
		while(q--)
		{
			cin>>l>>r;
			cnt=0;
			for(int i=l-1; i<r;i++)
			{
				for(int j=i+1;j<r;j++)
				{
					if(i!=0)
					{
						if((c[j][0]-c[i-1][0]<=k) and (c[j][1]-c[j-1][1]<=k))
							cnt++;
					}
					else
					{
						if((c[j][0]-c[i][0]<=k) and (c[j][1]-c[j][1]<=k))
							cnt++;
					}
				}
			}
			cout<<cnt<<endl;
		}
	}
	return 0;
}
