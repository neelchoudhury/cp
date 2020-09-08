#include <bits/stdc++.h>
#define ll int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define ios ios_base::sync_with_stdio(false)
#define inf INT_MAX

using namespace std;

int a[200010];
int arr[200010];
int tree[900010];

void build_tree(int node, int a, int b) {
    if(a > b) return; // Out of range
  	
  	if(a == b) { // Leaf node
    		tree[node] = arr[a]; // Init value
		return;
	}
	
	build_tree(node*2, a, (a+b)/2); // Init left child
	build_tree(node*2+1, 1+(a+b)/2, b); // Init right child
	
	tree[node] = max(tree[node*2], tree[node*2+1]); // Init root value
}

int query_tree(int node, int a, int b, int i, int j) {
	
	if(a > b || a > j || b < i) return -inf; // Out of range
 
	if(a >= i && b <= j) // Current segment is totally within range [i, j]
		return tree[node];
 
	int q1 = query_tree(node*2, a, (a+b)/2, i, j); // Query left child
	int q2 = query_tree(1+node*2, 1+(a+b)/2, b, i, j); // Query right child
 
	int res = max(q1, q2); // Return final result
	
	return res;
}

void rotate(ll n)
{
	int tmp = a[n-1];
	for(ll i=n-1; i>=1; i--)
	{
		a[i] = a[i-1];
	}
	a[0] = tmp;

}
 
int getit(ll n, ll k)
{
	int sum = 0, ans = 0;
	for(ll i = 0; i<k; i++)
		sum+=a[i];
	ans = sum;
	for(ll i=k; i<n; i++)
	{
		sum = sum + a[i] - a[i-k];
		ans = max(ans, sum);
	}
	ans = max(ans, sum);
	return ans;
}

int main()
{
	ios;
	ll n,k,p;
	cin>>n>>k>>p;
	for(ll i=0; i<n; i++)
	{
		cin>>a[i];
	}
	if(n<=1000 and k<=1000 and p<=1000)
	{
		string s="";
		cin>>s;
		for(ll i=0; i<p; i++)
		{
			if(s[i]=='!')
			{
				rotate(n);
			}
			else if(s[i]=='?')
			{
				cout<<getit(n, k)<<endl;
			}
	// 		for(ll i=0; i<n; i++)
	// 	cout<<a[i]<<" ";
	// cout<<endl;
		}
		return 0;
	}
	for(ll i=n; i<2*n; i++)
	{
		a[i]=a[i-n];
	}
	ll sum = 0;
	for(ll i=0; i<k; i++)
	{
		sum+=a[i];
	}
	arr[0]=sum;
	for(ll i=k; i<2*n; i++)
	{
		sum = sum + a[i] - a[i-k] ;
		arr[i-k+1] = sum ;
	}
	// for(ll i=0; i<4*n-k+1; i++)
	// 	cout<<arr[i]<<" ";
	// cout<<endl;
	build_tree(1, 0, 2*n-k);
	ll ind1 = n, ind2 = 2*n-k;
	string s="";
	cin>>s;
	ll ans = 0;
	for(ll i=0; i<s.length(); i++)
	{
		if(s[i]=='!')
		{
			ind1--;
			ind2--;
			if(ind1==0)
			{
				ind1 = n;
				ind2 = 2*n-k;
			}
		}
		else if(s[i]=='?')
		{
			// cout<<ind1<<" "<<ind2<<endl;
			ans = 0;
			ans = query_tree(1, 0, 2*n-k, ind1, ind2);
			cout<<ans<<endl;
		}
	}
	return 0;
}