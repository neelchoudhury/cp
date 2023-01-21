#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	int n;
	vector<int> b;
	scanf("%d", &n);
	int a[n][n];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
			scanf("%d", &a[i][j]);
	}
	int cnt=0,f=1;
	for(int i=0; i<n; i++)
	{
		for(int j=0;j<n; j++)
		{
			//cout<<"entered"<<endl;
			if(j!=i)
			{
				if((a[i][j]==2 or a[i][j]==0 ))
					f=1;
				else
				{
					f=0;
					break;
				}
			}
			if(f==0)
				break;
		}
		if(f==1)
		{
			cnt++;
			//cout<<"sat "<<i<<endl;
			b.push_back(i);
		}
	}
	printf("%d\n",cnt );
	for(int i=0; i<cnt; i++)
		printf("%d ", b[i]+1);
	cout<<endl;
	return 0;
}
