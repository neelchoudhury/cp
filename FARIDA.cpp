#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[10010];
ll b[10010];


int main()
{
	ios_base::sync_with_stdio(false);
	ll t,n;
	cin>>t;
	
	for(int i=1; i<=t; i++)
	{
		cin>>n;
		for(ll i=1;i<=n; i++)
			cin>>a[i];
		for(ll i=1; i<=n; i++)
		{
			if(i==1)
			{
				b[1]=a[1];
			}
			else if(i==2)
			{
				b[i]=max(b[i-1],a[i]);
			}
			else
			{
				b[i]=max(b[i-2]+a[i],b[i-1]);
				//cout<<b[]
			}
		}
		/*for(int i=0; i<n; i++)
			cout<<b[i]<<" ";
		cout<<endl;*/
		cout<<"Case "<<i<<": "<<b[n]<<endl;
	}
	return 0;
}
