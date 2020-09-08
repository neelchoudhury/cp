#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define pr(n) printf("%lld\n",n)
#define sc(n) scanf("%lld", &n)
#define ios ios_base::sync_with_stdio(false)
#define V 52
#define N 200010

using namespace std;

ll a[50010][5];

int main()
{
	ll m,n;
	cin>>m>>n;
	mem(a);
	for(ll i=0; i<m; i++)
	{
		for(ll j=0;j<n; j++)
		{
			cin>>a[i][j];
		}
	}
	for(ll i=0; i<m; i++)
	{
		for(ll j=0; j<n; j++)
		{
			if(i==0)
			{
				a[i][j]+=a[i][j-1];
			}
			else if(i>0 and j==0)
				a[i][j]+=a[i-1][j];
			else
			{
				a[i][j]=max(a[i-1][j],a[i][j-1])+a[i][j];
			}
		}
	}
	for(ll i=0; i<m; i++)
		cout<<a[i][n-1]<<" ";
	cout<<endl;
	return 0;
}