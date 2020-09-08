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
map<string, int> m;

int main()
{
	int n;
	cin>>n;
	string s;
	while(n--)
	{	
		cin>>s;
		m[s]++;
	}
	int q;
	cin>>q;
	while(q--)
	{
		cin>>s;
		cout<<m[s]<<endl;
	}
	return 0;
}