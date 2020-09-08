#include<bits/stdc++.h>
#define ll long long int
#define ld long double

using namespace std;

ld a[40010], b[40010];

int main()
{
	ll t,k;
	ld x;
	cin>>t;
	while(t--)
	{
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		cin>>x>>k;
		for(ll i=0; i<k; i++)
		{
			 cin>>a[i];
		}
		for(ll i=0; i<k; i++)
		{
			cin>>b[i];
		}
		ld sum=x;
		for(ll i=0; i<k; i++)
		{
			sum=sum+sum*a[i]/b[i];
		}
		ld ans=100-x*100/sum;
		cout<<(ll)ans<<endl;
	}
	
	return 0;
}
