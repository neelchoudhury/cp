#include<bits/stdc++.h>
#define ll long long int
#define ios ios_base::sync_with_stdio(false)
#define mem(a) memset(a,0,sizeof(a))
#define inf 9999999999999999
#define smoke first
#define colour second
 
using namespace std;

struct b{
	int mod[3]={0,0,0}; 
};

int arr[100050];
struct b tree[300010];
int lazy[300010];

void build_tree(int node, int a, int b) {
  	if(a > b) return; // Out of range
  	
  	if(a == b) { // Leaf node
    		tree[node].mod[0] = arr[a]; // Init value
		return;
	}
	
	build_tree(node*2, a, (a+b)/2); // Init left child
	build_tree(node*2+1, 1+(a+b)/2, b); // Init right child
	
	tree[node].mod[0] = (tree[node*2].mod[0] + tree[node*2+1].mod[0]); // Init root value
}

void update_tree(int node, int a, int b, int i, int j) {
  
  	if(lazy[node] != 0) { // This node needs to be updated
   		 

		if(a != b) {
			lazy[node*2] =( lazy[node*2]+lazy[node])%3; // Mark child as lazy'
    			lazy[node*2+1] = ( lazy[node*2+1]+lazy[node])%3; // Mark child as lazy
		}
		int x=lazy[node]%3;
		int tmp;
		while(x>0)
		{
			
			tmp=tree[node].mod[2];
			tree[node].mod[2]=tree[node].mod[1];
			tree[node].mod[1]=tree[node].mod[0];
			tree[node].mod[0]=tmp;
			x--;
		}
		lazy[node]=0;
	 
   	 
  	}
  
	if(a > b || a > j || b < i) // Current segment is not within range [i, j]
		return;
    
  	if(a >= i && b <= j)  // Segment is fully within range
  	{
  		lazy[node]=(lazy[node]+1)%3;
  		
  		if(lazy[node] != 0) { // This node needs to be updated
   		 

		if(a != b) {
			lazy[node*2] =( lazy[node*2]+lazy[node])%3; // Mark child as lazy'
    			lazy[node*2+1] = ( lazy[node*2+1]+lazy[node])%3; // Mark child as lazy
		}
		int x=lazy[node]%3;
		int tmp;
		while(x>0)
		{
			
			tmp=tree[node].mod[2];
			tree[node].mod[2]=tree[node].mod[1];
			tree[node].mod[1]=tree[node].mod[0];
			tree[node].mod[0]=tmp;
			x--;
		}
		lazy[node]=0;
   	 
  		}
  		return ;
	}

	update_tree(node*2, a, (a+b)/2, i, j ); // Updating left child
	update_tree(1+node*2, 1+(a+b)/2, b, i, j ); // Updating right child
	for(int i=0; i<3; i++)
	{
		tree[node].mod[i] = (tree[node*2].mod[i]+ tree[node*2+1].mod[i]); // Updating root with max value
		
	}
}

int query_tree(int node, int a, int b, int i, int j) {
	
	if(a > b || a > j || b < i) return 0; // Out of range

	
  		if(lazy[node] != 0) { // This node needs to be updated
   		 

		if(a != b) {
			lazy[node*2] =( lazy[node*2]+lazy[node])%3; // Mark child as lazy'
    		lazy[node*2+1] = ( lazy[node*2+1]+lazy[node])%3; // Mark child as lazy
		}
		int x=lazy[node]%3;
		int tmp;
		while(x>0)
		{
			
			tmp=tree[node].mod[2];
			tree[node].mod[2]=tree[node].mod[1];
			tree[node].mod[1]=tree[node].mod[0];
			tree[node].mod[0]=tmp;
			x--;
		}
		lazy[node]=0;
   	 
  	}

	if(a >= i && b <= j) // Current segment is totally within range [i, j]
		return tree[node].mod[0];

	int q1 = query_tree(node*2, a, (a+b)/2, i, j); // Query left child
	int q2 = query_tree(1+node*2, 1+(a+b)/2, b, i, j); // Query right child

	int res = q1+q2; // Return final result
	
	return res;
}

int main()
{
	int n,q;
	mem(tree);
	mem(lazy);
	scanf("%d %d",&n, &q);
	arr[0]=1;
	for(int i=1; i<n; i++)
		arr[i]=1;
/*	for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";*/
	//cout<<endl;
	build_tree(1,0,n-1);
	
/*	for(int i=0; i<4*n; i++)
	{
		cout<<tree[i].mod[0]<<" "<<tree[i].mod[1]<<" "<<tree[i].mod[1]<<endl;
	}*/
	int c, l,r;
	while(q--)
	{
		scanf("%d %d %d",&c,&l,&r);
		if(c==0)
		{
			update_tree(1,0,n-1,l,r	);
				/*for(int i=0; i<2*n; i++)
	{
		cout<<tree[i].mod[0]<<" "<<tree[i].mod[1]<<" "<<tree[i].mod[2]<<endl;
	}*/
		}	
		else
		{
			printf("%d\n", query_tree(1,0,n-1,l,r));
			 
		}
	}
	
	return 0;
}
