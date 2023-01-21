#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll t,n,k;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld %lld", &n, &k);
		ll a[n];
		ll s=0;
		for(ll i=0; i<n; i++)
			scanf("%lld", &a[i]), s+=a[i];
		if(s%2==0 and k==1)
			cout<<"odd"<<endl;
		else
			cout<<"even"<<endl;
	 
	 
	 
	}
	return 0;
}
