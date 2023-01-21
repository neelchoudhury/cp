#include<bits/stdc++.h>
#define ll long long int
#define ios ios_base::sync_with_stdio(false)

using namespace std;

ll a[1000010];

int main()
{
	ios;
	ll t,n;
	cin>>t;
	while(t--)
	{
		memset(a,0,sizeof(a));
		cin>>n;
		for(ll i=0; i<n; i++)
		{
			cin>>a[i];
		}
		ll p1,p2,f1,f2;
		int f=0;
		for(ll i=2; i<n-2; i++)
		{
			p2=a[i-2];  
			f2=a[i+2];
			if(p2>a[i] or f2<a[i])
			{
				f=1;
				break;
			}
		}
		if(f==1)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}
	return 0;
}
