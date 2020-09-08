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

int main()
{
	ll n,x;
	cin>>n;
	cin>>x;
	ll val=(ll)pow(2,n)-1;
	cout<<abs(val-x)<<endl;
	return 0;
}