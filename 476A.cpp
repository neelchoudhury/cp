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
	ll n,m;
	cin>>n>>m;
	ll ans=n/2;
	 
	ans+=n%2;
	//n=max(n,m);
	ll f=-1;
	for(ll i=ans; i<=n; i++)
	{
		if(i%m==0)
		{
			f=i;
			break;
		}
	}
	cout<<f<<endl;
	return 0;
}
