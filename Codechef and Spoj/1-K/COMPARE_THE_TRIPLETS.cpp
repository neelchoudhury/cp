#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define ios ios_base::sync_with_stdio(false)
#define V 52
#define N 200010

using namespace std;

int main()
{
	ll a[4],b[4];
	mem(a),mem(b);
	for(ll i=0; i<3; i++)
		cin>>a[i];
	for(ll i=0; i<3; i++)
		cin>>b[i];
	ll aa=0,ba=0;
	for(ll i=0; i<3; i++)
	{
		if(a[i]>b[i])
			aa++;
		else if(a[i]<b[i])
			ba++;
	}
	cout<<aa<<" "<<ba<<endl;
	return 0;
}