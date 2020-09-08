#include<bits/stdc++.h>
#define iosbase ios_base::sync_with_stdio(false)
#define ll long long int

using namespace std;

ll a[1000010];

int main()
{
	iosbase;
	ll n,x;
	memset(a,0,sizeof(a));
	//scanf("%I64d", &n);
	cin>>n;
	//cout<<n<<endl;
	for(ll i=0; i<n; i++)
	{
		//cout<<"hjnf"<<endl;
		//scanf("%I64d", &x);
		cin>>x;
		//cout<<x<<endl;
		a[x]++;
	}
	ll ans=0;
	for(ll i=1; i<=1000000; i++)
	{
		a[i]+=a[i-1]/2;
		a[i-1]=a[i-1]%2;
	}
	x=1;
		while(x<=a[1000000])
	{
		if(x&a[1000000])
			ans++;
		x=x<<1;
		//cout<<x<<" "<<a[1000000]<<endl;
	}
	
	for(ll i=0; i<1000000; i++)
		ans+=a[i];
	
	//printf("%I64d\n", ans);
	cout<<ans<<endl;
	return 0;
}
