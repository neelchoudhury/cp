#include<bits/stdc++.h>
#define ld long double
#define N 301

ld a[N][N];

using namespace std;

int main()
{
	int t,n;
	a[0][0]=0;
	for(int i=0; i<=N; i++)
	{
		if(i>0)
			a[i][0]=0;
		for(int j=1; j<=N; j++)
		{
			a[i][j]=a[i][j-1]*(i-j+1)/i;
		}
	}
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<a[n][n]<<endl;
	}
}
