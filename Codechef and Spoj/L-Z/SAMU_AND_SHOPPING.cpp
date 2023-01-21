#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[100010][3];
ll f[100010][3];

int main()
{
	ios_base::sync_with_stdio(false);
	ll t,n;
	cin>>t;
	int pre;
	while(t--)
	{
		cin>>n;
		ll ans=0;
		for(int i=0;i<n; i++)
			cin>>a[i][0]>>a[i][1]>>a[i][2];
		memset(f,0,sizeof(f));
		f[0][0]=a[0][0],f[0][1]=a[0][1],f[0][2]=a[0][2];
		for(int i=0; i<n; i++)
		{
			f[i][0]=a[i][0]+min(f[i-1][1],f[i-1][2]);
			f[i][1]=a[i][1]+min(f[i-1][0],f[i-1][2]);
			f[i][2]=a[i][2]+min(f[i-1][1],f[i-1][0]);
		}
		
			//cout<<ans<<endl;
		ans=min(f[n-1][0],min(f[n-1][1],f[n-1][2]));
		cout<<ans<<endl;
		
	}
	return 0;
	
}
