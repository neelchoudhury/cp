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
}tree[3000];
ll curr=0;

ll f(ll ind)
{
	ll h1=0,h2=0;
	if(tree[ind].l<0 and tree[ind].r<0)
		return 0;
	if(tree[ind].l>=0)
		h1=f(tree[ind].l);
	if(tree[ind].r>=0)
		h2=f(tree[ind].r);
	return 1+max(h1,h2);
}
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

int main()
{
	ll n,x;
	cin>>n;
	while(n--)
	{
		cin>>x;
		add(x,0);
	}
	// for(ll i=0; i<10; i++)
	// {
	// 	cout<<tree[i].l<<" "<<tree[i].r<<" "<<tree[i].x<<endl;
	// }
	ll ans=1;
	ll ind=1;
	ans=f(0);
	cout<<ans<<endl;
	return 0;
}