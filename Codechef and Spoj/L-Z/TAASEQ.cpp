#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[100010];
ll b[100010];
vector< pair<ll,ll> > v;

int main()
{
	ll t,n;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld", &n);
		for(ll i=0; i<n; i++)
		{
			scanf("%lld",&a[i]);
		}
		ll d=0;
		memset(b,0,sizeof(b));
		for(ll i=1; i<n; i++)
		{
			b[i]=a[i]-a[i-1];
		}
		ll j=b[1];
		if(n==2)
		{
			if(a[0]>a[1])
			 	cout<<a[1]<<endl;
			else
				cout<<a[0]<<endl;
			continue;
		}
		if(n==3)
					{
						if(a[0]<a[2])
						{
						
						for(ll k=1; k<n; k++)
						{
							cout<<a[k]<<" ";
						}
						cout<<endl;
						}
						else
						{
							for(ll k=0; k<n-1; k++)
						{
							cout<<a[k]<<" ";
						}
						cout<<endl;
						}
						continue;
					}
		 
		else
		{
			for(ll i=1; i<n; i++)
			{
				if(v.empty())
				{
					v.push_back(pair<ll,ll> (b[i],0));
				}
				else
				{
					if(v.size()==1)
					{
						if(b[i]!=v[0])
						{
							v.push_back(pair<ll,ll> (b[i],0));
						}
						else
						{
							v[0].second++;
						}
					}
					else if(v.size()==2)
					{
						if(b[i]!=v[0] and b[i]!=v[1])
						{
							v.push_back(pair<ll,ll> (b[i],0));
						}
						else if(b[i]==v[0])
						{
							v[0].second++;
						}
						else
						{
							v[1].second++;
						}
					}
				 
				}
				if(v.size()==3 and i!=n-1)
				{
					cout<<-1<<endl;
					continue;
				}
			}
			if(v.size()==1)
			{
				ll k=0;
				if(a[0]>a[n-1])
				{
					k=1;
				}
				for(ll i=k; i<n-1+k; i++)
				{
					cout<<a[i]<<" ";
				}
				cout<<endl;
				continue;
			}
			else if(v.size()==2)
			{
				ll f=-2;
				if(v[0].second>v[1].second)
				{
					if(v[1].second>2)
					{
						continue;
					}
					for(ll i=1; i<n; i++)
					{
						if(a[i-1]+v[0].second()<a[i])
						{
							cout<<-1<<endl;
							f=-1;
							break;
						}
						else if(a[i-1]+v[0].second()>a[i] and a[i-1]+v[0])
						
					}
				}
			}
			
		}
	}
	return 0;
}
