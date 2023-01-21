#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define ios ios_base::sync_with_stdio(false);

using namespace std;

ll a[100010];

int main()
{
	ll m,x;
	cin>>m;
	ll f=0;
	for(ll i=0; i<m; i++)
	{
		cin>>x;
		a[x]++;
		if(a[x]>1)
		{
			f=1;
		}
	}
	if(f)
		cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl;
	return 0;
}