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

ll pr[10000004];
ll et[10000004];
ll val[10000004];
//ll q[1000006];
 
int main()
{
	ll t,n;
	//cout<<sizeof(a)/sizeof(ll)<<endl;
	//pr(a[1003]);
	for(int i=0;i<=10000000; i++)
		pr[i]=1;
	for(int i=0; i<=10000000; i++)
		et[i]=i;
	for(int i=0; i<=1000000; i++)
		val[i]=0;
	scanf("%lld", &t);
	pr[1]=0;
	pr[0]=0;
	for(int i=2; i<=10000000; i++)
	{
		if(pr[i]!=0)
		{
		for(int j=i*i;j<=10000000; j+=i)
		{
			pr[j]=0;
		}
		}
	}
	/*for(int i=0; i<=30; i++)
		cout<<pr[i]<<" ";
	cout<<endl;*/
	et[1]=1;
	for(int i=1; i<=10000000; i++)
	{
		for(int j=i*i;j<=10000000;j+=i)
		{
		 	et[j]=(et[j]*(i-1))/i;
		}
	}
	et[1]=1;
	/*for(int i=0; i<=30; i++)
		cout<<et[i]<<" ";
	cout<<endl;*/
	for(int i=1; i<=10000000; i++)
	{
		for(int j=i*i;j<=10000000;j+=i)
		{
		 	val[j]+=et[i]*i;
		}
	}
	while(t--)
	{
		sc(n);
		pr(val[n]);
	}
	 
} 
