#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll n;
	cin>>n;
	ll a[n];
	for(ll i=0; i<n; i++)
		cin>>a[i];
	ll mini=0, maxi=0;
	for(int i=0; i<n; i++)
	{
		 if(i==0)
		 {
		 	cout<<a[1]-a[0]<<" "<<a[n-1]-a[0]<<endl;
		 }
		 else if(i==n-1)
		 {
		 	cout<<a[n-1]-a[n-2]<<" "<<a[n-1]-a[0]<<endl;
		 }
		 else
		 {
		 	mini=min(abs(a[i-1]-a[i]), a[i+1]-a[i]);
		 	maxi=max(a[i]-a[0], a[n-1]-a[i]);
		 	cout<<mini<<" "<<maxi<<endl;
		 }
	}
	return 0;
}
