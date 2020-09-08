#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	int x,y,n,k;
	cin>>t;
	while(t--)
	{
		cin>>x>>y>>k>>n;
		int p[n],c[n];
		for(int i=0; i<n; i++)
		{
			cin>>p[i]>>c[i];
		}
		int flag=0;
		for(int i=0; i<n; i++)
		{
			if(p[i]>=(x-y) and c[i]<=k)
			{
				cout<<"LuckyChef"<<endl;
				flag=1;
				i=n;
			}	
			
		}
		if(!flag)
			cout<<"UnluckyChef "<< endl;
	}
	return 0;
}
