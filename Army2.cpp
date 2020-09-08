#include<iostream>
#include<cmath>
#include<algorithm>
#define ll long long int

using namespace std;

int main()
{
	ll t,n,m;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		ll b[n][m];
		ll a[m];
		for(int i=0;i<m;++i)
		{
			cin>>a[i];
			for(int j=0; j<n;++j)
			{
				b[i][j]=abs(j-a[i]);
				cout<<b[i][j]<<" ";
			}
		}
		/*for(int i=0; i<m;++i)
		{
			sort(b[i],b[i]+m);
			cout<<b[i][m-1]<<" ";
		}*/
		cout<<endl;
	}
}
