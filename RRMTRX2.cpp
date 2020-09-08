#include<bits/stdc++.h>
#define ll long long int
#define MOD 10000007

using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int a[n][m];
	for(int i=0; i<n; i++)
	{
		for(int j=0;j<m; j++)
			cin>>a[i][j];
	}
	ll s=1;
	ll t=0;
	for(int i=0; i<m; i++)
	{	
		t=0;
		for(int j=0;j<n;j++)
		{
			t=(t+a[j][i])%MOD;
			if(a[j][i]<0)
				t=(t+MOD)%MOD;	
		}
		s=(s*t)%MOD;
	}
	cout<<s<<endl;
	return 0;
}
