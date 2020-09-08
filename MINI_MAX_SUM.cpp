#include <bits/stdc++.h>
#define ll long long int
#define ld long double 
#define MOD 1000000007 
#define mem(a) memset(a,0,sizeof(a))
#define pb push_back
#define ff first
#define ss second 
#define ios ios_base::sync_with_stdio(false);
#define V 52

using namespace std;

ll a[6];

int main()
{
	
	mem(a);
	for(ll i=0; i<5; i++)
	{
		cin>>a[i];
	}
	sort(a,a+5);
	ll s1=0,s2=0;
	for(ll i=0; i<4; i++)
	{
		s1+=a[i];
		s2+=a[5-i-1];
	}
	cout<<s1<<" "<<s2<<endl;
	return 0;
}