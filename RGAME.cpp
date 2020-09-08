#include<bits/stdc++.h>
#define ll long long int
#define ios ios_base::sync_with_stdio(false)
#define mem(a) memset(a,0,sizeof(a))
#define inf 9999999999999999
#define smoke first
#define colour second
#define sc(a) scanf("%lld",&a)
#define pr(a) printf("%lld\n",a)
#define MOD 1000000007
 
using namespace std;

ll a[100010],b[100010];

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
	ll t, n;
	sc(t);
	mem(a),mem(b);
	while(t--)
	{
		sc(n);
		for(ll i=0 ;i<=n; i++)	
			sc(a[i]);
		mem(b);
		b[0]=a[0];
		ll j=n;
		ll sum=0;
		for(ll i=1; i<=n; i++)
		{
			//b[i]=a[i]+b[i-1];
			sum=(sum%MOD + (power(2,j,MOD)*a[i])%MOD )%MOD;
			j--;
		}
		b[1]=sum;
		b[2]=(sum-(power(2,n,MOD)*a[1])%MOD + MOD );
		sum=b[2];
		sum=b[2];
		j=n-1;
		for(ll i=3; i<=n; i++)
		{
			b[i]=(((sum-(power(2,n,MOD)*a[1])%MOD + MOD )%MOD)*2)%MOD;
			sum=b[i];
			j--;
		}
		ll ans=0;
		/*for(int i=0; i<=n; i++)
			cout<<b[i]<<" ";
		cout<<endl;*/
		
		for(ll i=1; i<=n; i++)
		{
			ans=(ans + (a[i-1]*b[i])%MOD)%MOD;
			
		}
		pr(ans);
	}
	return 0;
}
