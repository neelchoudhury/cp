#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[100010];

int main()
{
	ll n;	
	cin>>n;
	for(int i=0;i<n; i++)
	{
		cin>>a[i];
	}
	ll ans=1, curr=1;
	for(ll i=1; i<n; i++)
	{
		if(a[i]>a[i-1])
		{
			curr++;
		}
		else
		{
			ans=max(curr,ans);
			curr=1;
		}
	 
	}
	ans=max(ans,curr);
	cout<<ans<<endl;
	return 0;
}
