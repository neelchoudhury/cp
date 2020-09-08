#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define sc(n) scanf("%lld",&n)
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second
#define pr(n) printf("%lld\n", n)

using namespace std;

ll arr[4010];

int main()
{
	ll n,a,b,c;
	sc(n);sc(a);sc(b);sc(c); 
	ll ans;
	mem(arr);
	ll x,y,z;
	arr[a-1]=arr[b-1]=arr[c-1]=1;
	for(ll i=min(a,min(b,c)); i<n;i++)
	{
		x=y=z=INT_MIN;
		if(i-a>=0 and arr[i-a])
			arr[i]=max(arr[i],arr[i-a]+1);
		if(i-b>=0 and arr[i-b])
			arr[i]=max(arr[i],arr[i-b]+1);
		if(i-c>=0 and arr[i-c])
			arr[i]=max(arr[i],arr[i-c]+1);
		 
	}
	/*for(ll i=0; i<n; i++)
		cout<<arr[i]<<" ";
	cout<<endl;*/
	pr(arr[n-1]);
	return 0;
}