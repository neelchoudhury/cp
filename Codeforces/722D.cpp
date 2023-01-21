#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define sc(n) scanf("%lld",&n)
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 

using namespace std;

ll a[50010];
set<ll> s;
set<ll>::iterator ii;

int main()
{
	ll n;
	scanf("%lld",&n);
	//cout<<n<<endl;
	ll hi=0;
	for(ll i=0; i<n; i++)
	{
		scanf("%lld", &a[i]);
		hi=max(hi,a[i]);
		//cout<<hi<<endl;
	}
	//cout<<hi<<endl;
	ll lo=0;
	ll val=INT_MAX,mid=0,f=0,j=0;
	while(lo<=hi)
	{
		mid=lo+(hi-lo)/2;
		s.clear();
	//	cout<<lo<<" bing"<<endl;
		for(ll i=0; i<n; i++)
		{
			j=a[i];
			f=0;
			while(j)
			{
				if(j<=mid and s.find(j)==s.end())
				{
					s.insert(j);
					break;
				}
				
					j/=2;
				
			}
			if(j==0)
			{
				f=1;
				break;
			}
		}
		if(f)
		{
			lo=mid+1;
		}
		else
		{
			
			val=min(val,mid);
			hi=mid-1;
		}
	}
	//cout<<val<<" nn"<<endl;
	s.clear();
	for(ll i=0; i<n; i++)
	{
		j=a[i];
		while(j>val or s.find(j)!=s.end())
		{
			 
			j/=2;
		}
		s.insert(j);
		//printf("%lld ", j);
	}
	for(ii=s.begin(); ii!=s.end(); ii++)
	 	printf("%lld ", *ii);
	printf("\n");
	return 0;
}