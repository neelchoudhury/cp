#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,m;
	int x,y;
	cin>>n>>m;
	int ans=0;
	for(int i=0; i<=1000; i++)
	{
		for(int j=0; j<=1000; j++)
		{
			x=(i*i+j);
			y=(i+j*j);
			if(x==n and y==m)
				ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}
