#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[100010];
map<ll,ll> m[3300];	
map<ll,ll>:: iterator it;

int main()
{
	ll n,qqq;
	char ch;
	ll ii,x;
	ll p,q;
	scanf("%lld %lld", &n, &qqq);
	for(ll i=0; i<n; i++)
	{
		scanf("%lld", &a[i]);
	}
	for(ll i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	ll pp=sqrt(n);
	for(ll i=1; i<=n; i+=pp)
	{
		for(ll j=i; j<i+pp; j++)
		{
			if(j==i)
			{
				m[i][a[j]]++;
			}
		}
		for(ll j=i+1; j<i+pp; j++)
		{
			m[i][a[j]]+=m[i][a[j-1]];
		}
	}
	cout<<qqq<<endl;
	while(qqq--)
	{
		scanf("%c", &ch);
		cout<<"  "<<ch<<endl;
		if(ch=='M')
		{
			scanf("%lld %lld", &ii, &x);
			for(ll i=0; i<pp; i++)
			{
				it=m[i].find(a[ii]);
				if(it!=m[i].end())
				{
					(it->second)--;
					for(;it!=m[i].end(); it++)
					{
						(it->second)--;
					}
				}
				m[i][x]++;
				it=m[i].find(x);
				for(;it!=m[i].end(); it++)
				{
					it->second++;
				}
			}
		}
		else if(ch=='C')
		{
			
			cout<<"second op"<<endl;
			scanf("%lld %lld %lld", &p, &q, &x);
				
				pp=p/(ll)sqrt(n);
				ll ans=0;
				ll qq=q/(ll)sqrt(n);
				for(ll i=pp; i<qq; i++)
				{
					if(i==pp)
					{
						for(ll j=p; j<i*(ll)sqrt(n); j++)
							if(a[i]<=x)
								ans++;
					}
					else if(i=qq-1)
					{
						 for(ll j=(qq-1)*(ll)sqrt(n); j<q; j++)
						 	if(a[i]<=x)
						 		ans++;
					}
					else 
					{
						it=m[i].upper_bound(x);
						if(it->first==x)
						{
							ans+=it->second;
						}
						else
						{
							
							ans+=(--it)->second;
						}
					}
				}
				printf("%lld\n", ans);
				
		}
		
	}
	return 0;
	
	
}
