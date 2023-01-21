#include<iostream>
#include<algorithm>
#include<cstdio>
#define ll long long int

using namespace std;

/*ll g(ll a[],int l, int r, int n)
{
//	ll sm=0;
	ll q=n-r+l-1;
	ll k[q];
	
	ll s;
	for(ll i=0;  i<n; i++)
	{
		if(i+1<l)
		{
			k[i]=a[i];	 
		}
		else if(i+1>r)
		{
			k[i+q-n]=a[i];
		}
	}
		ll i=0;
	for( i=0; i<q;i++)
	{
		cout<<k[i]<<"  ";
	}
	cout<<endl;

	sort(k,k+q);
	for( i=0; i<q;i++)
	{
		cout<<k[i]<<"  ";
	}
	cout<<endl;
	for( i=k[0]; i>=1;i--)
	{
		int flag=1;
		for(ll j=0; j<q and flag==1;j++)
		{
			flag=0;
			if(k[j]%i==0)
				flag=1;
		}
		if (flag==1)
			break;
		
	}
	return i;
}*/

ll gcd(ll m,ll n)
{
	if (m>n)
	{
		ll r=m%n;
		for(; r!=0;)
		{
			m=n;
			n=r;
			r=m%n;
		}
		return n;
	}
	else if(n>m)
	{
		ll r=n%m;
		for(; r!=0;)
		{
			n=m;
			m=r;
			r=n%m;
		}
		return m;
	}
	else
	{
		return m;
	}
}

int main()
{
	ll t;
	scanf("%lld", &t);
	ll n,q;
	while(t--)
	{
		scanf("%lld%lld", &n,&q);
		ll a[n];
		ll l,r,d;
		for(ll i=0; i<n; i++)
		{
			scanf("%lld", &a[i]);
		}
		ll a1[n],a2[n];
		a1[0]=a[0];
		a2[n-1]=a[n-1];
		for(ll i=1; i<n; i++)
		{
			a1[i]=gcd(a1[i-1],a[i]);
		}
		for(ll i=n-2;i>=0;i--)
		{
			a2[i]=gcd(a2[i+1],a[i]);
		}
		for(ll i=0; i<q; i++)
		{
			scanf("%lld%lld", &l, &r);
			if(l==1 and r<n)
			{
				d=a2[r];
			}
			else if(r==n and r>1)
			{
				d=a1[l-2];
			}
			else
			{
				d=gcd(a2[r],a1[l-2]);
			}
			printf("%lld\n", d);
		}
		
	}
	return 0;
	
}
