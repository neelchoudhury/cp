#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define ios ios_base::sync_with_stdio(false)

using namespace std;

ll a[100010],b[100010],c[100010];

ll power(ll a,ll b, ll c)
{
	ll y=a,x=1;
	while(b>0)
	{
		if(b%2==1) x=(x*y)%c;
		y=(y*y)%c;
		b=b/2;
	}
	return x%c;
}
 
int main()
{
	ios;
	ll t,n,x; 
	cin>>t;
	while(t--)
	{
		cin>>n;
		mem(a);mem(b);mem(c);
		for(ll i=0; i<n; i++)
		{
			cin>>x;
			b[i]=x;
			a[x]++;
		}
		sort(b,b+n);
		// for(ll i=0; i<n; i++)
		// 	cout<<b[i]<<" ";
		// cout<<endl;
		for(ll i=0; i<n; i++)
		{
			for(ll j=2*b[i]; j<=100000; j+=b[i])
			{
				c[i]+=a[j];
			}
		}
		/*for(ll i=0; i<n; i++)
			cout<<c[i]<<" ";
		cout<<endl;
		for(ll i=0; i<n; i++)
			cout<<a[b[i]]<<" ";
		cout<<endl;*/
		ll ans=1;
		for(ll i=0; i<n; i++)
		{
			ll k=b[i];
			ll mul=((power(2,a[b[i]],MOD-1)-1+MOD-1)%(MOD-1)*power(2,c[i],MOD-1)%(MOD-1) )%(MOD-1);
			ans=((ans%MOD*power(b[i],mul,MOD)%MOD)%MOD);
			ll f=0;
			while(b[i]==k and i <n)
				i++ ;
			i--;
			//cout<<ans<<endl;
		}
		cout<<ans<<endl;
	}
	return 0;
}