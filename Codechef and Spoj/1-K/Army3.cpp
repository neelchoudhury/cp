#include<iostream>
#include<algorithm>
#include<cmath>
#define ll long long int

using namespace std;

int main()
{
	ll t,n,m;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		ll a[m],b[n];
		for(ll i=0; i<m;i++)
		{
			cin>>a[i];
		}
		sort(a,a+m);
		for(ll i=0; i<n;i++)
		{
			if(abs(i-a[0])>=abs(i-a[m-1]))
			{
				b[i]=abs(i-a[0]);
			}
			else
			{
				b[i]=abs(i-a[m-1]);
			}
			cout<<b[i]<<" ";
			 
		}
		cout<<endl;
		
	}
}
