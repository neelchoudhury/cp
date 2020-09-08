#include<bits/stdc++.h>
#define ll long long int

using namespace std;

char a[100][7];
int c[100];
char b[7];

int main()
{
	int t,n,k,l;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		memset(c,0,sizeof(c));
		for(int i=0; i<n; i++)
			scanf("%s", a[i]);
		while(k--)
		{
		cin>>l;
		for(int i=0; i<l; i++)
		{
			scanf("%s",b);
			for(int j=0; j<n; j++)
			{
				if(strcmp(b,a[j])==0)
					c[j]=1;
			}
		}
		}
		for(int i=0; i<n; i++)
		{
			if(c[i]==1)
				cout<<"YES ";
			else
				cout<<"NO ";
		}
		cout<<endl;
		
	}
	return 0;
}
