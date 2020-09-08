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

ll pr[10004];
ll et[10004];
ll val[10004];
 
int main()
{
	ll t,n;
	//cout<<sizeof(a)/sizeof(ll)<<endl;
	//pr(a[1003]);
	for(int i=0;i<=10000; i++)
		pr[i]=1;
	for(int i=0; i<=10000; i++)
		et[i]=i;
	for(int i=0; i<=10000; i++)
		val[i]=0;
	scanf("%lld", &t);
	pr[1]=0;
	pr[0]=0;
	for(int i=2; i<=10000; i++)
	{
		if(pr[i]!=0)
		{
		for(int j=i*i;j<=10000; j+=i)
		{
			pr[j]=0;
		}
		}
	}
	/*for(int i=0; i<=30; i++)
		cout<<pr[i]<<" ";
	cout<<endl;*/
	for(int i=2; i<=10000; i++)
	{
		for(int j=1;j<=sqrt(i);j++)
		{
			if(i%j==0)
			{
				if(j*j!=i)
				{
					
					if(pr[j])
						et[i]=(et[i]*(j-1))/j;
					if(pr[i/j])
						et[i]=(et[i]*(i/j-1))/(i/j);
				}
				else
				{
					//cout<<i<<" ggg "<<endl;
					if(pr[j])
						et[i]=(et[i]*(j-1))/j ;
				}
			}
		}
	}
	et[1]=1;
	/*for(int i=0; i<=30; i++)
		cout<<et[i]<<" ";
	cout<<endl;*/
	for(int i=1; i<=10000; i++)
	{
		for(int j=1; j<=sqrt(i); j++)
		{
			if(i%j==0)
			{
				if(j*j!=i)
					val[i]+=(et[j]*j+et[i/j]*(i/j));
				else
					val[i]+=(et[j]*j);
				 
			}
			//cout<<endl;
		}
		
	} 
	while(t--)
	{
		
		scanf("%lld", &n);
		ll s=0;
		if(n>=10000)
		{
			for(int i=1; i<=(n-1)/2; i++)
			{
				s+=(n/gcd(n,i));
			}
			s*=2;
			s+=1;
			if(n%2==0)
			{
				s+=2;
			}
		}
		else
		{
			s=val[n];
		}
		pr(s);
	}
	return 0;
} 
