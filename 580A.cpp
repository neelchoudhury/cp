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
	ll ans=1,ctr=1;
	for(int i=1; i<n; i++)
	{
		if(a[i]<a[i-1]  )
		{
			ans=max(ans,ctr);
			ctr=1;
		}
		
		else if(a[i]>=a[i-1])
		{
			ctr++;
		}
		if(i==n-1)
		{
		//	ctr++;
			ans=max(ans,ctr);	
		}
	}
	cout<<ans<<endl;
	return 0;
}
