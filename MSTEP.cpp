#include<bits/stdc++.h>
#define ll long long int
 
using namespace std;
 
ll a[250010][2];
int main()
{
	ll t,n;
	scanf("%lld", &t);
	//cout<<t<<endl;
	while(t--)
	{
		memset(a,0,sizeof(a));
		cin>>n;
		int f;
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
			{
				cin>>f;
				a[f][0]=i;
				a[f][1]=j;	
			}
		}
		ll sum=0;
		for(ll i=2; i<=n*n; i++)
		{
			sum+=(abs(a[i][0]-a[i-1][0])+abs(a[i][1]-a[i-1][1]));
			//cout<<"   "<<(abs(a[i][0]-a[i-1][0])+abs(a[i][1]-a[i-1][1]))<<endl;
		}
		cout<<sum<<endl;
	}
	return 0;
} 
