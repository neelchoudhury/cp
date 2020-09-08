#include<bits/stdc++.h>
#define ll long long int
#define ios ios_base::sync_with_stdio(false)
#define mem(a) memset(a,0,sizeof(a))
#define inf 9999999999999999
#define smoke first
#define colour second

using namespace std;

bool arr[100010];
//vector<pair<ll,ll>> v;
//vector<ll> ans;
int tree[6*100010];

void build_tree(ll node, ll a, ll b) {
    if(a > b) return; // Out of range
  	
  	if(a == b) { // Leaf node
    		tree[node] = arr[a]; // Init value
		return;
	}
	
	build_tree(node*2, a, (a+b)/2); // Init left child
	build_tree(node*2+1, 1+(a+b)/2, b); // Init right child
	
	tree[node] = (tree[node*2]+ tree[node*2+1]); // Init root value
}

ll query_tree(ll node, ll a, ll b, ll i, ll j) {
	
	if(a > b || a > sqrt(j) || b < sqrt(i)) return 0; // Out of range
 
	if(a >= sqrt(i) && b <= sqrt(j)) // Current segment is totally within range [i, j]
		return tree[node];
 
	ll q1 = query_tree(node*2, a, (a+b)/2, i, j); // Query left child
	ll q2 = query_tree(1+node*2, 1+(a+b)/2, b, i, j); // Query right child
 
	ll res = (q1+ q2); // Return final result
	
	return res;
}

int main()
{
	ios;
	for(ll i=0; i<=100000;i++)
		arr[i]=1;
	//v.clear();
	//ans.clear();
	ll q;
	ll l,r;
	cin>>q;
	arr[0]=0;
	arr[1]=0;
	for(ll i=2; i<=100000; i++)
	{
		if(arr[i]==1)
		{
			for(ll j=i+i; j<=100000; j+=i)
				arr[j]=0;
		}
	}
	//cout<<arr[5]<<endl;
/*	for(int i=0; i<50; i++)
	{
		cout<<i<<" "<<arr[i]<<endl;
	}*/
	ll ans;
	build_tree(1, 0, 99999);
	while(q--)
	{
		cin>>l>>r;
	//	l=floor(sqrt(l));
	//	r=ceil(sqrt(r));
		ans=query_tree(1, 0, 99999,  l,r ) ;
		cout<<ans<<endl;  
	}
	return 0;
}
