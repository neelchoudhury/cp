#include <bits/stdc++.h>
#define ll  long long int
#define ld  double 
#define MOD 10000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second  
#define sc(n) scanf("%d", &n)
#define pr(n) printf("%I64d\n", n)
#define prf(n) printf("%lf\n",n)
#define scf(n) scanf("%lf", &n)
#define ios ios_base::sync_with_stdio(false) 
#define V 300
#define K 510
#define N 55
#define MAX 310
#define maxs 125
#define INF INT_MAX

using namespace std;

struct tree
{
	ll l=-1,r=-1,x=	-1;
}tree[1000010];
ll curr=0;

vector<ll> v1,v2;

void add(ll val, ll ind)
{
	if( tree[ind].x==-1)
	{
		// ind=curr++;
		tree[ind].x=val;
		tree[ind].l=++curr;
		tree[ind].r=++curr;
		return ;
	}
	else
	{
		if(tree[ind].x<val)
		{
			add(val,tree[ind].r);
		}
		else
		{
			add(val, tree[ind].l);
		}
	}
}

void find1(ll x, ll ind)
{
	if(tree[ind].x==x)
	{
		v1.pb(x);
		return ;
	}
	else
	{
		if(tree[ind].x>x)
		{
			v1.pb(tree[ind].x);
			find1(x,tree[ind].l);
		}
		else
		{
			v1.pb(tree[ind].x);
			find1(x,tree[ind].r);
		}
	}
}

void find2(ll x, ll ind)
{
	if(tree[ind].x==x)
	{
		v2.pb(x);
		return ;
	}
	else
	{
		if(tree[ind].x>x)
		{
			v2.pb(tree[ind].x);
			find2(x,tree[ind].l);
		}
		else
		{
			v2.pb(tree[ind].x);
			find2(x,tree[ind].r);
		}
	}
}

int main()
{
	ll n,x;
	cin>>n;
	while(n--)
	{
		cin>>x;
		add(x,0);
	}
	ll y;
	cin>>x>>y;
	find1(x,0);
	find2(y,0);
	// for(ll i=0; i<v1.size(); i++)
	// 	cout<<v1[i]<<" ";
	// cout<<endl;
	// for(ll i=0; i<v2.size(); i++)
	// 	cout<<v2[i]<<" ";
	// cout<<endl;
	ll ans=0;
	ll i=0, j=0;
	reverse(v1.begin(),v1.end());
	reverse(v2.begin(),v2.end());
	ans=max(v1[i],v2[j]);
	do
	{
	    i++; j++;
	    if(i==v1.size() or j==v2.size())
	    	break;
	    ans=max(ans,max(v1[i],v2[j]));

	}while( (v1[i]!=v2[j])   );
	ans=max(ans,max(x,y));
	cout<<ans<<endl;
	return 0;
}

