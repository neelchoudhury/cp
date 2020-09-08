#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
	ll n;
	cin>>n;
	ll a[n];
	for(ll i=0; i<n; i++)
		scanf("%I64d", &a[i]);
	sort(a,a+n);
	ll s=a[0];
	ll cnt=0;
	for(ll i=1; i<n; i++)
	{
		if(a[i]<s)
		{
			//cout<<"sat i "<<i<<endl;
			cnt++;
			
		}
		else
			s+=a[i];
		
	}
	printf("%I64d\n", n-cnt);
	return 0;
}
