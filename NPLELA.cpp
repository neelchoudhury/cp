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
	ios;
	ll w,x,y,z;
	cin>>w>>x>>y>>z;
	if(w>=x+y+z)
		cout<<"Happy"<<endl;
	else
		cout<<"Sad"<<endl;
	return 0;
}