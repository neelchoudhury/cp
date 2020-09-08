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
	ios;
	ll n,x,pr,f=0;
	cin>>n;
	for(ll i=0; i<n; i++)
	{
		cin>>a[i];
		 
	}
	for(ll i=1; i<n;i++)
	{
		if(a[i]<a[i-1])
		{
			f=1;
			break;
		}
	}
	if(f==1)
		cout<<"Angry"<<endl;
	else
		cout<<"Happy"<<endl;
	return 0;
}