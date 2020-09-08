#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	char a[m][20];
	char b[m][20];
	for(int i=0; i<m; i++)
		cin>>a[i]>>b[i];
	char c[n][20];
	for(int i=0; i<n; i++)
		cin>>c[i];
	int lena[m],lenb[m];
	for(int i=0; i<m; i++)
		lena[i]=strlen(a[i]), lenb[i]=strlen(b[i]);
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(strcmp(c[i], a[j])==0)
			{
				if(lena[j]<=lenb[j])
				{
					cout<<a[j]<<" ";
					break;
				}
				else
				{
					cout<<b[j]<<" ";
					break;
				}
			}
		}
	}
	cout<<endl;
	return 0;
}
