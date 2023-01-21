#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define ios ios_base::sync_with_stdio(false)

using namespace std;

ll a[101];

int main()
{
	ios;
	ll n,x;
	cin>>n;
	ll a=0,s=0;
	for(ll i=0; i<n; i++)
	{
		cin>>x;
		if(x%2==0)
		{
			a++;
		}
		else
			s++;
	}
	if(a>s)
		cout<<"READY FOR BATTLE"<<endl;
	else
		cout<<"NOT READY"<<endl;
	return 0;
}