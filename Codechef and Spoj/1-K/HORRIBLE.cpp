#include<bits/stdc++.h>
#define ll long long int
#define ios ios_base::sync_with_stdio(false)
#define mem(a) memset(a,0,sizeof(a))
#define inf 9999999999999999
#define smoke first
#define colour second
#define sc(a) scanf("%lld",&a)
 
using namespace std;

ll tree[3*100010];
ll lazy[3*100010];

void build_tree(ll node, ll a, ll b) {
  	if(a > b) return; // Out of range
  	
  	if(a == b) { // Leaf node
    		tree[node] = 0; // Init value
		return;
	}
	
	build_tree(node*2, a, (a+b)/2); // Init left child
	build_tree(node*2+1, 1+(a+b)/2, b); // Init right child
	
	tree[node] = (tree[node*2]+tree[node*2+1]); // Init root value
}

void update_tree(ll node, ll a, ll b, ll i, ll j, ll value) {
  
  	if(lazy[node] != 0) { // This node needs to be updated
   		tree[node] += lazy[node]; // Update it

		if(a != b) {
			lazy[node*2] += lazy[node]; // Mark child as lazy
    			lazy[node*2+1] += lazy[node]; // Mark child as lazy
		}

   		lazy[node] = 0; // Reset it
  	}
  
	if(a > b || a > j || b < i) // Current segment is not within range [i, j]
		return;
    
  	if(a >= i && b <= j) { // Segment is fully within range
    		tree[node] += value;

		if(a != b) { // Not leaf node
			lazy[node*2] += value;
			lazy[node*2+1] += value;
		}

    		return;
	}

	update_tree(node*2, a, (a+b)/2, i, j, value); // Updating left child
	update_tree(1+node*2, 1+(a+b)/2, b, i, j, value); // Updating right child

	tree[node] = (tree[node*2] + tree[node*2+1]); // Updating root with max value
}

ll query_tree(ll node, ll a, ll b, ll i, ll j) {
	
	if(a > b || a > j || b < i) return 0; // Out of range

	if(lazy[node] != 0) { // This node needs to be updated
		tree[node] += lazy[node]; // Update it

		if(a != b) {
			lazy[node*2] += lazy[node]; // Mark child as lazy
			lazy[node*2+1] += lazy[node]; // Mark child as lazy
		}

		lazy[node] = 0; // Reset it
	}

	if(a >= i && b <= j) // Current segment is totally within range [i, j]
		return tree[node];

	ll q1 = query_tree(node*2, a, (a+b)/2, i, j); // Query left child
	ll q2 = query_tree(1+node*2, 1+(a+b)/2, b, i, j); // Query right child

	ll res = (q1 + q2); // Return final result
	
	return res;
}

int main()
{
	ll t,n,c,ch,p,q,v;
	sc(t);
	while(t--)
	{
		mem(tree);
		mem(lazy);
		//mem(a);
		sc(n);
		sc(c);
		while(c--)
		{
			sc(ch);sc(p);sc(q);
			if(ch==0)
			{
				sc(v);
				update_tree(1,0,n-1,p-1,q-1,v);
			}
			else
			{
				printf("%lld\n", query_tree(1,0,n-1,p-1,q-1));
			}
		}
	}
	return 0;
}
