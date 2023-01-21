#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[120];
ll b[120];
ll c[120];
//vector<pair<ll,ll>> v;

bool ifprime(ll n)
{
	
	if(n==1)
	return false;
	else
	{
		for(ll i=2; i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
				return false;
				break;
			}
		}
		return true;
	}
	
}

void findprimes(ll m,ll n)
{
	for(int i=m; i<=n; i++)
	{
		if(ifprime(i))
		{
			a[i]=1;
		}
		else
			a[i]=0;
	}
}

int main()
{
	//v.clear();
	for(ll i=0; i<=120; i++)
		a[i]=0,b[i]=0,c[i]=0;
	findprimes(1,110);
	/*int qq=0;
	for(ll i=0; i<=110; i++)
	{
		 
			if(a[i]) 
			{
				cout<<i<<endl;
				qq++;
			}
	}
	cout<<qq<<endl;*/
 	/*for(ll i=0; i<=20; i++)	
 		d[i]=1;
	for(ll i=1; i<=20; i++)
		d[i]=d[i-1]*i;
	for(ll i=0; i<=20; i++)
		cout<<i<<" "<<d[i]<<endl;*/
	ll ans=1;
	for(ll i=1; i<=110; i++)
	{
		ans=1;
		for(ll j=2; j<=(i); j++)
		{
			if(a[j])
			{
				ll k=j;
				ans=0;
				while(k<=i)
				{
					ans+=i/k;
					k*=j;
				}
				b[j]=ans;
			}
		}
		ans =1;
		for(ll j=2; j<=i; j++)
		{
			if(b[j])
			{
				ans*=(b[j]+1);
			}
		 } 
		c[i]=ans;
		//v.push_back(pair<ll,ll>(ans,i));
	}
/*	for(ll i=0; i<=110; i++)
		cout<<i<<" "<<c[i]<<endl;*/
	ll t,n;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld", &n);
		int f=0;
		if(n==0)
			printf("1\n");
		else if(n<=110)
		{
			for(ll i=1; i<=110; i++)
			{
				if(c[i]==n)
				{
					printf("%lld\n", i);
					f=1;
					break;
				}
			}
			if(f==0)
				printf("nai\n");
		}
		else
		{
			printf("nai\n");
		}
	}
	return 0;
}
