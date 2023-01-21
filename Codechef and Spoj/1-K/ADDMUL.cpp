#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007

using namespace std;

ll arr[100010];
ll tree[1000010];



/**
 * Build and init tree
 */
void build_tree(ll node, ll a, ll b) {
    if(a > b) return; // Out of range
  	
  	if(a == b) { // Leaf node
    		tree[node] = arr[a]; // Init value
		return;
	}
	
	build_tree(node*2, a, (a+b)/2); // Init left child
	build_tree(node*2+1, 1+(a+b)/2, b); // Init right child
	
	tree[node] = max(tree[node*2], tree[node*2+1]); // Init root value
}
 
 

/**
 * Increment elements within range [i, j] with value value
 */
void add_tree(ll node, ll a, ll b, ll i, ll j, ll value) {
    
	if(a > b || a > j || b < i) // Current segment is not within range [i, j]
		return;
    
  	if(a == b) { // Leaf node
    		tree[node] =(tree[node] + value)%MOD;
    		return;
	}
 
	add_tree(node*2, a, (a+b)/2, i, j, value); // Updating left child
	add_tree(1+node*2, 1+(a+b)/2, b, i, j, value); // Updating right child
 
	//tree[node] = max(tree[node*2], tree[node*2+1]); // Updating root with max value
}


/**
 * Multiply elements within range [i, j] with value value
 */
void mul_tree(ll node, ll a, ll b, ll i, ll j, ll value) {
    
	if(a > b || a > j || b < i) // Current segment is not within range [i, j]
		return;
    
  	if(a == b) { // Leaf node
    		tree[node] =(tree[node] * value)%MOD;
    		return;
	}
 
	mul_tree(node*2, a, (a+b)/2, i, j, value); // Updating left child
	mul_tree(1+node*2, 1+(a+b)/2, b, i, j, value); // Updating right child
 
	//tree[node] = max(tree[node*2], tree[node*2+1]); // Updating root with max value
}


/**
 * Set elements within range [i, j] with value value
 */
void val_tree(ll node, ll a, ll b, ll i, ll j, ll value) {
    
	if(a > b || a > j || b < i) // Current segment is not within range [i, j]
		return;
    
  	if(a == b) { // Leaf node
    		tree[node] =( value)%MOD;
    		return;
	}
 
	val_tree(node*2, a, (a+b)/2, i, j, value); // Updating left child
	val_tree(1+node*2, 1+(a+b)/2, b, i, j, value); // Updating right child
 
	//tree[node] = max(tree[node*2], tree[node*2+1]); // Updating root with max value
}

ll getSumUtil( ll ss, ll se, ll qs, ll qe, ll index)
{
    // If segment of this node is a part of given range, then return the 
    // sum of the segment
    if (qs >= ss && qe <= se)
        return tree[index];
 
    // If segment of this node is outside the given range
    if (se > qs || ss < qe)
        return 0;
 
    // If a part of this segment overlaps with the given range
    ll mid =  (ss+ (se-ss)/2);
    return getSumUtil( ss, mid, qs, qe, 2*index) +
           getSumUtil( mid+1, se, qs, qe, 2*index+1);
}

int getSum(  int n, int qs, int qe)
{
    // Check for erroneous input values
   /* if (qs < 0 || qe > n-1 || qs > qe)
    {
        printf("Invalid Input");
        return -1;
    }*/
 
    return getSumUtil(  0, n, qs, qe, 1);
}




int main()
{
	ll n,q;
	scanf("%lld %lld", &n, &q);
	for(ll i=0;i<n; i++)	
		scanf("%lld", &arr[i]);
	
	build_tree(1,0,n-1);
	
	
	for(ll i=0;i<4*n; i++)	
		printf("%lld ", tree[i]);
	cout<<endl;
	
	
	ll c,x,y,v;
	while(q--)
	{
		cin>>c;
		if(c!=4)
		{
			scanf("%lld %lld %lld",&x,&y,&v);
			if(c==1)
			{
				add_tree(1,0,n-1,x-1,y-1,v);
			}
			else if(c==2)
			{
				mul_tree(1,0,n-1,x-1,y-1,v);
			}
			else if(c==3)
			{
				val_tree(1,0,n-1,x-1,y-1,v);
			}
		}
		else
		{
			scanf("%lld %lld", &x, &y);
			ll ans=0;
			ans= getSum (n,x-1,y-1 );
			printf("%lld\n", ans);
		}
		for(ll i=0;i<4*n; i++)	
		printf("%lld ", tree[i]);
	cout<<endl;
	}
	return 0;
}
