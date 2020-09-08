#include<bits/stdc++.h>
#define ll long long int 
#define MAX (1+(1<<6))  
#define inf 0x7fffffff

using namespace std;

ll arr[100010]; 
list<ll> v[1000010];
ll tree[4*100010]; 
ll pr[1004]; 
vector<ll> pv;

list<ll> primeFactors(list<ll> v, ll n)
{ 
     for(ll i=0; i<pv.size(); i++)
     {
     	if(n%pv[i]==0)
     	{
     		v.push_back(pv[i]);
     		return v;
		}
	 }
	 v.push_back(n);
	 return v;
}

void build_tree(ll node, ll a, ll b) {
	//cout<<"entered "<<a<<" "<<b<<endl;
    if(a > b) return; // Out of range
  	
  	if(a == b) { // Leaf node
  			if(v[arr[a]].size()==0)
  			{
  				tree[node]=1;	
			}
			else
			{
    			tree[node] = v[arr[a]].front();
    		//	cout<<a<<" "<<v[arr[a]].front()<<" "<<arr[a]<<endl;
				//cout<<v[a].front()<<" bbing"<<endl; // Init value
    			arr[a]=arr[a]/v[arr[a]].front();
    			//cout<<a<<" "<<v[arr[a]].front()<<" "<<arr[a]<<endl;
    		}
		return;
	}
	
	build_tree(node*2, a, (a+b)/2); // Init left child
	build_tree(node*2+1, 1+(a+b)/2, b); // Init right child
	
	tree[node] = max(tree[node*2], tree[node*2+1]); // Init root value
}

void update_tree(ll node, ll a, ll b, ll i, ll j) {
    
	if(a > b || a > j || b < i) // Current segment is not within range [i, j]
		return;
    
  	if(a == b) { // Leaf node
  			if(v[arr[a]].size()==0)
  			{
  				tree[node]=1;	
			}
			else
			{
    			tree[node] = v[arr[a]].front();
				//cout<<v[a].front()<<" bbing"<<endl; // Init value
    			arr[a]=arr[a]/v[arr[a]].front();
    			//cout<<a<<" "<<v[vals[a]].front()<<" "<<vals[a]<<endl;
    		}
    		return;
	}
 
 	if(tree[node]!=1)
 	{
		update_tree(node*2, a, (a+b)/2, i, j); // Updating left child
		update_tree(1+node*2, 1+(a+b)/2, b, i, j); // Updating right child
	}
 
	tree[node] = max(tree[node*2], tree[node*2+1]); // Updating root with max value
}

ll query_tree(ll node, ll a, ll b, ll i, ll j) {
	
	if(a > b || a > j || b < i) return -inf; // Out of range
 
	if(a >= i && b <= j) // Current segment is totally within range [i, j]
		return tree[node];
 
 	
	ll q1 = query_tree(node*2, a, (a+b)/2, i, j); // Query left child
	ll q2 = query_tree(1+node*2, 1+(a+b)/2, b, i, j); // Query right child
 
	ll res = max(q1, q2); // Return final result
	
	return res;
}

int main()
{
	ll t,n,m,ch,l,r;
	scanf("%lld", &t);
	for(ll i=0;i<=1000; i++)
		pr[i]=1;
	pr[1]=0;
	pr[0]=0;
	for(ll i=2; i<=1000; i++)
	{
		if(pr[i]!=0)
		{
		for(ll j=i*i;j<=1000; j+=i)
		{
			pr[j]=0;
			//cout<<i<<" "<<j<<endl;
		}
		}
	} 
 	for(ll i=2; i<=1000; i++)
 	{
 		if(pr[i])
 		{
 			//cout<<i<<endl;
 			pv.push_back(i);
 			//cnt++;
 		}
 	}
 	/*for(ll i=0; i<pv.size(); i++)
 	{
 		cout<<pv[i]<<" ";
	}*/
	//cout<<endl;
	for(ll i=1; i<=1000000; i++)
	{
		v[i]=primeFactors(v[i], i);
	}
	/*list<ll>::iterator ii;
	for(ll i=0; i<=20;i++)
	{

			for(ii=v[i].begin();ii!=v[i].end(); ii++)
				cout<<*ii<<" ";
			cout<<endl;
		}*/
	while(t--)
	{
		scanf("%lld %lld", &n, &m);
		memset(arr,0,sizeof(arr)); 
		memset(tree,0,sizeof(tree)); 
		//memset(vals,0,sizeof(tree)); 
		for(ll i=0; i<n; i++)
		{
			scanf("%lld", &arr[i]);
			//v[i]=primeFactors(v[i], arr[i]);
			
		}
		/*for(ll i=0;i<=n; i++)
			vals[i]=i+1;*/
		build_tree(1,0,n-1);
		while(m--)
		{
			scanf("%lld %lld %lld", &ch, &l,&r);
			if(ch==0)
			{
				update_tree(1,0,n-1,l-1,r-1);
			}
			else if(ch==1)
			{
				ll ans=0;
				ans=query_tree(1,0,n-1,l-1,r-1);
				printf("%lld ", ans);
			}
		}
		printf("\n");
	}
	return 0;
}
