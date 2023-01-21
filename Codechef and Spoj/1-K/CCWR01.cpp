#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[40040];

int main()
{
	ll t,n,w,y;
	cin>>t;
	while(t--)
	{
		cin>>n;
		memset(a,0,sizeof(a));
		for(ll i=0; i<n; i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		ll ans=0;
		cin>>w>>y;
		if(w<y)
		{
			 cout<<"Not Possible"<<endl;
			 continue;
		}
		for(ll i=0; i<y; i++)
		{
			if(i==0)
			{
				ans+=a[i]*(w-y+1);
			}
			else
				ans+=a[i];
		}
		cout<<ans<<endl;
	}
	return 0;
}
