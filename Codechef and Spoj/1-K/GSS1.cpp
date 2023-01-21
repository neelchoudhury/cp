#include<bits/stdc++.h>
#define ll long long int
#define ios ios_base::sync_with_stdio(false)
#define mem(a) memset(a,0,sizeof(a))
#define inf 9999999999999999
#define smoke first
#define colour second

using namespace std;

int main()
{
	ios;
	int n,q;
	cin>>n>>q;
	for(int i=0; i<n;i++)
		cin>>a[i];
	ll x, y, z;
	while(q--)
	{
		cin>>x>>y>>z;
		if(x==1)
		{
			query_tree(1,0,n-1,l,r);
		}
		else
		{
			update_tree(1,0,n-1,l,r);
		}
	}
	
	
		
}
