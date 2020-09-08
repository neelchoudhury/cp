#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define sc(n) scanf("%lld",&n)
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 

using namespace std;

ll a[100010],b[100010],size[100010],arr[100010][4];
vector<ll> str;
ll vis[100010];
multiset<ll> s;
multiset< pair< multiset<ll>::iterator, bool> > its;
multiset<ll>::iterator ii;
ll ans[100010];

void initialize(ll n)
{
    for(ll i = 0;i<n;i++)
    {
		arr[ i ][0] = i ;
		arr[i][1]=a[i];
		size[ i ] = 1;
	}
}

ll root(ll i)
{
    while(arr[ i ][0] != i)           //chase parent of current element until it reaches root.
    {
     i = arr[ i ][0];
    }
    return i;
}

void weightedunion(ll A,ll B)
{
    ll root_A = root(A);
    ll root_B = root(B);
    if(size[root_A] < size[root_B ])
    {
		arr[ root_A ][0] = arr[root_B][0];
		// cout<<"cc "<<arr[root_A][1]<<" dd "<<arr[root_B][1]<<endl;
		ii=s.find(arr[root_A][1]);
		if(ii!=s.end())
			s.erase(ii);
		ii=s.find(arr[root_B][1]);
		if(ii!=s.end())
			s.erase(ii);
		arr[root_B][1]+=arr[root_A][1];
		s.insert(arr[root_B][1]); 
		size[root_B] += size[root_B];
		
	}
   	else
    {
		arr[ root_B ][0] = arr[root_A][0];
		// cout<<"dd "<<arr[root_A][1]<<" cc "<<arr[root_B][1]<<endl;
		ii=s.find(arr[root_A][1]);
		if(ii!=s.end())
			s.erase(ii);
		ii=s.find(arr[root_B][1]);
		if(ii!=s.end())
			s.erase(ii);
		arr[root_A][1]+=arr[root_B][1];
		s.insert(arr[root_A][1]); 
		size[root_A] += size[root_B]; 
	}
	// cout<<"i-> lol ";
	// 	for(ii=s.begin(); ii!=s.end(); ii++)
	// 	{
	// 		cout<<*ii<<" ";
	// 	}
	// 	cout<<endl;
}

bool find(ll A,ll B)
{
    if( root(A)==root(B) )       //if A and B have same root,means they are connected.
    	return true;
    else
    	return false;
}

int main()
{
	ll n;
	sc(n);
	mem(a);
	mem(vis);
	mem(b);
	mem(ans);

	for(ll i=0; i<n; i++)
		sc(a[i]);
	initialize(n);
	for(ll i=0; i<n; i++)
		sc(b[i]);
	reverse(b,b+n);
	ans[0]=0;
	for(ll i=0; i<n; i++)
	{
		b[i]-=1;
		vis[b[i]]=1;
		s.insert(a[b[i]]);
		// cout<<"i-> ";
		// for(ii=s.begin(); ii!=s.end(); ii++)
		// {
		// 	cout<<*ii<<" ";
		// }
		// cout<<endl;
		// cout<<"bing "<<a[b[i]]<<endl;
		ll f1=0,f2=0;
		if(b[i]+1<n and vis[b[i]+1] and !find(b[i],b[i]+1))
		{
			weightedunion(b[i],b[i]+1);
			f2=1;
		}
		if(b[i]-1>=0 and vis[b[i]-1] and !find(b[i],b[i]-1))
		{
			weightedunion(b[i],b[i]-1);
			f1=1;
		}
		
		if(f1*f2 and !find(b[i]+1,b[i]-1) )
		{
			weightedunion(b[i]+1, b[i]-1);

		} 
		if(s.size()>0)
		{
			ii=s.end();
			ii--;
			ans[i+1]=*ii;
		}
		
	}
	// cout<<endl<<endl;
	reverse(ans, ans+n);
	for(ll i=0; i<n; i++)
	{
		printf("%lld\n", ans[i]);
	} 
	return 0;
}