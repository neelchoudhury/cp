#include<iostream>

using namespace std;

int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	int a,b;
	int arr[n][n];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
			arr[i][j]=9999;
	}
	for(int i=0; i<m; i++)
	{
		cin>>a>>b;
		cin>>arr[a][b];
	}
	int v[n];
	for(int i=0; i<n; i++)
		v[i]=0;
	
	
}
