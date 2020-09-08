#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[100010];

int main()
{
	ll n;
	cin>>n;
	for(ll i=0; i<n; i++)
		cin>>a[i];
	ll ans=n;
	for(int i=1; i<n; i++)
	{
		a[i]=a[i]+a[i-1];
	}
	/*for(int i=0; i<n; i++)
		cout<<a[i]<<" ";
	cout<<endl;*/
	sort(a,a+n);
	ll q=1,qq=1;
	for(int i=1;i<n; i++)
	{
		if(a[i]==a[i-1])
		{
			q++;	
		}	
		if(a[i]!=a[i-1] or i==n-1)
		{
			qq=max(q,qq);
			q=1;
		}
	}
//	cout<<qq<<endl;
	cout<<ans-qq<<endl;
	return 0;
}
