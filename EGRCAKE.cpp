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

ll gcd(ll a,ll b)
{
	ll r=a%b;
	while(r!=0)
	{
		a=b;
		b=r;
		r=a%b;
	}
	return b;
}

int main()
{
	ll t,n,m;
	scanf("%lld", &t);
	while(t--)
	{
		//cout<<"doing"<<endl;
		scanf("%lld %lld", &n, &m);
		if(m==0)
		{
			if(n==1)
				cout<<"Yes"<<endl;
			else if(n>1)
				cout<<"No 1"<<endl;
		}
		else if(m>0)
		{
			 if(gcd(n,m)>1)
			 {
			 	//cout<<"No ";
			 	ll ans=n/gcd(n,m);
			 	printf("No %lld\n", ans);
			 }
			 else
			 {
			 	cout<<"Yes"<<endl;
			 }
		}
	}
	return 0;
}
