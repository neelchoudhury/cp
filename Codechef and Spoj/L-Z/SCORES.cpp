#include<bits/stdc++.h>
#define ll long long int
#define ios ios_base::sync_with_stdio(false)
#define mem(a) memset(a,0,sizeof(a))
#define inf 9999999999999999
#define smoke first
#define colour second

using namespace std;

ll a[200020];

int main()
{
	ios;
	ll n;
	cin>>n;
	for(ll i=0; i<n; i++)
		cin>>a[i];
	sort(a,a+n);
	cout<<a[n-1]<<" "<<a[n-2]<<endl;
	return 0;
}
