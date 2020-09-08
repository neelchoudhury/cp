#include<bits/stdc++.h>
#define ll long long int
#define ios ios_base::sync_with_stdio(false);

using namespace std;

ll a[100010], f[100010];

int main()
{
	ios;
	ll n;
	cin>>n;
	ll x;
	for(ll i=0; i<n; i++)
	{
		cin>>x;
		a[x]++;
	}
	memset(f,0,sizeof(f));
	f[0]=0;
	f[1]=a[1];
	for(ll i=2; i<=100000;i++)
	{
		f[i]=max(f[i-2]+(i)*a[i], f[i-1]);
	}
	/*for(int i=0; i<=n; i++)
		cout<<f[i]<<" ";
	cout<<endl;*/
	cout<<f[100000]<<endl;
	return 0;
}
