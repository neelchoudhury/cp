#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[30];

int main()
{
	ll n;
	cin>>n;
	for(int i=0;i<n; i++)
		cin>>a[i];
	sort(a,a+n);
	int j=0,k=1;
	for(int i=n-2; i>=0; i--)
	{
	 	if(a[i]>=a[i+1])
	 		a[i]=a[i+1]-1;
	} 
	ll ans=0;
	for(int i=0; i<n; i++)
	{
		if(a[i]>0)
			ans+=a[i];
	}
	cout<<ans<<endl;
	return 0;
}
