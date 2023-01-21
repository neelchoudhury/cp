#include<bits/stdc++.h>
#define ll long long int
#define N 100010
#define MAX (1+(1<<20))
#define inf 0x7fffffff
 
using namespace std;
 
ll arr[N];
ll tree[MAX];
bool lazy[MAX];
 
/*void build_tree(ll node, ll a, ll b) {
    if(a > b) return; // Out of range
  	
  	if(a == b) { // Leaf node
    		tree[node] = ; // Init value
		return;
	}
	
	build_tree(node*2, a, (a+b)/2); // Init left child
	build_tree(node*2+1, 1+(a+b)/2, b); // Init right child
	
	tree[node] = (tree[node*2]+ tree[node*2+1]); // Init root value
}*/
 
 
/**
 * Increment elements within range [i, j] with value value
 */
void update_tree(ll node, ll a, ll b, ll i, ll j) {
    
    if(lazy[node] != 0) { // This node needs to be updated
   		tree[node] = (min(j,b)-max(i,a)+1) -tree[node]; // Update it
 
		if(a != b) {
			lazy[node*2] = !lazy[node]; // Mark child as lazy
    			lazy[node*2+1] = !lazy[node]; // Mark child as lazy
		}
 
   		lazy[node] = 0; // Reset it
  	}
	if(a > b || a > j || b < i) // Current segment is not within range [i, j]
		return;
    
  	if(a == b) { // Leaf node
    		tree[node]  = !tree[node];
    		return;
	}
 
	update_tree(node*2, a, (a+b)/2, i, j); // Updating left child
	update_tree(1+node*2, 1+(a+b)/2, b, i, j); // Updating right child
 
	tree[node] = (tree[node*2]+tree[node*2+1]); // Updating root with max value
}
 
/**
 * Query tree to get max element value within range [i, j]
 */
ll query_tree(ll node, ll a, ll b, ll i, ll j) {
	
	if(a > b || a > j || b < i) return 0; // Out of range
	
	if(lazy[node] != 0) { // This node needs to be updated
		tree[node] = (min(j,b)-max(i,a)+1) -tree[node]; // Update it
 
		if(a != b) {
			lazy[node*2] = !lazy[node]; // Mark child as lazy
			lazy[node*2+1] = !lazy[node]; // Mark child as lazy
		}
 
		lazy[node] = 0; // Reset it
	}
 
	if(a >= i && b <= j) // Current segment is totally within range [i, j]
		return tree[node];
 
	 ll q1 = query_tree(node*2, a, (a+b)/2, i, j); // Query left child
	 ll  q2 = query_tree(1+node*2, 1+(a+b)/2, b, i, j); // Query right child
 
	ll	 res = (q1+ q2); // Return final result
	
	return res;
}
 
 
int main()
{
	ll n,q;
	scanf("%lld %lld",&n, &q);
	memset(arr,0,sizeof(arr));
	memset(lazy, 0, sizeof (lazy));
	//build_tree(1,0,n-1);
	/*for(int i=0; i<4*n; i++)
		cout<<tree[i]<<" ";
	cout<<endl;*/
	ll x,y,z;
	ll ans=0;
	while(q--)
	{
		ans=0;
		scanf("%lld %lld %lld", &x, &y, &z);
		if(x==0)
		{
			update_tree(1,0,n-1,y,z);
		}
		else
		{
			ans=query_tree(1,0,n-1,y,z);
			printf("%lld\n", ans);
		}
		/*for(int i=0; i<4*n; i++)
		cout<<tree[i]<<" ";
	cout<<endl;	*/
	}
	return 0;
} 
