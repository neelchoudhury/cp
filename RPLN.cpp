#include<bits/stdc++.h>
#define ll long long int
#define N 100010
#define MAX 1000000011

using namespace std;

ll arr[N];
ll tree[4*N];
ll lazy[4*N];

void build_tree(ll index, ll a, ll b)
{
	if(a>b)
	{
		return;
	}
	if(a==b)
	{
		tree[index]=arr[a];
		return ;
	}
	
	build_tree(2*index, a,(a+b)/2);
	build_tree(2*index+1, 1+(a+b)/2, b);
	
	tree[index]=min(tree[2*index], tree[2*index +1]);
}

ll query_tree(ll index, ll a, ll b, ll i, ll j)
{
	if(a>b or a>j or b<i)
	{
		return  MAX;
	}
	if(a>=i and b<=j)
	{
		return tree[index];
	}
	ll q1=query_tree(2*index, a,(a+b)/2, i,j);
	ll q2=query_tree(2*index+1, (a+b)/2+1, b, i, j);
	
	return min(q1,q2);
}

int main()
{
	ll t,n,q;
	scanf("%lld", &t);
	for(ll i=1; i<=t; i++)
	{
		printf("Scenario #%lld:\n", i);
		memset(arr,0,sizeof(arr));
		memset(tree, MAX, sizeof(tree));
		scanf("%lld %lld", &n, &q);
		for(ll i=0; i<n; i++)
			scanf("%lld", &arr[i]);
		build_tree(1, 0, n-1);
		/*for(int i=0; i<20; i++)
			cout<<tree[i]<<" ";
		cout<<endl;*/
		ll a,b;
		for(ll i=1; i<=q; i++)
		{
			scanf("%lld %lld", &a, &b);
			printf("%lld\n", query_tree(1,0,n-1,a-1,b-1));
		}
	}
	return 0;
}
