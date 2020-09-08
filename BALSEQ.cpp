#include<bits/stdc++.h>
#define ll long long int
#define ios ios_base::sync_with_stdio(false)
#define mem(a) memset(a,0,sizeof(a))
#define inf 9999999999999999
#define smoke first
#define colour second

using namespace std;

int arr[100010];
ll tree[600010];
ll lazy[600010];
char s[100010];

void build_tree(int node, int a, int b) {
    if(a > b) return; // Out of range
 
    if(a == b) { // Leaf node
        tree[node] = arr[a]; // Init value
        return;
    }
 
    build_tree(node*2, a, (a+b)/2); // Init left child
    build_tree(node*2+1, 1+(a+b)/2, b); // Init right child
 
    tree[node] = min(tree[node*2], tree[node*2+1]); // Init root value
}

void update_tree(int node, int a, int b, int i, int j, int value) {
 
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
 
    tree[node] = min(tree[node*2], tree[node*2+1]); // Updating root with max value
}

int query_tree(int node, int a, int b, int i, int j) {
 
    if(a > b || a > j || b < i) return INT_MAX; // Out of range
 
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
 
    int q1 = query_tree(node*2, a, (a+b)/2, i, j); // Query left child
    int q2 = query_tree(1+node*2, 1+(a+b)/2, b, i, j); // Query right child
 
    int res = min(q1, q2); // Return final result
 
    return res;
}

int main()
{
	ios;
	mem(tree);
	mem(lazy);
	mem(arr);
	ll n,q;
	cin>>s;
	n=strlen(s);
	int cnt=0;
	for(ll i=0; i<n; i++)
	{
		if(s[i]=='(')
			cnt++; 
		else
			cnt--;
		arr[i]=cnt;
	}
	build_tree(1, 0, n-1);
	
	cin>>q;
	ll l,r,ans;
	while(q--)
	{
		cin>>l>>r;
		 
		if(s[l]!=s[r]){
            if(s[l]=='(')
                update_tree(1,0,n-1,l,r-1,-2);
            else
                update_tree(1,0,n-1,l,r-1,2);
        }     
		ans=0;
		ans=query_tree(1,  0,  n-1, 0, n-1);
	 	//cout<<ans<<endl;
	 
			if(ans>=0)
				cout<<"Yes"<<endl;
			else
				cout<<"No"<<endl;
		 swap(s[l],s[r]);
		
	}
	return 0;
}
