#include<bits/stdc++.h>
#define ll long long int

using namespace std;

struct poly{
	ll no=0;
	vector<pair<ll,ll>> coor;
};

ll ar(pair<ll,ll> a, pair<ll,ll> b, pair<ll,ll> c)
{
	ll x,y,z;
	x=b.first*c.second-c.first*b.second;
	y=c.first*a.second-a.first*c.second;
	z=a.first*b.second-b.first*a.second;
	 
	return abs(x+y+z);
}

int main()
{
	ll t,n;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld", &n);
		struct poly m[n];
		ll z,w;
		for(ll i=0; i<n; i++)
		{
			scanf("%lld", &m[i].no);
			for(ll j=0; j<m[i].no; j++)
			{
				scanf("%lld %lld", &z,&w);
				m[i].coor.push_back(make_pair(z,w)); 
			}
		}
		ll x[n];
		memset(x,0,sizeof(x));
		for(ll i=0; i<n; i++)
		{  
			x[i]=m[i].coor[0].first;
			for(ll j=1; j<m[i].no; j++)
			{
				if(m[i].coor[j].first>x[i])
					x[i]=m[i].coor[j].first;
			}
			  
		}
		ll y[n];
		memset(y,0,sizeof(y));
		for(ll i=0; i<n; i++)
		{
			y[i]=x[i];
		}
		sort(x,x+n);
		ll b[n];
		ll low,high,mid;
		memset(b,0,sizeof(b));
		for(ll i=0; i<n; i++)
		{
			low=0,high=n-1;
			mid=(high+low)/2;
			while( low<=high)
			{ 
				if(y[i]==x[mid])
				{
					b[i]=(mid); 
					low=high+1;
				}
				else if(y[i]>x[mid])
				{
					low=mid+1;
					mid=(low+high)/2;
				}
				else
				{
					high=mid-1;
					mid=(low+high)/2;
				}
			}
		}
		for(ll i=0; i<n; i++)
			printf("%lld ",b[i]);
		cout<<endl;
	}
	return 0;
}
