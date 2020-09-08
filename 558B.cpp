#include<bits/stdc++.h>
#define X 1000010

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
		cin>>a[i];
	int b[X][3];
	memset(b,-1,sizeof(b));
	for(int i=0; i<n; i++)
	{
		b[a[i]][0]++;
		if(b[a[i]][1]==-1)
			b[a[i]][1]=i;
		else
			b[a[i]][2]=i;
	}
	int j=999999;
	for(int i=0; i<X; i++)
	{
		if(b[i][2]-b[i][1]<b[j][2]-b[j][1])
			j=i;
	}
	cout<<b[j][1]<<" "<<b[j][2]<<endl;
	return 0;
}
