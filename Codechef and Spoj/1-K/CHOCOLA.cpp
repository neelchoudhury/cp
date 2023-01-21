#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	int a[1010],b[1010];
	int m,n;
	cin>>t;
	while(t--)
	{
		cin>>m>>n;
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		for(int i=1; i<m; i++)
			cin>>a[i];
		for(int j=1;j<n; j++)
			cin>>b[j];
		int ans=0;
		int v=1, h=1;
		sort(a+1,a+m);
		reverse(a+1,a+m);
		sort(b+1,b+n);
		reverse(b+1,b+n);
		int i=1,j=1;
		while(i<m and j<n)
		{
			if(a[i]>b[j])
			{
				ans+=a[i]*v;
				h++;
				i++;
			}
			else
			{
				ans+=b[j]*h;
				v++;
				j++;
			}
		}
		int sum=0;
		if(i<m)
		{
			while(i<m)
			{
				sum+=a[i];
				i++;
			}
			ans+=sum*v;
		//sum=0;
		}
		
		else
		{sum=0;
			while(j<n)
			{
				sum+=b[j];
				j++;
			}
				ans+=sum*h;
		}
	
		cout<<ans<<endl;
	}
	return 0;
}
