#include<bits/stdc++.h>
#define ll long long int
#define N 1000010
#define MAX (1+(1<<6)) // Why? :D
#define inf 0x7fffffff

using namespace std;

ll arr[N];
ll tree[MAX];

/**
 * Build and init tree
 */
void build_tree(int node, int a, int b) {
    if(a > b) return; // Out of range
  	
  	if(a == b) { // Leaf node
    		tree[node] = arr[a]; // Init value
		return;
	}
	
	build_tree(node*2, a, (a+b)/2); // Init left child
	build_tree(node*2+1, 1+(a+b)/2, b); // Init right child
	
	tree[node] = (tree[node*2]+tree[node*2+1]); // Init root value
}

/**
 * Increment elements within range [i, j] with value value
 */
void update_tree(int node, int a, int b, int i, int j, int value) {
    
	if(a > b || a > j || b < i) // Current segment is not within range [i, j]
		return;
    
  	if(a == b) { // Leaf node
    		tree[node]  -= value;
    		return;
	}
 
	update_tree(node*2, a, (a+b)/2, i, j, value); // Updating left child
	update_tree(1+node*2, 1+(a+b)/2, b, i, j, value); // Updating right child
 
	tree[node] = (tree[node*2]+ tree[node*2+1]); // Updating root with max value
}

/**
 * Query tree to get max element value within range [i, j]
 */
ll query_tree(ll node, ll a, ll b, ll i, ll j) {
	
	if(a > b || a > j || b < i) return 0; // Out of range
 
	if(a >= i && b <= j) // Current segment is totally within range [i, j]
		return tree[node];
 
	ll q1 = query_tree(node*2, a, (a+b)/2, i, j); // Query left child
	ll q2 = query_tree(1+node*2, 1+(a+b)/2, b, i, j); // Query right child
 
	ll res = (q1+ q2); // Return final result
	
	return res;
}
 

int main()
{
	ll t;
	ll n,hi;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld %lld", &n, &hi);
		ll l,h;
		//ll b[n+1];
		for(int i=0; i<=n; i++)
			arr[i]=n;
		memset(tree,-1,sizeof(tree));
		build_tree(1, 0, n-1);
		/*for(int i=0; i<20; i++)
			cout<<tree[i]<<" ";
		cout<<endl;*/
		for(ll i=0; i<n; i++)
		{
		//	cout<<"run1"<<endl;
			scanf("%lld %lld", &l,&h);
			update_tree(1, 0, n-1, l, h, 1); 
		}
		/*for(int i=0; i<20; i++)
			cout<<tree[i]<<" ";
		cout<<endl;*/
		/*for(int i=0; i<n; i++)
			cout<<b[i]<<" ";
		cout<<endl;*/
		//ll sum=0,ans=(9999999),tmp;
		ll ind=MAX-1;
		ll qr[n];
		for(; tree[ind]==-1; ind--) ;
		ll j=n-1;
		for(ll i=ind; j>=0; i--)
		{
			if(tree[i]!=-1)
				qr[j--]=tree[i];
		}
		/*for(int i=0; i<n; i++)
			cout<<qr[i]<<" ";
		cout<<endl;*/
		ll sum=0,ans=(9999999),tmp;
		for(ll i=0; i<hi; i++)
			sum+=qr[i] ;
		ans=sum;
		for(ll i=hi; i<n; i++)
		{
		//	cout<<"run4"<<endl;
			//cout<<sum<<" sum "<<" ans "<<ans<<endl;
			sum=sum+qr[i]-qr[i-hi];
			ans=min(ans,sum );
			
		}
		/*for(ll i=0; i<n-hi+1; i++)
		{
			sum=query_tree(1, 0, n-1, i, i+hi-1);
			//cout<<"sum "<<sum<<" i "<<i<<endl;
			ans=min(ans,sum);
		}*/
		ans=min(ans,sum);
		printf("%lld\n", ans);
	}
	return 0;
}
