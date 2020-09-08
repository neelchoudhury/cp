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
	ll ans=0;
	char ch;
	while(cin>>ch)
	{
		if(isupper(ch))
			ans++;
	}
	cout<<ans+1<<endl;
	return 0;
}