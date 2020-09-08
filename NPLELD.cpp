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

ll a[1000100],b[1000100],c[1000010];

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
	 ll n,q,k,x;
	 ll m=1000000;
	 cin>>n;
	 mem(a);mem(b);mem(c);
	 for(ll i=0; i<n; i++)
	 {
	 	cin>>x;
	 	a[x]++;
	 }
	 for(ll i=1; i<=m; i++)
	 {
	 	for(ll j=i;j*i<=m; j++)
	 	{
	 		if(i==j)
	 		{
	 			b[i*j]=((b[i*j]%MOD+((a[i]%MOD*(a[i]%MOD-1+MOD)%MOD)%MOD*power(2,MOD-2,MOD)%MOD)%MOD)%MOD);
	 		}
	 		else
	 		{
	 			b[i*j]=(b[i*j]%MOD+ a[i]%MOD*a[j]%MOD)%MOD;
	 		}
	 	}
	 }
	 for(ll i=1; i<=m; i++)
	 {
	 	for(ll j=i; j<=m; j+=i)
	 	{
	 		c[j]=(c[j]%MOD+b[i]%MOD)%MOD;
	 	}
	 }
	 cin>>q;
	 while(q--)
	 {
	 	cin>>k;
	 	cout<<c[k]<<endl;
	 }
	 return 0;
}