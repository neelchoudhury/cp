#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll w,m;
	cin>>w>>m;
	ll a[105][105];
	memset(a,0,sizeof(a));
	for(ll i=0; i<100; i++)
		a[0][i]=pow(w,i);
	for(ll i=1; i<100; i++)
	{
		for(ll j=i;j<100; i++)
			a[i][j]=a[0][j]-a[0][i-1];
	}
	int flag=0;
	for(ll i=0; i<100; i++)
	{
		for(ll j=i; j<100; j++)
		{
			if(m==a[i][j])
			{
				flag=1;
				break;
			}
		}
	}
	if(flag==0)
		cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl;
	return 0;
}
