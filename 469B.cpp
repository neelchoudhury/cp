#include<bits/stdc++.h>

using namespace std;

int main()
{
	int p,q,l,r;
	cin>>p>>q>>l>>r;
	int z[p][2];
	int x[q][2];
	for(int i=0; i<p ; i++)
		cin>>z[i][0]>>z[i][1];
	for(int i=0; i<q; i++)
		cin>>x[i][0]>>x[i][1];
	int flag=0;
	int ans=0;
	for(int i=l; i<=r; i++)
	{
		flag=0;
		for(int j=0; i<p; j++)
		{
			
			for(int k=0; k<q; k++)
			{
				if((x[k][0]+i<=z[j][1]))
				{
					flag=1;
					break;
				}
				if(x[k][1]+i>=z[j][0])
				{
					flag=1;
					break;
				}
			}
			if(flag)
				break;
		}
		if(flag)
			ans++;
	}
	cout<<ans<<endl;
	return 0;
}
