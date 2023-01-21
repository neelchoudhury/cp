#include<bits/stdc++.h>
#define ll long long int
#define N 100010
#define MAX_INT 1000000999

using namespace std;

ll a[N];
ll b[N];
vector<ll> v;

void f(ll a[],ll h ,ll l, ll x)
{
	ll mid=(h+l)/2;
	if(a[mid]>x and a[mid-1]<=x)
	{
		a[mid]=x;
		return;
	}
	else
	if(a[mid]>x)
	{
		h=mid;
		f(a,h,l,x);
	}
	else
	{
		l=mid+1;
		f(a,h,l,x);
	}
}

void bin(vector<ll> &v, ll x)
{
	memset(b,0,sizeof(b));
	for(int i=0;i<v.size(); i++)
	{
		b[i]=v[i];
	}
	f(b,0,v.size(),x);
	for(int i=0; i<v.size(); i++)
	{
		v[i]=b[i];
	}
}

int main()
{
	int t,n;
	cin>>t;
	vector<ll>:: iterator ii;
	while(t--)
	{
		cin>>n;
		for(int i=0; i<n; i++)
			scanf("%lld", &a[i]);
	 	memset(b,0,sizeof(b));
	 	int j=0;
	 	for(int i=0; i<n; i++)
	 	{
	 		if(i==0)
	 		{
	 			b[j++]=a[i];
	 			a[i]=MAX_INT;
	 		}
	 		else
	 		{
	 			if(a[i]>=b[j-1])
	 			{
	 				b[j++]=a[i];
	 				a[i]=MAX_INT;
	 			}
	 		}
	 	}
	 	sort(a,a+n);
	 	for(int i=0; i<j and a[i]!=MAX_INT; i++)
	 	{
	 		b[i]=a[i];
	 	}
	 	printf("%lld ", j);
		for(int i=0;i<j; i++)
			cout<<b[i]<<" ";
		cout<<endl;
	}
	return 0;
}
